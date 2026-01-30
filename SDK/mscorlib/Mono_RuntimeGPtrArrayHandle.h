#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::Mono { struct RuntimeStructs_GPtrArray; };
namespace mscorlib::Mono { struct RuntimeStructs_GPtrArray; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::Mono
{
	struct RuntimeGPtrArrayHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::RuntimeStructs_GPtrArray* value;
		void _ctor(intptr_t ptr);
		int32_t get_Length();
		intptr_t get_Item(int32_t i);
		intptr_t Lookup(int32_t i);
		static void GPtrArrayFree(mscorlib::Mono::RuntimeStructs_GPtrArray* value);
		static void DestroyAndFree(mscorlib::Mono::RuntimeGPtrArrayHandle& h);
	};
}

