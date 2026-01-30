#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct ICustomMarshaler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* MarshalNativeToManaged(intptr_t pNativeData);
		intptr_t MarshalManagedToNative(mscorlib::System::Object* ManagedObj);
		void CleanUpNativeData(intptr_t pNativeData);
		void CleanUpManagedData(mscorlib::System::Object* ManagedObj);
		int32_t GetNativeDataSize();
	};
}

