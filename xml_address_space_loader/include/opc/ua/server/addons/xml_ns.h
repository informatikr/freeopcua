/// @author Alexander Rykovanov 2013
/// @email rykovanov.as@gmail.com
/// @brief OPC UA Address space part.
/// @license GNU GPL
///
/// Distributed under the GNU GPL License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///


#ifndef OPCUA_XML_ADDRESS_SPACE_LOADER_H_
#define OPCUA_XML_ADDRESS_SPACE_LOADER_H_

#include <opc/common/addons_core/addon.h>

namespace OpcUa
{
  namespace Server
  {

    const char XmlAddressSpaceAddonID[] = "xml_address_space";

    class XmlAddressSpace : public Common::Addon
    {
    public:
      virtual void Load(const char* path) = 0;
    };

  }
}


#endif /* OPCUA_XML_ADDRESS_SPACE_LOADER_H_ */
