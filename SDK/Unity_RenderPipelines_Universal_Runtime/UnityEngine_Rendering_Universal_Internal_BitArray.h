#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\Unity_Collections_Allocator.h"
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArrayOptions.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct BitArray
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt32> m_Mem;
		int32_t m_BitCount;
		int32_t m_IntCount;
		void _ctor(int32_t bitCount, UnityEngine_CoreModule::Unity::Collections::Allocator allocator, UnityEngine_CoreModule::Unity::Collections::NativeArrayOptions options);
		void Dispose();
		void Clear();
		bool IsSet(int32_t bitIndex);
		void Set(int32_t bitIndex, bool val);
	};
}

