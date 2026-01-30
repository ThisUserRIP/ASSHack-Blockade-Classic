#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Serialization
{
	struct TypeMember : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* type;
		mscorlib::System::String* member;
		void _ctor(mscorlib::System::Type* type, mscorlib::System::String* member);
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* obj);
		static bool Equals(System_Xml::System::Xml::Serialization::TypeMember* tm1, System_Xml::System::Xml::Serialization::TypeMember* tm2);
		mscorlib::System::String* ToString();
	};
}

