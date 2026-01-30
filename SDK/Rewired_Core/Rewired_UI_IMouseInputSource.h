#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core::Rewired::UI
{
	struct IMouseInputSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_playerId();
		bool get_enabled();
		bool get_locked();
		int32_t get_buttonCount();
		bool GetButtonDown(int32_t button);
		bool GetButtonUp(int32_t button);
		bool GetButton(int32_t button);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPositionDelta();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_wheelDelta();
	};
}

