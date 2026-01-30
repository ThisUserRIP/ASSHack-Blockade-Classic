#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_RuntimeGPtrArrayHandle.h"
namespace mscorlib::Mono { struct RuntimeGPtrArrayHandle; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::Mono
{
	struct SafeGPtrArrayHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::RuntimeGPtrArrayHandle handle;
		void _ctor(intptr_t ptr);
		void Dispose();
		int32_t get_Length();
		intptr_t get_Item(int32_t i);
	};
}

