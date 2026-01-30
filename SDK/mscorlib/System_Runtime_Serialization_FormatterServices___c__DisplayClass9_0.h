#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Serialization_FormatterServices.h"
namespace mscorlib::System::Runtime::Serialization { struct FormatterServices; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System::Runtime::Serialization { struct MemberHolder; };

namespace mscorlib::System::Runtime::Serialization
{
	struct FormatterServices___c__DisplayClass9_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* type;
		void _ctor();
		IL2CPP::Array<mscorlib::System::Reflection::MemberInfo*>* _GetSerializableMembers_b__0(mscorlib::System::Runtime::Serialization::MemberHolder* _);
	};
}

