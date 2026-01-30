#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct OpaqueSortMode : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		FrontToBack = static_cast<int32_t>(0x1),
		NoDistanceSort = static_cast<int32_t>(0x2),
	};
}

