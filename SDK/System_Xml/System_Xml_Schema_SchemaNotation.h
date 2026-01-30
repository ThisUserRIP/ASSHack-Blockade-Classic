#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaNotation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* name;
		mscorlib::System::String* systemLiteral;
		mscorlib::System::String* pubid;
		void _ctor(System_Xml::System::Xml::XmlQualifiedName* name);
		System_Xml::System::Xml::XmlQualifiedName* get_Name();
		mscorlib::System::String* get_SystemLiteral();
		void set_SystemLiteral(mscorlib::System::String* value);
		mscorlib::System::String* get_Pubid();
		void set_Pubid(mscorlib::System::String* value);
	};
}

