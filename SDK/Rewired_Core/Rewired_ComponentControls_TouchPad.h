#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_TouchInteractable.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTargetSetForFloat; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTargetSetForBoolean; };
#include "Rewired_ComponentControls_TouchPad_AxisDirection.h"
#include "Rewired_ComponentControls_TouchPad_TouchPadMode.h"
#include "Rewired_ComponentControls_TouchPad_ValueFormat.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::Internal { struct StandaloneAxis2D; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchPad_ValueChangedEventHandler; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchPad_TapEventHandler; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchPad_PressDownEventHandler; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchPad_PressUpEventHandler; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchPad_YjguxcbqCNSZrFbonIMmEyaCEgVF; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace Rewired_Core::Rewired { struct AxisCalibration; };
namespace Rewired_Core::Rewired { struct Axis2DCalibration; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchPad : Rewired_Core::Rewired::ComponentControls::TouchInteractable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* _horizontalAxisCustomControllerElement;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* _verticalAxisCustomControllerElement;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* _tapCustomControllerElement;
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* _pressCustomControllerElement;
		Rewired_Core::Rewired::ComponentControls::TouchPad_AxisDirection _axesToUse;
		Rewired_Core::Rewired::ComponentControls::TouchPad_TouchPadMode _touchPadMode;
		Rewired_Core::Rewired::ComponentControls::TouchPad_ValueFormat _valueFormat;
		bool _useInertia;
		float _inertiaFriction;
		bool _activateOnSwipeIn;
		bool _stayActiveOnSwipeOut;
		bool _allowTap;
		float _tapTimeout;
		int32_t _tapDistanceLimit;
		bool _allowPress;
		float _pressStartDelay;
		int32_t _pressDistanceLimit;
		bool _hideAtRuntime;
		Rewired_Core::Rewired::Internal::StandaloneAxis2D* _axis2D;
		Rewired_Core::Rewired::ComponentControls::TouchPad_ValueChangedEventHandler* _onValueChanged;
		Rewired_Core::Rewired::ComponentControls::TouchPad_TapEventHandler* _onTap;
		Rewired_Core::Rewired::ComponentControls::TouchPad_PressDownEventHandler* _onPressDown;
		Rewired_Core::Rewired::ComponentControls::TouchPad_PressUpEventHandler* _onPressUp;
		bool _useXAxis;
		bool _useYAxis;
		int32_t _pointerId;
		int32_t _realMousePointerId;
		bool WRMPfkfvzyHJXtcMaHHDXZksJvh;
		bool xrWGjsklHmHUZcFztpZbYinhiDB;
		bool _pointerDownIsFake;
		UnityEngine_CoreModule::UnityEngine::Vector2 _touchStartPosition;
		float _touchStartTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 _currentCenter;
		UnityEngine_CoreModule::UnityEngine::Vector2 _previousTouchPosition;
		int32_t _lastTapFrame;
		bool _isEligibleForTap;
		bool _isEligibleForPress;
		bool _pressValue;
		Rewired_Core::Rewired::ComponentControls::TouchPad_YjguxcbqCNSZrFbonIMmEyaCEgVF* _smoothDelta;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* __fakePointerEventData;
		struct StaticFields
		{
			int32_t SMOOTH_DELTA_FRAME_COUNT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void add_ValueChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		void remove_ValueChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		void add_TapEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_TapEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void add_PressDownEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_PressDownEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void add_PressUpEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_PressUpEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_horizontalAxisCustomControllerElement();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_verticalAxisCustomControllerElement();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* get_tapCustomControllerElement();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForBoolean* get_pressCustomControllerElement();
		Rewired_Core::Rewired::ComponentControls::TouchPad_AxisDirection get_axesToUse();
		void set_axesToUse(Rewired_Core::Rewired::ComponentControls::TouchPad_AxisDirection value);
		Rewired_Core::Rewired::ComponentControls::TouchPad_TouchPadMode get_touchPadMode();
		void set_touchPadMode(Rewired_Core::Rewired::ComponentControls::TouchPad_TouchPadMode value);
		Rewired_Core::Rewired::ComponentControls::TouchPad_ValueFormat get_valueFormat();
		void set_valueFormat(Rewired_Core::Rewired::ComponentControls::TouchPad_ValueFormat value);
		bool get_useInertia();
		void set_useInertia(bool value);
		float get_inertiaFriction();
		void set_inertiaFriction(float value);
		bool get_activateOnSwipeIn();
		void set_activateOnSwipeIn(bool value);
		bool get_stayActiveOnSwipeOut();
		void set_stayActiveOnSwipeOut(bool value);
		bool get_allowTap();
		void set_allowTap(bool value);
		float get_tapTimeout();
		void set_tapTimeout(float value);
		int32_t get_tapDistanceLimit();
		void set_tapDistanceLimit(int32_t value);
		bool get_allowPress();
		void set_allowPress(bool value);
		float get_pressStartDelay();
		void set_pressStartDelay(float value);
		int32_t get_pressDistanceLimit();
		void set_pressDistanceLimit(int32_t value);
		bool get_hideAtRuntime();
		void set_hideAtRuntime(bool value);
		int32_t get_pointerId();
		void set_pointerId(int32_t value);
		bool get_hasPointer();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_touchStartPosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_touchPosition();
		Rewired_Core::Rewired::AxisCalibration* get_horizontalAxisCalibration();
		Rewired_Core::Rewired::AxisCalibration* get_verticalAxisCalibration();
		Rewired_Core::Rewired::Axis2DCalibration* get_axis2DCalibration();
		Rewired_Core::Rewired::Internal::StandaloneAxis2D* get_axis2D();
		int32_t get_effectivePointerId();
		bool get_tapValue();
		void _ctor();
		void Awake();
		void OnValidate();
		bool OnInitialize();
		void OnUpdate();
		void OnCustomControllerUpdate();
		void OnSetProperty();
		void OnClear();
		void ClearValue();
		void wBrTiliAvAcGwpCaTcbWiYYrYyr();
		void CDsGKWzFgLdZBgTPXYdsONCDbUd();
		void ERMBGygowlymgRrXdCjvwvhqOJSi(Rewired_Core::Rewired::ComponentControls::TouchPad_AxisDirection A_1);
		void lcYgzQNlIOxtozkLLQhIsgXOHzz();
		void gatgwKaepUEOnVvKNpHkjsWwWhDd();
		void pUvZxdSeMTpsCetkvriqAsKFmaj();
		void mAnQEpPguYGdhhCycNrCUIxNZkF();
		void QeQaCXBfwFfkzlAwSHDTUYCzQYHD(UnityEngine_CoreModule::UnityEngine::Vector2& A_1);
		void blOqrnuyJwVRCqfsQzqlCCVmDDQ(UnityEngine_CoreModule::UnityEngine::Vector2& A_1);
		void sDTPZTvidZUmytMOIxrmqMeMWvm();
		UnityEngine_CoreModule::UnityEngine::Vector2 akdIXKSDoZfiMcirpaCiLzqzeoF(UnityEngine_CoreModule::UnityEngine::Vector2 A_1);
		void SnYKOCORPVzIKWXcmETZNXAhpCE(bool A_1);
		void yaeeBAKcAznLJwrNBAVyyZfoiSk(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void VlwRnKLzgtFfakhIlCNRyVYKhDP(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void VdXEyTidnqibUpYzFYfLKYqWLfWi(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void lClwnoYfWuRfkuHKZaxsCcfXZNod(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void HtMdcmHBTIeDBrHdasTRNyDnFoM(int32_t A_1, UnityEngine_CoreModule::UnityEngine::Vector2 A_2);
		void MbpcmUBgwUDyZQoqoSBhWxoXbCF();
		void OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void tVtRbCWxalUgWwzEgMzbJpTqxKJ();
		bool EJaBfiiVrkEZSQmTyfIkDQLBFEqL(int32_t A_1);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* cmwBGibMPecjcIobsGiTkSCKGQN(int32_t A_1, UnityEngine_CoreModule::UnityEngine::GameObject* A_2);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* tKGDrVNrhrlyTgdeSqukRDZFcOXE(int32_t A_1, UnityEngine_CoreModule::UnityEngine::GameObject* A_2);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* tpiinVYHwHSWHUQIbsVvkJHbirs(int32_t A_1);
		void XuCfmJDZcrAJYEGyOJlSxBEdOhX(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* NJZVXIOzbIuRVjWdvZBHJNrVVl(int32_t A_1);
	};
}

