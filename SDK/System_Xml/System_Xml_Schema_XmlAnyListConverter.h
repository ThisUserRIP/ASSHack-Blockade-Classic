#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlListConverter.h"
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlBaseConverter; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlAnyListConverter : System_Xml::System::Xml::Schema::XmlListConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::XmlValueConverter* ItemList;
			System_Xml::System::Xml::Schema::XmlValueConverter* AnyAtomicList;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::Schema::XmlBaseConverter* atomicConverter);
		mscorlib::System::Object* ChangeType(mscorlib::System::Object* value, mscorlib::System::Type* destinationType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		static void _cctor();
	};
}

