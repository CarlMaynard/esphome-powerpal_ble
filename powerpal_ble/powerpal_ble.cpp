#include "powerpal_ble.h"
#include "esphome/core/log.h"

namespace esphome {
namespace powerpal_ble {

static const char *TAG = "powerpal_ble";

void PowerpalBLE::setup() {
  ESP_LOGD(TAG, "PowerpalBLE setup");
}

void PowerpalBLE::update() {
  // Polling code
}

}  // namespace powerpal_ble
}  // namespace esphome
