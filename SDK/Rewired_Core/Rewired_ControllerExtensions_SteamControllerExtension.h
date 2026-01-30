#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller_Extension.h"
namespace Rewired_Core::Rewired::ControllerExtensions { struct SteamControllerExtension_pYJdABacztJneEHSVLvZRMPCiAs; };
namespace Rewired_Core::Rewired { struct Joystick; };
namespace Rewired_Core::Rewired::Interfaces { struct ISteamControllerInternal; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_ControllerExtensions_SteamControllerPadType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "Rewired_ControllerExtensions_SteamControllerActionOrigin.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired::Interfaces { struct IControllerExtensionSource; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };

namespace Rewired_Core::Rewired::ControllerExtensions
{
	struct SteamControllerExtension : Rewired_Core::Rewired::Controller_Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension_pYJdABacztJneEHSVLvZRMPCiAs* vFZHOBqLeyYBeVMlFUHaPOmXHwG;
		Rewired_Core::Rewired::Joystick* HPQsOFATSFYDIUneRXXMNMpaqXg();
		Rewired_Core::Rewired::Interfaces::ISteamControllerInternal* get_internalController();
		void _ctor(Rewired_Core::Rewired::Interfaces::ISteamControllerInternal* internalController);
		void _ctor(Rewired_Core::Rewired::ControllerExtensions::SteamControllerExtension* source);
		uint64_t GetActionSetHandle(mscorlib::System::String* actionSetName);
		uint64_t GetAnalogActionHandle(mscorlib::System::String* actionName);
		uint64_t GetDigitalActionHandle(mscorlib::System::String* actionName);
		mscorlib::System::String* GetActionSetName(uint64_t actionSetHandle);
		mscorlib::System::String* GetAnalogActionName(uint64_t actionHandle);
		mscorlib::System::String* GetDigitalActionName(uint64_t actionHandle);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetAnalogActionValue(mscorlib::System::String* actionName);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetAnalogActionValue(uint64_t actionHandle);
		bool GetDigitalActionValue(mscorlib::System::String* actionName);
		bool GetDigitalActionValue(uint64_t actionHandle);
		bool SetActiveActionSet(uint64_t actionSetHandle);
		bool SetActiveActionSet(mscorlib::System::String* actionSetName);
		uint64_t GetActiveActionSetHandle();
		mscorlib::System::String* GetActiveActionSetName();
		void ShowBindingPanel();
		void SetHapticPulse(Rewired_Core::Rewired::ControllerExtensions::SteamControllerPadType targePad, float durationSeconds);
		void SetHapticPulse(Rewired_Core::Rewired::ControllerExtensions::SteamControllerPadType targePad, uint16_t durationMicroSeconds);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetDigitalActionOrigins(mscorlib::System::String* actionSetName, mscorlib::System::String* actionName);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetDigitalActionOrigins(uint64_t actionSetHandle, uint64_t actionHandle);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetAnalogActionOrigins(mscorlib::System::String* actionSetName, mscorlib::System::String* actionName);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetAnalogActionOrigins(uint64_t actionSetHandle, uint64_t actionHandle);
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		void SourceUpdated(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* source);
		Rewired_Core::Rewired::Controller_Extension* Clone();
		void pKLNoWCgVUqlRfCsOXaDmHUNbICB();
	};
}

