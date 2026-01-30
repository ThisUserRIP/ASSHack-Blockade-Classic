#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_Window.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_UI::UnityEngine::UI { struct Button; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct InputBehaviorWindow_InputBehaviorInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputBehaviorSettings; };
#include "Rewired_UI_ControlMapper_InputBehaviorWindow_ButtonIdentifier.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UIControlSet; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UISliderControl; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace Rewired_Core::Rewired { struct InputBehavior; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct InputBehaviorWindow : Assembly_CSharp::Rewired::UI::ControlMapper::Window
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* spawnTransform;
		UnityEngine_UI::UnityEngine::UI::Button* doneButton;
		UnityEngine_UI::UnityEngine::UI::Button* cancelButton;
		UnityEngine_UI::UnityEngine::UI::Button* defaultButton;
		Unity_TextMeshPro::TMPro::TMP_Text* doneButtonLabel;
		Unity_TextMeshPro::TMPro::TMP_Text* cancelButtonLabel;
		Unity_TextMeshPro::TMPro::TMP_Text* defaultButtonLabel;
		UnityEngine_CoreModule::UnityEngine::GameObject* uiControlSetPrefab;
		UnityEngine_CoreModule::UnityEngine::GameObject* uiSliderControlPrefab;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo>* inputBehaviorInfo;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Action_1<mscorlib::System::Int32>>* buttonCallbacks;
		int32_t playerId;
		struct StaticFields
		{
			float minSensitivity;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Initialize(int32_t id, mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* isFocusedCallback);
		void SetData(int32_t playerId, IL2CPP::Array<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputBehaviorSettings*>* data);
		void SetButtonCallback(Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_ButtonIdentifier buttonIdentifier, mscorlib::System::Action_1<mscorlib::System::Int32>* callback);
		void Cancel();
		void OnDone();
		void OnCancel();
		void OnRestoreDefault();
		void JoystickAxisSensitivityValueChanged(int32_t inputBehaviorId, int32_t controlId, float value);
		void MouseXYAxisSensitivityValueChanged(int32_t inputBehaviorId, int32_t controlId, float value);
		void JoystickAxisSensitivityCanceled(int32_t inputBehaviorId, int32_t controlId);
		void MouseXYAxisSensitivityCanceled(int32_t inputBehaviorId, int32_t controlId);
		void TakeInputFocus();
		Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet* CreateControlSet();
		Assembly_CSharp::Rewired::UI::ControlMapper::UISliderControl* CreateSlider(Assembly_CSharp::Rewired::UI::ControlMapper::UIControlSet* set, int32_t inputBehaviorId, mscorlib::System::String* defaultTitle, mscorlib::System::String* overrideTitle, UnityEngine_CoreModule::UnityEngine::Sprite* icon, float minValue, float maxValue, mscorlib::System::Action_3<mscorlib::System::Int32, mscorlib::System::Int32, mscorlib::System::Single>* valueChangedCallback, mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Int32>* cancelCallback);
		Rewired_Core::Rewired::InputBehavior* GetInputBehavior(int32_t id);
		Assembly_CSharp::Rewired::UI::ControlMapper::InputBehaviorWindow_InputBehaviorInfo* GetInputBehaviorInfo(int32_t inputBehaviorId);
		void _ctor();
	};
}

