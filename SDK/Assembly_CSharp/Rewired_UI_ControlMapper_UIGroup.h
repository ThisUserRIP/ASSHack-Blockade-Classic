#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UIGroup : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_Text* _label;
		UnityEngine_CoreModule::UnityEngine::Transform* _content;
		mscorlib::System::String* get_labelText();
		void set_labelText(mscorlib::System::String* value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_content();
		void SetLabelActive(bool state);
		void _ctor();
	};
}

