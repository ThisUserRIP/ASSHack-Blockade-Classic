#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_ComponentController.h"
namespace Rewired_Core::Rewired { struct InputManager_Base; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerSelector; };
namespace Rewired_Core::Rewired::ComponentControls { struct CustomController_CreateCustomControllerSettings; };
#include "Rewired_ComponentControls_CustomController_InputEvent.h"
namespace Rewired_Core::Rewired::ComponentControls { struct CustomController_InputEvent; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct CustomController; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementSelector; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTargetSet; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTarget; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct CustomController : Rewired_Core::Rewired::ComponentControls::ComponentController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputManager_Base* _rewiredInputManager;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerSelector* _customControllerSelector;
		Rewired_Core::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings* _createCustomControllerSettings;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ComponentControls::CustomController_InputEvent>* _inputEvents;
		int32_t _createdCustomControllerId;
		mscorlib::System::Action* _InputSourceUpdateEvent;
		void add_InputSourceUpdateEvent(mscorlib::System::Action* value);
		void remove_InputSourceUpdateEvent(mscorlib::System::Action* value);
		Rewired_Core::Rewired::InputManager_Base* get_rewiredInputManager();
		void set_rewiredInputManager(Rewired_Core::Rewired::InputManager_Base* value);
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerSelector* get_customControllerSelector();
		Rewired_Core::Rewired::ComponentControls::CustomController_CreateCustomControllerSettings* get_createCustomControllerSettings();
		void _ctor();
		Rewired_Core::Rewired::CustomController* GetCustomController();
		void OnEnable();
		void OnDisable();
		void OnValidate();
		void OnDestroy();
		bool OnInitialize();
		void OnSubscribeEvents();
		void OnUnsubscribeEvents();
		void ClearControlValues();
		bool GetUseCustomController();
		void SetUseCustomController(bool value);
		void SetAxisValue(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* element, float value);
		void SetButtonValue(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* element, bool value);
		void ClearElementValue(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSet* targetSet);
		void ClearElementValue(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* target);
		void ClearElementValue(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* element);
		int32_t ElementExists_Editor(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* element);
		bool ElementExists(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* element);
		bool ValidateElements(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSet* targetSet);
		bool ValidateElement(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTarget* target);
		bool ValidateElement(Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementSelector* element);
		void OnSetProperty();
		bool CheckIsRewiredReady();
		void ProcessInputEvents();
		Rewired_Core::Rewired::CustomController* GetCustomController(bool warn);
		void TryAssignCustomControllerToPlayer(Rewired_Core::Rewired::CustomController* customController);
		void TryDestroyCustomController();
		void OnInputSourceUpdate();
	};
}

