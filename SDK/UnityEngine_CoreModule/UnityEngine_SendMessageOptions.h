#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct SendMessageOptions : int32_t
	{
		RequireReceiver = static_cast<int32_t>(0x0),
		DontRequireReceiver = static_cast<int32_t>(0x1),
	};
}

