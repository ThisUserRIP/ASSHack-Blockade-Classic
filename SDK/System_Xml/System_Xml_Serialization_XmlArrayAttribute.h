#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_Schema_XmlSchemaForm.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlArrayAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* elementName;
		System_Xml::System::Xml::Schema::XmlSchemaForm form;
		bool isNullable;
		mscorlib::System::String* ns;
		int32_t order;
		void _ctor(mscorlib::System::String* elementName);
		mscorlib::System::String* get_ElementName();
		System_Xml::System::Xml::Schema::XmlSchemaForm get_Form();
		bool get_IsNullable();
		mscorlib::System::String* get_Namespace();
		int32_t get_Order();
	};
}

