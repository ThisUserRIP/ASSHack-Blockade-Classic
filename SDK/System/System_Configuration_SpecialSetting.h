#pragma once
namespace System::System::Configuration
{
	enum struct SpecialSetting : int32_t
	{
		ConnectionString = static_cast<int32_t>(0x0),
		WebServiceUrl = static_cast<int32_t>(0x1),
	};
}

