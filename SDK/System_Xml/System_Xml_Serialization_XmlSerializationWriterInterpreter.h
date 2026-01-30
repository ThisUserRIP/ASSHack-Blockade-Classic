#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlSerializationWriter.h"
namespace System_Xml::System::Xml::Serialization { struct XmlMapping; };
#include "System_Xml_Serialization_SerializationFormat.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapping; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Serialization { struct XmlMembersMapping; };
namespace System_Xml::System::Xml::Serialization { struct ClassMap; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMember; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapElementInfo; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Serialization { struct ListMap; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMemberAnyElement; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationWriterInterpreter : System_Xml::System::Xml::Serialization::XmlSerializationWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::XmlMapping* _typeMap;
		System_Xml::System::Xml::Serialization::SerializationFormat _format;
		void _ctor(System_Xml::System::Xml::Serialization::XmlMapping* typeMap);
		void InitCallbacks();
		void WriteRoot(mscorlib::System::Object* ob);
		void WriteObject(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp, bool isNullable, bool needType, bool writeWrappingElem);
		void WriteMessage(System_Xml::System::Xml::Serialization::XmlMembersMapping* membersMap, IL2CPP::Array<mscorlib::System::Object*>* parameters);
		void WriteObjectElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp);
		void WriteObjectElementAttributes(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob);
		void WriteObjectElementElements(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob);
		void WriteMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList);
		void WriteAttributeMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList);
		void WriteElementMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList);
		mscorlib::System::Object* GetMemberValue(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, bool isValueList);
		bool MemberHasValue(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, bool isValueList);
		void WriteMemberElement(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* elem, mscorlib::System::Object* memberValue);
		static mscorlib::System::Object* ImplicitConvert(mscorlib::System::Object* obj, mscorlib::System::Type* type);
		void WritePrimitiveValueLiteral(mscorlib::System::Object* memberValue, mscorlib::System::String* name, mscorlib::System::String* ns, System_Xml::System::Xml::Serialization::XmlTypeMapping* mappedType, System_Xml::System::Xml::Serialization::TypeData* typeData, bool wrapped, bool isNullable);
		void WritePrimitiveValueEncoded(mscorlib::System::Object* memberValue, mscorlib::System::String* name, mscorlib::System::String* ns, System_Xml::System::Xml::XmlQualifiedName* xsiType, System_Xml::System::Xml::Serialization::XmlTypeMapping* mappedType, System_Xml::System::Xml::Serialization::TypeData* typeData, bool wrapped, bool isNullable);
		void WriteListElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp);
		void WriteListContent(mscorlib::System::Object* container, System_Xml::System::Xml::Serialization::TypeData* listType, System_Xml::System::Xml::Serialization::ListMap* map, mscorlib::System::Object* ob, mscorlib::System::Text::StringBuilder* targetString);
		int32_t GetListCount(System_Xml::System::Xml::Serialization::TypeData* listType, mscorlib::System::Object* ob);
		void WriteAnyElementContent(System_Xml::System::Xml::Serialization::XmlTypeMapMemberAnyElement* member, mscorlib::System::Object* memberValue);
		void WritePrimitiveElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp);
		void WriteEnumElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob, mscorlib::System::String* element, mscorlib::System::String* namesp);
		mscorlib::System::String* GetStringValue(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, System_Xml::System::Xml::Serialization::TypeData* type, mscorlib::System::Object* value);
		mscorlib::System::String* GetEnumXmlValue(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob);
	};
}

