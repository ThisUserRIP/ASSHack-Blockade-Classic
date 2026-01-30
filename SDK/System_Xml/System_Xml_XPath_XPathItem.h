#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::XPath
{
	struct XPathItem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_XmlType();
		mscorlib::System::String* get_Value();
		mscorlib::System::Object* get_TypedValue();
		mscorlib::System::Type* get_ValueType();
		bool get_ValueAsBoolean();
		mscorlib::System::DateTime get_ValueAsDateTime();
		double get_ValueAsDouble();
		int32_t get_ValueAsInt();
		int64_t get_ValueAsLong();
		mscorlib::System::Object* ValueAs(mscorlib::System::Type* returnType);
		mscorlib::System::Object* ValueAs(mscorlib::System::Type* returnType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		void _ctor();
	};
}

