#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ButtonInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct InputRow : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_Text* label;
		IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo*>* _buttons_k__BackingField;
		int32_t rowIndex;
		mscorlib::System::Action_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo>* inputFieldActivatedCallback;
		IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo*>* get_buttons();
		void set_buttons(IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo*>* value);
		void Initialize(int32_t rowIndex, mscorlib::System::String* label, mscorlib::System::Action_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo>* inputFieldActivatedCallback);
		void OnButtonActivated(Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo* buttonInfo);
		void _ctor();
	};
}

