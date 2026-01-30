#pragma once
namespace UnityEngine_CoreModule::Unity::Collections
{
	enum struct NativeArrayOptions : int32_t
	{
		UninitializedMemory = static_cast<int32_t>(0x0),
		ClearMemory = static_cast<int32_t>(0x1),
	};
}

