#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Serialization { struct XmlAnyAttributeAttribute; };
namespace System_Xml::System::Xml::Serialization { struct XmlAnyElementAttributes; };
namespace System_Xml::System::Xml::Serialization { struct XmlArrayAttribute; };
namespace System_Xml::System::Xml::Serialization { struct XmlArrayItemAttributes; };
namespace System_Xml::System::Xml::Serialization { struct XmlAttributeAttribute; };
namespace System_Xml::System::Xml::Serialization { struct XmlChoiceIdentifierAttribute; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Serialization { struct XmlElementAttributes; };
namespace System_Xml::System::Xml::Serialization { struct XmlEnumAttribute; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Serialization { struct XmlRootAttribute; };
namespace System_Xml::System::Xml::Serialization { struct XmlTextAttribute; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeAttribute; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct ICustomAttributeProvider; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlAttributes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::XmlAnyAttributeAttribute* xmlAnyAttribute;
		System_Xml::System::Xml::Serialization::XmlAnyElementAttributes* xmlAnyElements;
		System_Xml::System::Xml::Serialization::XmlArrayAttribute* xmlArray;
		System_Xml::System::Xml::Serialization::XmlArrayItemAttributes* xmlArrayItems;
		System_Xml::System::Xml::Serialization::XmlAttributeAttribute* xmlAttribute;
		System_Xml::System::Xml::Serialization::XmlChoiceIdentifierAttribute* xmlChoiceIdentifier;
		mscorlib::System::Object* xmlDefaultValue;
		System_Xml::System::Xml::Serialization::XmlElementAttributes* xmlElements;
		System_Xml::System::Xml::Serialization::XmlEnumAttribute* xmlEnum;
		bool xmlIgnore;
		bool xmlns;
		System_Xml::System::Xml::Serialization::XmlRootAttribute* xmlRoot;
		System_Xml::System::Xml::Serialization::XmlTextAttribute* xmlText;
		System_Xml::System::Xml::Serialization::XmlTypeAttribute* xmlType;
		void _ctor();
		void _ctor(mscorlib::System::Reflection::ICustomAttributeProvider* provider);
		System_Xml::System::Xml::Serialization::XmlAnyAttributeAttribute* get_XmlAnyAttribute();
		System_Xml::System::Xml::Serialization::XmlAnyElementAttributes* get_XmlAnyElements();
		System_Xml::System::Xml::Serialization::XmlArrayAttribute* get_XmlArray();
		System_Xml::System::Xml::Serialization::XmlArrayItemAttributes* get_XmlArrayItems();
		System_Xml::System::Xml::Serialization::XmlAttributeAttribute* get_XmlAttribute();
		System_Xml::System::Xml::Serialization::XmlChoiceIdentifierAttribute* get_XmlChoiceIdentifier();
		mscorlib::System::Object* get_XmlDefaultValue();
		System_Xml::System::Xml::Serialization::XmlElementAttributes* get_XmlElements();
		bool get_XmlIgnore();
		bool get_Xmlns();
		System_Xml::System::Xml::Serialization::XmlRootAttribute* get_XmlRoot();
		System_Xml::System::Xml::Serialization::XmlTextAttribute* get_XmlText();
		System_Xml::System::Xml::Serialization::XmlTypeAttribute* get_XmlType();
		mscorlib::System::Nullable_1<mscorlib::System::Int32> get_Order();
		int32_t get_SortableOrder();
	};
}

