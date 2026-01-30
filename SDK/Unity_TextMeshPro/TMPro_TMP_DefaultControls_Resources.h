#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_DefaultControls.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_DefaultControls; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_DefaultControls_Resources
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Sprite* standard;
		UnityEngine_CoreModule::UnityEngine::Sprite* background;
		UnityEngine_CoreModule::UnityEngine::Sprite* inputField;
		UnityEngine_CoreModule::UnityEngine::Sprite* knob;
		UnityEngine_CoreModule::UnityEngine::Sprite* checkmark;
		UnityEngine_CoreModule::UnityEngine::Sprite* dropdown;
		UnityEngine_CoreModule::UnityEngine::Sprite* mask;
	};
}

