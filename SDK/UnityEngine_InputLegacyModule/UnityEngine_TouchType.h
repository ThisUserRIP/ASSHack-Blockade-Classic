#pragma once
namespace UnityEngine_InputLegacyModule::UnityEngine
{
	enum struct TouchType : int32_t
	{
		Direct = static_cast<int32_t>(0x0),
		Indirect = static_cast<int32_t>(0x1),
		Stylus = static_cast<int32_t>(0x2),
	};
}

