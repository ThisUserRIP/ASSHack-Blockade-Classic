#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_ComputeBufferType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct ComputeBufferDesc
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t count;
		int32_t stride;
		UnityEngine_CoreModule::UnityEngine::ComputeBufferType type;
		mscorlib::System::String* name;
		void _ctor(int32_t count, int32_t stride);
		void _ctor(int32_t count, int32_t stride, UnityEngine_CoreModule::UnityEngine::ComputeBufferType type);
		int32_t GetHashCode();
	};
}

