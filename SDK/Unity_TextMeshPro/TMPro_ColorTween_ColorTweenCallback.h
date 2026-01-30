#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_1.h"
#include "TMPro_ColorTween.h"
namespace Unity_TextMeshPro::TMPro { struct ColorTween; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct ColorTween_ColorTweenCallback : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<UnityEngine_CoreModule::UnityEngine::Color>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

