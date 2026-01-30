#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "Mono_SafeStringMarshal.h"
namespace mscorlib::Mono { struct SafeStringMarshal; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::Mono { struct MonoAssemblyName; };
namespace mscorlib::Mono { struct MonoAssemblyName; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::Mono
{
	struct RuntimeMarshal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* PtrToUtf8String(intptr_t ptr);
		static mscorlib::Mono::SafeStringMarshal MarshalString(mscorlib::System::String* str);
		static int32_t DecodeBlobSize(intptr_t in_ptr, intptr_t& out_ptr);
		static IL2CPP::Array<uint8_t>* DecodeBlobArray(intptr_t ptr);
		static int32_t AsciHexDigitValue(int32_t c);
		static void FreeAssemblyName(mscorlib::Mono::MonoAssemblyName& name, bool freeStruct);
	};
}

