#pragma once

#include "esphome/core/component.h"
#include "esphome/components/ble_client/ble_client.h"
#include "esphome/components/sensor/sensor.h"

namespace esphome {
namespace powerpal_ble {

class PowerpalBLE : public PollingComponent {
 public:
  BLEClient *ble_client_;
  // Your sensor declarations
  Sensor *power_sensor_{nullptr};
  Sensor *daily_energy_sensor_{nullptr};
  Sensor *total_energy_sensor_{nullptr};
  Sensor *battery_level_sensor_{nullptr};

  void setup() override;
  void update() override;
};

}  // namespace powerpal_ble
}  // namespace esphome
