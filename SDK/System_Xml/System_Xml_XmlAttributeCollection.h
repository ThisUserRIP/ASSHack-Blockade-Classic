#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlNamedNodeMap.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNode; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml
{
	struct XmlAttributeCollection : System_Xml::System::Xml::XmlNamedNodeMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System_Xml::System::Xml::XmlNode* parent);
		System_Xml::System::Xml::XmlAttribute* get_ItemOf(int32_t i);
		System_Xml::System::Xml::XmlNode* SetNamedItem(System_Xml::System::Xml::XmlNode* node);
		System_Xml::System::Xml::XmlAttribute* Append(System_Xml::System::Xml::XmlAttribute* node);
		System_Xml::System::Xml::XmlAttribute* Remove(System_Xml::System::Xml::XmlAttribute* node);
		System_Xml::System::Xml::XmlAttribute* RemoveAt(int32_t i);
		void RemoveAll();
		void System_Collections_ICollection_CopyTo(mscorlib::System::Array* array, int32_t index);
		bool System_Collections_ICollection_get_IsSynchronized();
		mscorlib::System::Object* System_Collections_ICollection_get_SyncRoot();
		int32_t System_Collections_ICollection_get_Count();
		System_Xml::System::Xml::XmlNode* AddNode(System_Xml::System::Xml::XmlNode* node);
		System_Xml::System::Xml::XmlNode* InsertNodeAt(int32_t i, System_Xml::System::Xml::XmlNode* node);
		System_Xml::System::Xml::XmlNode* RemoveNodeAt(int32_t i);
		void Detach(System_Xml::System::Xml::XmlAttribute* attr);
		void InsertParentIntoElementIdAttrMap(System_Xml::System::Xml::XmlAttribute* attr);
		void RemoveParentFromElementIdAttrMap(System_Xml::System::Xml::XmlAttribute* attr);
		int32_t RemoveDuplicateAttribute(System_Xml::System::Xml::XmlAttribute* attr);
		bool PrepareParentInElementIdAttrMap(mscorlib::System::String* attrPrefix, mscorlib::System::String* attrLocalName);
		void ResetParentInElementIdAttrMap(mscorlib::System::String* oldVal, mscorlib::System::String* newVal);
		System_Xml::System::Xml::XmlAttribute* InternalAppendAttribute(System_Xml::System::Xml::XmlAttribute* node);
	};
}

