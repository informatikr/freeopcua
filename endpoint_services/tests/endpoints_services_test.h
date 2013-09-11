/// @author Alexander Rykovanov 2013
/// @email rykovanov.as@gmail.com
/// @brief OPC UA Address space part.
/// @license GNU GPL
///
/// Distributed under the GNU GPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///


#pragma once

#include "../../services_registry/src/services_registry_factory.h"
#include "../src/endpoints_services_factory.h"

#include <opc/common/addons_core/addon_manager.h>

namespace OpcUa
{
  namespace Test
  {

    void RegisterEndpointsServicesAddon(Common::AddonsManager& addons)
    {
      Common::AddonConfiguration endpoints;
      endpoints.Factory.reset(new OpcUa::Impl::EndpointsAddonFactory());
      endpoints.ID = OpcUa::Server::EndpointsServicesAddonID;
      endpoints.Dependencies.push_back(OpcUa::Server::ServicesRegistryAddonID);
      addons.Register(endpoints);
    }

  }
}

