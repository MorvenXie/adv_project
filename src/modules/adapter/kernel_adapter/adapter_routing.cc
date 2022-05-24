/*
=========================================================================*/

#include "modules/adapter/kernel_adapter/adapter_routing.h"



namespace apollo {
namespace routing {


void Routing_Adatper::RoutingAdapterInit()  {
 g_routing.Init();
}

void Routing_Adatper::RoutingAdapterStart()  {
 g_routing.Start();
}


}  // namespace routing
}  // namespace apollo
