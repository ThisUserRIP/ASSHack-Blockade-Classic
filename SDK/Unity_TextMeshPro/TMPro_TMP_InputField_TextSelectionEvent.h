#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_3.h"
#include "TMPro_TMP_InputField.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_InputField; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_InputField_TextSelectionEvent : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_3<mscorlib::System::String, mscorlib::System::Int32, mscorlib::System::Int32>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

