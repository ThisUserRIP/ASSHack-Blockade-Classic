#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System::Collections { struct ICollection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel::Design::Serialization
{
	struct InstanceDescriptor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::MemberInfo* member;
		mscorlib::System::Collections::ICollection* arguments;
		bool isComplete;
		void _ctor(mscorlib::System::Reflection::MemberInfo* member, mscorlib::System::Collections::ICollection* arguments);
		void _ctor(mscorlib::System::Reflection::MemberInfo* member, mscorlib::System::Collections::ICollection* arguments, bool isComplete);
		mscorlib::System::Object* Invoke();
	};
}

