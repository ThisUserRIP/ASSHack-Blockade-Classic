#pragma once
namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	enum struct ReflectionProbeSortingCriteria : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Importance = static_cast<int32_t>(0x1),
		Size = static_cast<int32_t>(0x2),
		ImportanceThenSize = static_cast<int32_t>(0x3),
	};
}

