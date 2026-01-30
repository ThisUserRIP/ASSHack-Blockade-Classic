#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };

namespace Rewired_Core
{
	struct zTtQnwXpQYdEEdntNnpbTeHxNmT
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t GetDeviceHandle();
		int32_t GetUserId();
		int32_t GetUserStatus();
		bool GetUserIsPrimary();
		UnityEngine_CoreModule::UnityEngine::Color GetUserColor();
		int32_t GetUserColorId();
		mscorlib::System::String* GetUserName();
	};
}

