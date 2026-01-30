#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Doozy_Engine_UI_Input_InputMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI::Input { struct InputData; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Input
{
	struct BackButton : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Input::InputData* BackButtonInputData;
		bool DebugMode;
		int32_t m_backButtonDisableLevel;
		double m_lastBackButtonPressTime;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::Input::BackButton* s_instance;
			bool DEFAULT_ENABLE_ALTERNATE_INPUTS;
			float BACK_BUTTON_DETECTION_DISABLE_INTERVAL;
			Assembly_CSharp::Doozy::Engine::UI::Input::InputMode DEFAULT_INPUT_MODE;
			UnityEngine_CoreModule::UnityEngine::KeyCode DEFAULT_BACK_BUTTON_KEY_CODE;
			UnityEngine_CoreModule::UnityEngine::KeyCode DEFAULT_BACK_BUTTON_KEY_CODE_ALT;
			mscorlib::System::String* DEFAULT_BACK_BUTTON_VIRTUAL_BUTTON_NAME;
			mscorlib::System::String* DEFAULT_BACK_BUTTON_VIRTUAL_BUTTON_NAME_ALT;
			mscorlib::System::String* NAME;
			bool s_applicationIsQuitting;
			bool s_initialized;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static Assembly_CSharp::Doozy::Engine::UI::Input::BackButton* get_Instance();
		bool get_BackButtonDisabled();
		bool get_CanExecuteBackButton();
		bool get_DebugComponent();
		void Reset();
		void Awake();
		void Update();
		void OnApplicationQuit();
		void Execute();
		static Assembly_CSharp::Doozy::Engine::UI::Input::BackButton* AddToScene(bool selectGameObjectAfterCreation);
		static void Disable();
		static void Enable();
		static void EnableByForce();
		static void Init();
		static Assembly_CSharp::Doozy::Engine::UI::Input::InputData* GetBackButtonInputData();
	};
}

