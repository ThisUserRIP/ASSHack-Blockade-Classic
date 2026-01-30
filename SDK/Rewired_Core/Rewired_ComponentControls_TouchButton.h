#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ComponentControls_TouchInteractable.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired::ComponentControls::Data { struct CustomControllerElementTargetSetForFloat; };
#include "Rewired_ComponentControls_TouchButton_ButtonType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Internal { struct StandaloneAxis; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchRegion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "Rewired_ComponentControls_TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace Rewired_Core { struct wUTwXXItHISOIYpKRSRXDjdghICI; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchButton_AxisValueChangedEventHandler; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchButton_ButtonValueChangedEventHandler; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchButton_ButtonDownEventHandler; };
namespace Rewired_Core::Rewired::ComponentControls { struct TouchButton_ButtonUpEventHandler; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "Rewired_Utils_UI_PositionType.h"
#include "Rewired_ComponentControls_TouchButton_YSzdzmdjSpbUUvinCankfRRDFmQK.h"

namespace Rewired_Core::Rewired::ComponentControls
{
	struct TouchButton : Rewired_Core::Rewired::ComponentControls::TouchInteractable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* _targetCustomControllerElement;
		Rewired_Core::Rewired::ComponentControls::TouchButton_ButtonType _buttonType;
		bool _activateOnSwipeIn;
		bool _stayActiveOnSwipeOut;
		bool _useDigitalAxisSimulation;
		float _digitalAxisGravity;
		float _digitalAxisSensitivity;
		Rewired_Core::Rewired::Internal::StandaloneAxis* _axis;
		Rewired_Core::Rewired::ComponentControls::TouchRegion* _touchRegion;
		bool _useTouchRegionOnly;
		bool _moveToTouchPosition;
		bool _returnOnRelease;
		bool _followTouchPosition;
		bool _animateOnMoveToTouch;
		float _moveToTouchSpeed;
		bool _animateOnReturn;
		float _returnSpeed;
		bool _manageRaycasting;
		float ODjbxetvBYxdRdCqVANHFPsgelQ;
		float LfBrqoSRUbddqgkkOGOUbBnipUB;
		Rewired_Core::Rewired::ComponentControls::TouchRegion* NiZdtlCVgdzFUdhLMItZqRYtftk;
		UnityEngine_CoreModule::UnityEngine::Vector2 tObBQoKbHETHBfcAbvSEmpNeEBr;
		bool jgDIqYNDZlyGPJBFxwywtRWEGhw;
		bool qYvGYhyKauRqEVPykgackoRbNTWE;
		Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE mclzWKtrBWKOlGlLGzGUlcdFnOz;
		int32_t kCZfldbIgpXJaDyegUMEOoOjbepL;
		int32_t BDHZAJAsrpvipNTCMAsmCLbRuMg;
		bool WRMPfkfvzyHJXtcMaHHDXZksJvh;
		bool xrWGjsklHmHUZcFztpZbYinhiDB;
		mscorlib::System::Collections::IEnumerator* LtlzEJlcYZtPGuixyMLcbhPuBQXa;
		Rewired_Core::wUTwXXItHISOIYpKRSRXDjdghICI* FShaeZOehYDHGqUvDEyeaVrbAvGk;
		mscorlib::System::Action_1<Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE>* zIBvunREWdNREVsqvNXZRlACgiR;
		mscorlib::System::Action_1<Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE>* EJYOGcEKCqwFtzDANXNspifpFKi;
		Rewired_Core::Rewired::ComponentControls::TouchButton_AxisValueChangedEventHandler* _onAxisValueChanged;
		Rewired_Core::Rewired::ComponentControls::TouchButton_ButtonValueChangedEventHandler* _onButtonValueChanged;
		Rewired_Core::Rewired::ComponentControls::TouchButton_ButtonDownEventHandler* _onButtonDown;
		Rewired_Core::Rewired::ComponentControls::TouchButton_ButtonUpEventHandler* _onButtonUp;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, UnityEngine_UI::UnityEngine::EventSystems::PointerEventData>* IXMHJleNbMsqHVxYQNLZLnSIScK;
		struct StaticFields
		{
			float GiTEbcCJhApjEAxidvRLuUdnyNvq;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void add_AxisValueChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Single>* value);
		void remove_AxisValueChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Single>* value);
		void add_ButtonValueChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* value);
		void remove_ButtonValueChangedEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<mscorlib::System::Boolean>* value);
		void add_ButtonDownEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_ButtonDownEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void add_ButtonUpEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		void remove_ButtonUpEvent(UnityEngine_CoreModule::UnityEngine::Events::UnityAction* value);
		Rewired_Core::Rewired::ComponentControls::Data::CustomControllerElementTargetSetForFloat* get_targetCustomControllerElement();
		Rewired_Core::Rewired::ComponentControls::TouchButton_ButtonType get_buttonType();
		void set_buttonType(Rewired_Core::Rewired::ComponentControls::TouchButton_ButtonType value);
		bool get_activateOnSwipeIn();
		void set_activateOnSwipeIn(bool value);
		bool get_stayActiveOnSwipeOut();
		void set_stayActiveOnSwipeOut(bool value);
		bool get_useDigitalAxisSimulation();
		void set_useDigitalAxisSimulation(bool value);
		float get_digitalAxisGravity();
		void set_digitalAxisGravity(float value);
		float get_digitalAxisSensitivity();
		void set_digitalAxisSensitivity(float value);
		Rewired_Core::Rewired::ComponentControls::TouchRegion* get_touchRegion();
		void set_touchRegion(Rewired_Core::Rewired::ComponentControls::TouchRegion* value);
		bool get_useTouchRegionOnly();
		void set_useTouchRegionOnly(bool value);
		bool get_moveToTouchPosition();
		void set_moveToTouchPosition(bool value);
		bool get_returnOnRelease();
		void set_returnOnRelease(bool value);
		bool get_followTouchPosition();
		void set_followTouchPosition(bool value);
		bool get_animateOnMoveToTouch();
		void set_animateOnMoveToTouch(bool value);
		float get_moveToTouchSpeed();
		void set_moveToTouchSpeed(float value);
		bool get_animateOnReturn();
		void set_animateOnReturn(bool value);
		float get_returnSpeed();
		void set_returnSpeed(float value);
		bool get_manageRaycasting();
		void set_manageRaycasting(bool value);
		int32_t get_pointerId();
		void set_pointerId(int32_t value);
		bool get_hasPointer();
		Rewired_Core::Rewired::Internal::StandaloneAxis* get_axis();
		mscorlib::System::Action_1<Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE>* mENiIHrCZzOYUyzuaEAeiScmquN();
		mscorlib::System::Action_1<Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE>* MUjxGNVmsaXgifoyGFXCggqmDhKA();
		float aymumeVRRzkVbFQKHhQHxCdINJC();
		float FgCNsNbobjSaVWQfjulcFHOybNX();
		bool zOFGgUSwgVcJfgcNanVkeXEokJr();
		bool wyNZoGEQexhQADtkzhqxoaxYnYIe();
		int32_t IeaOedtCljZdDFkojuoNclorsvc();
		void _ctor();
		void SetRawValue(float value);
		void SetDefaultPosition();
		void QvWRdfTWHoZMJRBpExDtZnanjMD(UnityEngine_CoreModule::UnityEngine::Vector2 A_1);
		void ReturnToDefaultPosition(bool instant);
		void ReturnToDefaultPosition();
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnValidate();
		void Reset();
		void OnUpdate();
		bool OnInitialize();
		void OnCustomControllerUpdate();
		void OnSubscribeEvents();
		void OnUnsubscribeEvents();
		void OnSetProperty();
		void OnClear();
		void ClearValue();
		bool IsPressed();
		bool IsThisOrTouchRegionGameObject(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject);
		void imaJEHcBokRaYuDgBMVWUSFORTm();
		void WzdrjPEOwbgMLUVGFYcQqzcLbcg();
		void mibwmOnUQbNgyaKoutvbEkkAzCW();
		void KbTeJwimgQAuQtFMsJoADdHkeQqf(float A_1, bool A_2);
		void jbeFveAZvNpphrlPiRdgbrWNChKS();
		void ljjlaqYCOtUZePIrTDFtSMsicYB();
		void wBrTiliAvAcGwpCaTcbWiYYrYyr();
		void ofdhOBJnpfMJDajMMUiWIzsHxiWO();
		bool MhzJldgPeQHGSZbNVbBCBdtVClCB();
		void tNtFpjogkdvjmVzQEMmpnjENqOG(Rewired_Core::Rewired::ComponentControls::TouchRegion* A_1);
		void pFaWTLsaPhpKABnYZbNDoIeDjoY(Rewired_Core::Rewired::ComponentControls::TouchRegion* A_1);
		void CbRyULxoMaHBbgRkCMWwSjzWmEmf();
		void xgLMRxmflhbXLiUYfQNcuttniXng(UnityEngine_CoreModule::UnityEngine::Vector2 A_1, bool A_2, float A_3, Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE A_4);
		void vQlshOugPgAssiwRifnuGdWMzhK(UnityEngine_CoreModule::UnityEngine::Vector2 A_1, Rewired_Core::Rewired::Utils::UI::PositionType A_2, bool A_3, float A_4, Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE A_5);
		mscorlib::System::Collections::IEnumerator* zZaYEZPCLVgjygWtGTIwcHTXzZR(UnityEngine_CoreModule::UnityEngine::Vector2 A_1, Rewired_Core::Rewired::Utils::UI::PositionType A_2, float A_3, Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE A_4);
		void FhtSvkCOgBSkmvbdFbfjoSwgSVY(Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE A_1, UnityEngine_CoreModule::UnityEngine::Vector2 A_2, Rewired_Core::Rewired::Utils::UI::PositionType A_3);
		void XuHOxZYpvckftBZGgwlupSbqcmm(Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE A_1);
		void OeyARzywZlLVFEveoLkJRSANrxb(Rewired_Core::Rewired::ComponentControls::TouchButton_CLvBQaaHBiwgApUnBKTBZzmEMfE A_1);
		void QrzOFOrdoqfxTnGJzFUfAwaaAPpf(int32_t A_1);
		void pJHdrektetGCaScjEuofifQdteZo();
		void lcYgzQNlIOxtozkLLQhIsgXOHzz();
		bool ZupUXfXvwkmVCvgEbUUBiDzRfif();
		void tVtRbCWxalUgWwzEgMzbJpTqxKJ();
		bool EJaBfiiVrkEZSQmTyfIkDQLBFEqL(int32_t A_1);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* cmwBGibMPecjcIobsGiTkSCKGQN(int32_t A_1, UnityEngine_CoreModule::UnityEngine::GameObject* A_2);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* tpiinVYHwHSWHUQIbsVvkJHbirs(int32_t A_1);
		void XuCfmJDZcrAJYEGyOJlSxBEdOhX(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* NJZVXIOzbIuRVjWdvZBHJNrVVl(int32_t A_1);
		void yaeeBAKcAznLJwrNBAVyyZfoiSk(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1, Rewired_Core::Rewired::ComponentControls::TouchButton_YSzdzmdjSpbUUvinCankfRRDFmQK A_2);
		void VlwRnKLzgtFfakhIlCNRyVYKhDP(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1, Rewired_Core::Rewired::ComponentControls::TouchButton_YSzdzmdjSpbUUvinCankfRRDFmQK A_2);
		void VdXEyTidnqibUpYzFYfLKYqWLfWi(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1, Rewired_Core::Rewired::ComponentControls::TouchButton_YSzdzmdjSpbUUvinCankfRRDFmQK A_2);
		void lClwnoYfWuRfkuHKZaxsCcfXZNod(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1, Rewired_Core::Rewired::ComponentControls::TouchButton_YSzdzmdjSpbUUvinCankfRRDFmQK A_2);
		void HtMdcmHBTIeDBrHdasTRNyDnFoM(int32_t A_1, UnityEngine_CoreModule::UnityEngine::Vector2 A_2, Rewired_Core::Rewired::ComponentControls::TouchButton_YSzdzmdjSpbUUvinCankfRRDFmQK A_3);
		void MbpcmUBgwUDyZQoqoSBhWxoXbCF();
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerUp(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerEnter(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerExit(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void tjJsfRoESPfUofPSbFwOAVMgInK(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void CzXiWYdyNEQZhOJlzFkWJPEBfjEF(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void KSNaTqCmeqknLXuulZjxqgYzoccl(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void ZsYlMNhYjvUxSmVywbgiIUgsuqQ(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* A_1);
		void amvYeGPThRzMuhcNnenlvdtnxCR(float A_1);
		void yXHlEALJPQfdgFDhaozYYBsNOwwv(bool A_1);
		void rFpGRcTLMxpLIoTdyRfsEIiXoxg();
		void CeWraPxJGQtMTYuLguXSobokOKW();
	};
}

