#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlAttributes; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Serialization { struct TypeMember; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlAttributeOverrides : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* overrides;
		void _ctor();
		System_Xml::System::Xml::Serialization::XmlAttributes* get_Item(mscorlib::System::Type* type);
		System_Xml::System::Xml::Serialization::XmlAttributes* get_Item(mscorlib::System::Type* type, mscorlib::System::String* member);
		System_Xml::System::Xml::Serialization::TypeMember* GetKey(mscorlib::System::Type* type, mscorlib::System::String* member);
	};
}

