#include "ble_client.h"
#include "esphome/core/log.h"

namespace esphome {
namespace ble_client {

static const char *TAG = "ble_client";

bool BLEClient::gattc_event_handler(esp_gattc_cb_event_t event,
                                    esp_gatt_if_t gattc_if,
                                    esp_ble_gattc_cb_param_t *param) {
  ESP_LOGD(TAG, "BLE event received: %d", event);

  // return false if not handled
  return false;
}

void BLEClient::setup() {
  ESP_LOGD(TAG, "BLEClient setup");
}

void BLEClient::loop() {
  // optional
}

}  // namespace ble_client
}  // namespace esphome
