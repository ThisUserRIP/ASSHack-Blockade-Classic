#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct XmlAttributes; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlReflectionMember : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isReturnValue;
		mscorlib::System::String* memberName;
		mscorlib::System::Type* memberType;
		System_Xml::System::Xml::Serialization::XmlAttributes* xmlAttributes;
		mscorlib::System::Type* declaringType;
		void _ctor(mscorlib::System::String* name, mscorlib::System::Type* type, System_Xml::System::Xml::Serialization::XmlAttributes* attributes);
		bool get_IsReturnValue();
		mscorlib::System::String* get_MemberName();
		mscorlib::System::Type* get_MemberType();
		System_Xml::System::Xml::Serialization::XmlAttributes* get_XmlAttributes();
		mscorlib::System::Type* get_DeclaringType();
		void set_DeclaringType(mscorlib::System::Type* value);
	};
}

