#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_ControllerExtensions_SteamControllerPadType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "Rewired_ControllerExtensions_SteamControllerActionOrigin.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct ISteamControllerInternal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_MaxActionSourceCount();
		bool get_IsConnected();
		mscorlib::System::String* GetActionSetName(uint64_t handle);
		mscorlib::System::String* GetDigitalActionName(uint64_t handle);
		mscorlib::System::String* GetAnalogActionName(uint64_t handle);
		uint64_t GetActionSetHandle(mscorlib::System::String& actionSetName);
		uint64_t GetDigitalActionHandle(mscorlib::System::String& actionName);
		uint64_t GetAnalogActionHandle(mscorlib::System::String& actionName);
		bool GetDigitalActionValue(uint64_t actionHandle);
		bool GetDigitalActionValue(mscorlib::System::String& actionName);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetAnalogActionValue(uint64_t actionHandle);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetAnalogActionValue(mscorlib::System::String& actionName);
		bool SetActiveActionSet(uint64_t actionSetHandle);
		bool SetActiveActionSet(mscorlib::System::String& actionSetName);
		uint64_t GetActiveActionSetHandle();
		mscorlib::System::String* GetActiveActionSetName();
		void ShowBindingPanel();
		void SetHapticPulse(Rewired_Core::Rewired::ControllerExtensions::SteamControllerPadType targetPad, float durationSeconds);
		void SetHapticPulse(Rewired_Core::Rewired::ControllerExtensions::SteamControllerPadType targetPad, uint16_t durationMicroSeconds);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetDigitalActionOrigins(mscorlib::System::String& actionSetName, mscorlib::System::String& actionName);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetDigitalActionOrigins(uint64_t actionSetHandle, uint64_t actionHandle);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetAnalogActionOrigins(mscorlib::System::String& actionSetName, mscorlib::System::String& actionName);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerExtensions::SteamControllerActionOrigin>* GetAnalogActionOrigins(uint64_t actionSetHandle, uint64_t actionHandle);
	};
}

