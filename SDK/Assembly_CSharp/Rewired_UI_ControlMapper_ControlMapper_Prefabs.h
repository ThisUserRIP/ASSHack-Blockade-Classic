#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_Prefabs : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* _button;
		UnityEngine_CoreModule::UnityEngine::GameObject* _fitButton;
		UnityEngine_CoreModule::UnityEngine::GameObject* _inputGridLabel;
		UnityEngine_CoreModule::UnityEngine::GameObject* _inputGridHeaderLabel;
		UnityEngine_CoreModule::UnityEngine::GameObject* _inputGridFieldButton;
		UnityEngine_CoreModule::UnityEngine::GameObject* _inputGridFieldInvertToggle;
		UnityEngine_CoreModule::UnityEngine::GameObject* _window;
		UnityEngine_CoreModule::UnityEngine::GameObject* _windowTitleText;
		UnityEngine_CoreModule::UnityEngine::GameObject* _windowContentText;
		UnityEngine_CoreModule::UnityEngine::GameObject* _fader;
		UnityEngine_CoreModule::UnityEngine::GameObject* _calibrationWindow;
		UnityEngine_CoreModule::UnityEngine::GameObject* _inputBehaviorsWindow;
		UnityEngine_CoreModule::UnityEngine::GameObject* _centerStickGraphic;
		UnityEngine_CoreModule::UnityEngine::GameObject* _moveStickGraphic;
		UnityEngine_CoreModule::UnityEngine::GameObject* get_button();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_fitButton();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_inputGridLabel();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_inputGridHeaderLabel();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_inputGridFieldButton();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_inputGridFieldInvertToggle();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_window();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_windowTitleText();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_windowContentText();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_fader();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_calibrationWindow();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_inputBehaviorsWindow();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_centerStickGraphic();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_moveStickGraphic();
		bool Check();
		void _ctor();
	};
}

