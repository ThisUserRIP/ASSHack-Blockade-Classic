#pragma once
namespace UnityEngine_IMGUIModule::UnityEngine
{
	enum struct ImagePosition : int32_t
	{
		ImageLeft = static_cast<int32_t>(0x0),
		ImageAbove = static_cast<int32_t>(0x1),
		ImageOnly = static_cast<int32_t>(0x2),
		TextOnly = static_cast<int32_t>(0x3),
	};
}

