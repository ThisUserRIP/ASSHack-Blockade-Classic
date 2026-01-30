#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct HandleRef
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* m_wrapper;
		intptr_t m_handle;
		void _ctor(mscorlib::System::Object* wrapper, intptr_t handle);
		intptr_t get_Handle();
	};
}

