#pragma once
namespace UnityEngine_CoreModule::UnityEngine
{
	enum struct DisableBatchingType : int32_t
	{
		False = static_cast<int32_t>(0x0),
		True = static_cast<int32_t>(0x1),
		WhenLODFading = static_cast<int32_t>(0x2),
	};
}

