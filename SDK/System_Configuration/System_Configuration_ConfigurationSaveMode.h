#pragma once
namespace System_Configuration::System::Configuration
{
	enum struct ConfigurationSaveMode : int32_t
	{
		Full = static_cast<int32_t>(0x2),
		Minimal = static_cast<int32_t>(0x1),
		Modified = static_cast<int32_t>(0x0),
	};
}

