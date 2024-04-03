#include "nvs_flash.h"
#include "wifi_app.h"
#include "blue_led.h"
#include "mpu6050.h"
#include "driver/i2c.h"
#include "wifi_reset_button.h"
#include "esp_log.h"

#include "sntp_time_sync.h"
#include "aws_iot.h"

static const char TAG[] = "main";

void wifi_application_connected_events(void)
{
	ESP_LOGI(TAG, "WiFi Application Connected!!");
	// sntp_time_sync_task_start();
    // aws_iot_start();
}

void app_main(void)
{
    //initialize NVS
    esp_err_t ret = nvs_flash_init();
    if(ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
    {
        ESP_ERROR_CHECK(nvs_flash_erase());
        ret = nvs_flash_init();
    }
    ESP_ERROR_CHECK(ret);
    // configure wifi reset button
    wifi_reset_button_config();
    mpu6050_init(I2C_NUM_0);
    // configure the blue LED
    blue_led_pwm_init();
    //Start the Wifi
    wifi_app_start();
    // Set connected event callback
	wifi_app_set_callback(&wifi_application_connected_events);
}
