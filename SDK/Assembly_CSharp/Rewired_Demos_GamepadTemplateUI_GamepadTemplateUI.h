#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI { struct ControllerUIElement; };
namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI { struct GamepadTemplateUI_UIElement; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\Rewired_Core\Rewired_ControllerTemplateElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerTemplateElementTarget; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI { struct GamepadTemplateUI_Stick; };
namespace Rewired_Core::Rewired { struct Player; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct InputAction; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };
namespace Rewired_Core::Rewired { struct IControllerTemplateElement; };
namespace Rewired_Core::Rewired { struct ControllerStatusChangedEventArgs; };

namespace Assembly_CSharp::Rewired::Demos::GamepadTemplateUI
{
	struct GamepadTemplateUI : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t playerId;
		UnityEngine_CoreModule::UnityEngine::RectTransform* leftStick;
		UnityEngine_CoreModule::UnityEngine::RectTransform* rightStick;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* leftStickX;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* leftStickY;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* leftStickButton;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* rightStickX;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* rightStickY;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* rightStickButton;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* actionBottomRow1;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* actionBottomRow2;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* actionBottomRow3;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* actionTopRow1;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* actionTopRow2;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* actionTopRow3;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* leftShoulder;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* leftTrigger;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* rightShoulder;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* rightTrigger;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* center1;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* center2;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* center3;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* dPadUp;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* dPadRight;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* dPadDown;
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* dPadLeft;
		IL2CPP::Array<Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_UIElement*>* _uiElementsArray;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement>* _uiElements;
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerTemplateElementTarget>* _tempTargetList;
		IL2CPP::Array<Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick*>* _sticks;
		struct StaticFields
		{
			float stickRadius;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::Player* get_player();
		void Awake();
		void Start();
		void OnDestroy();
		void Update();
		void DrawActiveElements();
		void ActivateElements(Rewired_Core::Rewired::Player* player, int32_t actionId);
		void DrawLabels();
		void DrawLabels(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::InputAction* action);
		void DrawLabel(Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::ControllerUIElement* uiElement, Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::IControllerTemplate* template_, Rewired_Core::Rewired::IControllerTemplateElement* element);
		Assembly_CSharp::Rewired::Demos::GamepadTemplateUI::GamepadTemplateUI_Stick* GetStick(int32_t elementId);
		void OnControllerConnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void OnControllerDisconnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void _ctor();
	};
}

