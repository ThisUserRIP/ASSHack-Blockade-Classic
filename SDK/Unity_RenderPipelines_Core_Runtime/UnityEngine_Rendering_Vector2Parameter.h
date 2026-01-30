#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_Rendering_VolumeParameter_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct Vector2Parameter : Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeParameter_1<UnityEngine_CoreModule::UnityEngine::Vector2>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector2 value, bool overrideState);
		void Interp(UnityEngine_CoreModule::UnityEngine::Vector2 from, UnityEngine_CoreModule::UnityEngine::Vector2 to, float t);
	};
}

