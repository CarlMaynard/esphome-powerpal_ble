#pragma once

#include "esphome/core/component.h"
#include "esphome/components/esp32_ble_tracker/esp32_ble_tracker.h"

namespace esphome {
namespace ble_client {

class BLEClient : public ESPBTClient {
 public:
  BLEClient() = default;

  // Patched: must return bool to match ESPBTClient
  bool gattc_event_handler(esp_gattc_cb_event_t event,
                           esp_gatt_if_t gattc_if,
                           esp_ble_gattc_cb_param_t *param) override;

  void setup() override;
  void loop() override;
};

}  // namespace ble_client
}  // namespace esphome
