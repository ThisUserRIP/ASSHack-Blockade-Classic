#pragma once
namespace System_Configuration::System::Configuration
{
	enum struct ConfigurationElementCollectionType : int32_t
	{
		AddRemoveClearMap = static_cast<int32_t>(0x1),
		AddRemoveClearMapAlternate = static_cast<int32_t>(0x3),
		BasicMap = static_cast<int32_t>(0x0),
		BasicMapAlternate = static_cast<int32_t>(0x2),
	};
}

