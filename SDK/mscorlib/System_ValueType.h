#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System
{
	struct ValueType : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static bool InternalEquals(mscorlib::System::Object* o1, mscorlib::System::Object* o2, IL2CPP::Array<mscorlib::System::Object*>& fields);
		static bool DefaultEquals(mscorlib::System::Object* o1, mscorlib::System::Object* o2);
		bool Equals(mscorlib::System::Object* obj);
		static int32_t InternalGetHashCode(mscorlib::System::Object* o, IL2CPP::Array<mscorlib::System::Object*>& fields);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
	};
}

