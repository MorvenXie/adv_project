/*
=========================================================================*/

#pragma once

#include <memory>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "modules/routing/routing.h"

/**
 * @namespace apollo::routing
 * @brief routing adapter
 */
namespace apollo {
namespace routing {

/**
 * @class Routing_Adatper
 *
 * @brief manger the module(such as routing) init and run.
 *
 * @Morven_20220508
 */
class Routing_Adatper {
 public:
    Routing_Adatper();
    ~Routing_Adatper();

  /**
   * @brief
   * @param
   * @return 0:success, otherwise failed
   */
   void RoutingAdapterInit();

  /**
   * @brief start the thread
   * @param
   * @return 0:success, otherwise failed
   */
    void RoutingAdapterStart();

private:
    Routing g_routing;
};

}  // namespace adapter_routing
}  // namespace apollo
