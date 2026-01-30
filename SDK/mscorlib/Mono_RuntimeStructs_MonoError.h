#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_RuntimeStructs.h"
namespace mscorlib::Mono { struct RuntimeStructs; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace mscorlib::Mono
{
	struct RuntimeStructs_MonoError
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint16_t error_code;
		uint16_t hidden_0;
		intptr_t hidden_1;
		intptr_t hidden_2;
		intptr_t hidden_3;
		intptr_t hidden_4;
		intptr_t hidden_5;
		intptr_t hidden_6;
		intptr_t hidden_7;
		intptr_t hidden_8;
		intptr_t hidden_11;
		intptr_t hidden_12;
		intptr_t hidden_13;
		intptr_t hidden_14;
		intptr_t hidden_15;
		intptr_t hidden_16;
		intptr_t hidden_17;
		intptr_t hidden_18;
	};
}

