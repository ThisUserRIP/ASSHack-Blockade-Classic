#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::Mono { struct RuntimeStructs_MonoClass; };
namespace mscorlib::Mono { struct RuntimeStructs_MonoClass; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };

namespace mscorlib::Mono
{
	struct RuntimeClassHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::RuntimeStructs_MonoClass* value;
		void _ctor(mscorlib::Mono::RuntimeStructs_MonoClass* value);
		void _ctor(intptr_t ptr);
		mscorlib::Mono::RuntimeStructs_MonoClass* get_Value();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static intptr_t GetTypeFromClass(mscorlib::Mono::RuntimeStructs_MonoClass* klass);
		mscorlib::System::RuntimeTypeHandle GetTypeHandle();
	};
}

