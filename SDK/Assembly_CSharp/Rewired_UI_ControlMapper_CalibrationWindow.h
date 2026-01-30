#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_UI_ControlMapper_Window.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_UI::UnityEngine::UI { struct Slider; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
namespace UnityEngine_UI::UnityEngine::UI { struct Button; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Rewired_Core::Rewired { struct Joystick; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\Rewired_Core\Rewired_AxisCalibrationData.h"
namespace Rewired_Core::Rewired { struct AxisCalibrationData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredStandaloneInputModule; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct AxisCalibration; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "Rewired_UI_ControlMapper_CalibrationWindow_ButtonIdentifier.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct CalibrationWindow : Assembly_CSharp::Rewired::UI::ControlMapper::Window
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* rightContentContainer;
		UnityEngine_CoreModule::UnityEngine::RectTransform* valueDisplayGroup;
		UnityEngine_CoreModule::UnityEngine::RectTransform* calibratedValueMarker;
		UnityEngine_CoreModule::UnityEngine::RectTransform* rawValueMarker;
		UnityEngine_CoreModule::UnityEngine::RectTransform* calibratedZeroMarker;
		UnityEngine_CoreModule::UnityEngine::RectTransform* deadzoneArea;
		UnityEngine_UI::UnityEngine::UI::Slider* deadzoneSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* zeroSlider;
		UnityEngine_UI::UnityEngine::UI::Slider* sensitivitySlider;
		UnityEngine_UI::UnityEngine::UI::Toggle* invertToggle;
		UnityEngine_CoreModule::UnityEngine::RectTransform* axisScrollAreaContent;
		UnityEngine_UI::UnityEngine::UI::Button* doneButton;
		UnityEngine_UI::UnityEngine::UI::Button* calibrateButton;
		Unity_TextMeshPro::TMPro::TMP_Text* doneButtonLabel;
		Unity_TextMeshPro::TMPro::TMP_Text* cancelButtonLabel;
		Unity_TextMeshPro::TMPro::TMP_Text* defaultButtonLabel;
		Unity_TextMeshPro::TMPro::TMP_Text* deadzoneSliderLabel;
		Unity_TextMeshPro::TMPro::TMP_Text* zeroSliderLabel;
		Unity_TextMeshPro::TMPro::TMP_Text* sensitivitySliderLabel;
		Unity_TextMeshPro::TMPro::TMP_Text* invertToggleLabel;
		Unity_TextMeshPro::TMPro::TMP_Text* calibrateButtonLabel;
		UnityEngine_CoreModule::UnityEngine::GameObject* axisButtonPrefab;
		Rewired_Core::Rewired::Joystick* joystick;
		mscorlib::System::String* origCalibrationData;
		int32_t selectedAxis;
		Rewired_Core::Rewired::AxisCalibrationData origSelectedAxisCalibrationData;
		float displayAreaWidth;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Button>* axisButtons;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Action_1<mscorlib::System::Int32>>* buttonCallbacks;
		int32_t playerId;
		Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule* rewiredStandaloneInputModule;
		int32_t menuHorizActionId;
		int32_t menuVertActionId;
		float minSensitivity;
		struct StaticFields
		{
			float minSensitivityOtherAxes;
			float maxDeadzone;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_axisSelected();
		Rewired_Core::Rewired::AxisCalibration* get_axisCalibration();
		void Initialize(int32_t id, mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* isFocusedCallback);
		void SetJoystick(int32_t playerId, Rewired_Core::Rewired::Joystick* joystick);
		void SetButtonCallback(Assembly_CSharp::Rewired::UI::ControlMapper::CalibrationWindow_ButtonIdentifier buttonIdentifier, mscorlib::System::Action_1<mscorlib::System::Int32>* callback);
		void Cancel();
		void Update();
		void OnDone();
		void OnCancel();
		void OnRestoreDefault();
		void OnCalibrate();
		void OnInvert(bool state);
		void OnZeroValueChange(float value);
		void OnZeroCancel();
		void OnDeadzoneValueChange(float value);
		void OnDeadzoneCancel();
		void OnSensitivityValueChange(float value);
		void OnSensitivityCancel(float value);
		void OnAxisScrollRectScroll(UnityEngine_CoreModule::UnityEngine::Vector2 pos);
		void OnAxisSelected(int32_t axisIndex, UnityEngine_UI::UnityEngine::UI::Button* button);
		void UpdateDisplay();
		void Redraw();
		void RefreshControls();
		void RedrawDeadzone();
		void RedrawCalibratedZero();
		void RedrawValueMarkers();
		void SelectAxis(int32_t index);
		void TakeInputFocus();
		void SetMinSensitivity();
		bool IsMenuAxis(int32_t actionId, int32_t axisIndex);
		void GetAxisButtonDeadZone(int32_t playerId, int32_t actionId, float& value);
		float GetSliderSensitivity(Rewired_Core::Rewired::AxisCalibration* axisCalibration);
		void SetSensitivity(Rewired_Core::Rewired::AxisCalibration* axisCalibration, float sliderValue);
		static float ProcessPowerValue(float value, float minValue, float maxValue);
		void _ctor();
	};
}

