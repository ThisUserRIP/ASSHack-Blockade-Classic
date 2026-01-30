#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_Universal_ShadowCasterGroup2D.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct CompositeShadowCaster2D : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnEnable();
		void OnDisable();
		void _ctor();
	};
}

