#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_FastMemoryFlags.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct FastMemoryDesc
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool inFastMemory;
		UnityEngine_CoreModule::UnityEngine::Rendering::FastMemoryFlags flags;
		float residencyFraction;
	};
}

