#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System
{
	struct LocalDataStoreElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* m_value;
		int64_t m_cookie;
		void _ctor(int64_t cookie);
		mscorlib::System::Object* get_Value();
		void set_Value(mscorlib::System::Object* value);
		int64_t get_Cookie();
	};
}

