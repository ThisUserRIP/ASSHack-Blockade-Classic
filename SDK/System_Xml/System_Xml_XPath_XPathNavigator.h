#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XPath_XPathItem.h"
namespace System_Xml::System::Xml::XPath { struct XPathNavigatorKeyComparer; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"
#include "System_Xml_XPath_XPathNodeType.h"
#include "System_Xml_XPath_XPathNamespaceScope.h"
namespace System_Xml::System::Xml::Schema { struct IXmlSchemaInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::XPath
{
	struct XPathNavigator : System_Xml::System::Xml::XPath::XPathItem
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System_Xml::System::Xml::XPath::XPathNavigatorKeyComparer* comparer;
			IL2CPP::Array<wchar_t>* NodeTypeLetter;
			IL2CPP::Array<wchar_t>* UniqueIdTbl;
			IL2CPP::Array<int32_t>* ContentKindMasks;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* ToString();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_XmlType();
		mscorlib::System::Object* get_TypedValue();
		mscorlib::System::Type* get_ValueType();
		bool get_ValueAsBoolean();
		mscorlib::System::DateTime get_ValueAsDateTime();
		double get_ValueAsDouble();
		int32_t get_ValueAsInt();
		int64_t get_ValueAsLong();
		mscorlib::System::Object* ValueAs(mscorlib::System::Type* returnType, System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver);
		mscorlib::System::Object* System_ICloneable_Clone();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* namespaceURI);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		System_Xml::System::Xml::XPath::XPathNavigator* Clone();
		System_Xml::System::Xml::XPath::XPathNodeType get_NodeType();
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_NamespaceURI();
		mscorlib::System::String* get_Prefix();
		mscorlib::System::Object* get_UnderlyingObject();
		bool MoveToNamespace(mscorlib::System::String* name);
		bool MoveToFirstNamespace(System_Xml::System::Xml::XPath::XPathNamespaceScope namespaceScope);
		bool MoveToNextNamespace(System_Xml::System::Xml::XPath::XPathNamespaceScope namespaceScope);
		bool MoveToParent();
		bool IsSamePosition(System_Xml::System::Xml::XPath::XPathNavigator* other);
		System_Xml::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();
		static bool IsText(System_Xml::System::Xml::XPath::XPathNodeType type);
		void _ctor();
		static void _cctor();
	};
}

