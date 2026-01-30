#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Doozy_Engine_UI_Input_InputMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Input
{
	struct InputData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool EnableAlternateInputs;
		Assembly_CSharp::Doozy::Engine::UI::Input::InputMode InputMode;
		UnityEngine_CoreModule::UnityEngine::KeyCode KeyCode;
		UnityEngine_CoreModule::UnityEngine::KeyCode KeyCodeAlt;
		mscorlib::System::String* VirtualButtonName;
		mscorlib::System::String* VirtualButtonNameAlt;
		struct StaticFields
		{
			bool DEFAULT_ENABLE_ALTERNATE_INPUTS;
			Assembly_CSharp::Doozy::Engine::UI::Input::InputMode DEFAULT_INPUT_MODE;
			UnityEngine_CoreModule::UnityEngine::KeyCode DEFAULT_ON_CLICK_KEY_CODE;
			UnityEngine_CoreModule::UnityEngine::KeyCode DEFAULT_ON_CLICK_KEY_CODE_ALT;
			mscorlib::System::String* DEFAULT_ON_CLICK_VIRTUAL_BUTTON_NAME;
			mscorlib::System::String* DEFAULT_ON_CLICK_VIRTUAL_BUTTON_NAME_ALT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Reset();
	};
}

