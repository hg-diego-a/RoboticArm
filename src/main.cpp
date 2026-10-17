#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "main";

extern "C" void app_main(void)
{
    while (true) {
        ESP_LOGI(TAG, "Hola mundo");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}