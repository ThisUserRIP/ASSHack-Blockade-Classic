#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired { struct InputMapper; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "..\Rewired_Core\Rewired_ControllerType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::Demos { struct SimpleControlRemapping_Row; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct Controller; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct InputAction; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Rewired_Core::Rewired { struct ControllerStatusChangedEventArgs; };
namespace Rewired_Core::Rewired { struct InputMapper_InputMappedEventData; };
namespace Rewired_Core::Rewired { struct InputMapper_StoppedEventData; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct SimpleControlRemapping : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::InputMapper* inputMapper;
		UnityEngine_CoreModule::UnityEngine::GameObject* buttonPrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* textPrefab;
		UnityEngine_CoreModule::UnityEngine::RectTransform* fieldGroupTransform;
		UnityEngine_CoreModule::UnityEngine::RectTransform* actionGroupTransform;
		UnityEngine_UI::UnityEngine::UI::Text* controllerNameUIText;
		UnityEngine_UI::UnityEngine::UI::Text* statusUIText;
		Rewired_Core::Rewired::ControllerType selectedControllerType;
		int32_t selectedControllerId;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::Demos::SimpleControlRemapping_Row>* rows;
		struct StaticFields
		{
			mscorlib::System::String* category;
			mscorlib::System::String* layout;
			mscorlib::System::String* uiCategory;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		Rewired_Core::Rewired::Player* get_player();
		Rewired_Core::Rewired::ControllerMap* get_controllerMap();
		Rewired_Core::Rewired::Controller* get_controller();
		void OnEnable();
		void OnDisable();
		void RedrawUI();
		void ClearUI();
		void InitializeUI();
		void CreateUIRow(Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange actionRange, mscorlib::System::String* label);
		void SetSelectedController(Rewired_Core::Rewired::ControllerType controllerType);
		void OnControllerSelected(int32_t controllerType);
		void OnInputFieldClicked(int32_t index, int32_t actionElementMapToReplaceId);
		mscorlib::System::Collections::IEnumerator* StartListeningDelayed(int32_t index, int32_t actionElementMapToReplaceId);
		void OnControllerChanged(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void OnInputMapped(Rewired_Core::Rewired::InputMapper_InputMappedEventData* data);
		void OnStopped(Rewired_Core::Rewired::InputMapper_StoppedEventData* data);
		void _ctor();
	};
}

