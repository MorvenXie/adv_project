/*
=========================================================================*/

#pragma once

#include <memory>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "modules/adapter/kernel_adapter/adapter_routing.h"

/**
 * @namespace apollo::adapter_manager
 * @brief apollo::adapter_manager
 */

namespace apollo {
namespace adapter_manager {

/**
 * @class Module_Manager
 *
 * @brief manger the module(such as routing) init and run.
 *
 * @Morven_20220508
 */
class Module_Manager {
 public:
    Module_Manager();
    ~Module_Manager();

  /**
   * @brief init the thread
   * @param
   * @return 0:success, otherwise failed
   */
   void ModuleManagerInit();

  /**
   * @brief start the thread
   * @param
   * @return 0:success, otherwise failed
   */
    void ModuleManagerStart();

};

}  // namespace adapter_manager
}  // namespace apollo
