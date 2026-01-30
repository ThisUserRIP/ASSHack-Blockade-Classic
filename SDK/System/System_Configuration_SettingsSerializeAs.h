#pragma once
namespace System::System::Configuration
{
	enum struct SettingsSerializeAs : int32_t
	{
		Binary = static_cast<int32_t>(0x2),
		ProviderSpecific = static_cast<int32_t>(0x3),
		String = static_cast<int32_t>(0x0),
		Xml = static_cast<int32_t>(0x1),
	};
}

