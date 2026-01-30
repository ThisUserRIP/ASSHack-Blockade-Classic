#pragma once
namespace UnityEngine_CoreModule::UnityEngineInternal
{
	enum struct TypeInferenceRules : int32_t
	{
		TypeReferencedByFirstArgument = static_cast<int32_t>(0x0),
		TypeReferencedBySecondArgument = static_cast<int32_t>(0x1),
		ArrayOfTypeReferencedByFirstArgument = static_cast<int32_t>(0x2),
		TypeOfFirstArgument = static_cast<int32_t>(0x3),
	};
}

