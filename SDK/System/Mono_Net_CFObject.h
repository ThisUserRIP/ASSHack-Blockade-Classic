#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::Mono::Net
{
	struct CFObject : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t _Handle_k__BackingField;
		static intptr_t dlopen(mscorlib::System::String* path, int32_t mode);
		static intptr_t dlsym(intptr_t handle, mscorlib::System::String* symbol);
		static void dlclose(intptr_t handle);
		static intptr_t GetIndirect(intptr_t handle, mscorlib::System::String* symbol);
		static intptr_t GetCFObjectHandle(intptr_t handle, mscorlib::System::String* symbol);
		void _ctor(intptr_t handle, bool own);
		void Finalize();
		intptr_t get_Handle();
		void set_Handle(intptr_t value);
		static intptr_t CFRetain(intptr_t handle);
		void Retain();
		static void CFRelease(intptr_t handle);
		void Release();
		void Dispose(bool disposing);
		void Dispose();
	};
}

