#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_TouchScreenKeyboard_Status.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_1.h"
#include "TMPro_TMP_InputField.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_InputField; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_InputField_TouchScreenKeyboardEvent : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_1<UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard_Status>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

