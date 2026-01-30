#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Net_CFObject.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Mono_Net_CFRange.h"
namespace System::Mono::Net { struct CFRange; };

namespace System::Mono::Net
{
	struct CFString : System::Mono::Net::CFObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* str;
		void _ctor(intptr_t handle, bool own);
		static intptr_t CFStringCreateWithCharacters(intptr_t alloc, intptr_t chars, intptr_t length);
		static System::Mono::Net::CFString* Create(mscorlib::System::String* value);
		static intptr_t CFStringGetLength(intptr_t handle);
		static intptr_t CFStringGetCharactersPtr(intptr_t handle);
		static intptr_t CFStringGetCharacters(intptr_t handle, System::Mono::Net::CFRange range, intptr_t buffer);
		static mscorlib::System::String* AsString(intptr_t handle);
		mscorlib::System::String* ToString();
	};
}

