#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Renderer.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct LineRenderer : UnityEngine_CoreModule::UnityEngine::Renderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void SetColors(UnityEngine_CoreModule::UnityEngine::Color start, UnityEngine_CoreModule::UnityEngine::Color end);
		void set_startColor(UnityEngine_CoreModule::UnityEngine::Color value);
		void set_endColor(UnityEngine_CoreModule::UnityEngine::Color value);
		void set_startColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& value);
		void set_endColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& value);
	};
}

