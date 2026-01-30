#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System
{
	struct KnownTerminals : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<uint8_t>* get_linux();
		static IL2CPP::Array<uint8_t>* get_xterm();
		static IL2CPP::Array<uint8_t>* get_ansi();
	};
}

