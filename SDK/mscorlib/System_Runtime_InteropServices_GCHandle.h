#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct Object; };
#include "System_Runtime_InteropServices_GCHandleType.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::InteropServices
{
	struct GCHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t handle;
		void _ctor(intptr_t h);
		void _ctor(mscorlib::System::Object* obj);
		void _ctor(mscorlib::System::Object* value, mscorlib::System::Runtime::InteropServices::GCHandleType type);
		bool get_IsAllocated();
		mscorlib::System::Object* get_Target();
		void set_Target(mscorlib::System::Object* value);
		intptr_t AddrOfPinnedObject();
		static mscorlib::System::Runtime::InteropServices::GCHandle Alloc(mscorlib::System::Object* value);
		static mscorlib::System::Runtime::InteropServices::GCHandle Alloc(mscorlib::System::Object* value, mscorlib::System::Runtime::InteropServices::GCHandleType type);
		void Free();
		static bool CheckCurrentDomain(int32_t handle);
		static mscorlib::System::Object* GetTarget(int32_t handle);
		static int32_t GetTargetHandle(mscorlib::System::Object* obj, int32_t handle, mscorlib::System::Runtime::InteropServices::GCHandleType type);
		static void FreeHandle(int32_t handle);
		static intptr_t GetAddrOfPinnedObject(int32_t handle);
		static bool op_Equality(mscorlib::System::Runtime::InteropServices::GCHandle a, mscorlib::System::Runtime::InteropServices::GCHandle b);
		bool Equals(mscorlib::System::Object* o);
		int32_t GetHashCode();
		static mscorlib::System::Runtime::InteropServices::GCHandle FromIntPtr(intptr_t value);
		static intptr_t ToIntPtr(mscorlib::System::Runtime::InteropServices::GCHandle value);
	};
	bool operator==(mscorlib::System::Runtime::InteropServices::GCHandle& a, mscorlib::System::Runtime::InteropServices::GCHandle& b);
}

