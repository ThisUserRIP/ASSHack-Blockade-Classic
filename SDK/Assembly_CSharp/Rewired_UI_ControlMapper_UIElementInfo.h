#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct UIElementInfo : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* identifier;
		int32_t intData;
		Unity_TextMeshPro::TMPro::TMP_Text* text;
		mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::GameObject>* OnSelectedEvent;
		void add_OnSelectedEvent(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::GameObject>* value);
		void remove_OnSelectedEvent(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::GameObject>* value);
		void OnSelect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void _ctor();
	};
}

