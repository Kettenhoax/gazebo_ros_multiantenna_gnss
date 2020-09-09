// Copyright 2020 AIT Austrian Institute of Technology GmbH
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <gazebo/common/Plugin.hh>
#include <gazebo/sensors/Sensor.hh>
#include <memory>

namespace gazebo_plugins
{
class GazeboRosMultiantennaGnssPrivate;

class GazeboRosMultiantennaGnss : public gazebo::SensorPlugin
{
public:
  GazeboRosMultiantennaGnss();

  ~GazeboRosMultiantennaGnss() = default;

protected:
  void Load(gazebo::sensors::SensorPtr, sdf::ElementPtr) override;

private:
  std::unique_ptr<GazeboRosMultiantennaGnssPrivate> impl_;
};
}  // namespace gazebo_plugins
