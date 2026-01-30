#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct IPS4ControllerExtensionSourceTouchPad
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_maxTouches();
		float GetTouchPixelDensity();
		int32_t GetTouchpadResolutionX();
		int32_t GetTouchpadResolutionY();
		int32_t GetTouchCount();
		int32_t GetTouchId(int32_t index);
		bool GetTouchPositionByIndex(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionAbsByIndex(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionByTouchId(int32_t touchId, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionAbsByTouchId(int32_t touchId, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool IsTouchingByIndex(int32_t index);
		bool IsTouchingByTouchId(int32_t touchId);
	};
}

