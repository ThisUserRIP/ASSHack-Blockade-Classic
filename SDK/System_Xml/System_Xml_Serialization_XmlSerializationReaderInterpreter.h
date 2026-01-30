#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Serialization_XmlSerializationReader.h"
namespace System_Xml::System::Xml::Serialization { struct XmlMapping; };
#include "System_Xml_Serialization_SerializationFormat.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapping; };
namespace System_Xml::System::Xml::Serialization { struct XmlMembersMapping; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Serialization { struct ClassMap; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapMember; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapElementInfo; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlSerializationReaderInterpreter : System_Xml::System::Xml::Serialization::XmlSerializationReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Serialization::XmlMapping* _typeMap;
		System_Xml::System::Xml::Serialization::SerializationFormat _format;
		struct StaticFields
		{
			System_Xml::System::Xml::XmlQualifiedName* AnyType;
			IL2CPP::Array<mscorlib::System::Object*>* empty_array;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::Serialization::XmlMapping* typeMap);
		void InitCallbacks();
		void InitIDs();
		mscorlib::System::Object* ReadRoot();
		mscorlib::System::Object* ReadEncodedObject(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap);
		mscorlib::System::Object* ReadMessage(System_Xml::System::Xml::Serialization::XmlMembersMapping* typeMap);
		mscorlib::System::Object* ReadRoot(System_Xml::System::Xml::Serialization::XmlTypeMapping* rootMap);
		mscorlib::System::Object* ReadObject(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType);
		mscorlib::System::Object* ReadClassInstance(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, bool checkType);
		void ReadClassInstanceMembers(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::Object* ob);
		void ReadAttributeMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList);
		void ReadMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList, bool readBySoapOrder);
		void SetListMembersDefaults(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* ob, bool isValueList);
		void FixupMembers(System_Xml::System::Xml::Serialization::ClassMap* map, mscorlib::System::Object* obfixup, bool isValueList);
		void ProcessUnknownAttribute(mscorlib::System::Object* target);
		void ProcessUnknownElement(mscorlib::System::Object* target);
		bool IsReadOnly(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, System_Xml::System::Xml::Serialization::TypeData* memType, mscorlib::System::Object* ob, bool isValueList);
		void SetMemberValue(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, mscorlib::System::Object* value, bool isValueList);
		void SetMemberValueFromAttr(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, mscorlib::System::Object* value, bool isValueList);
		mscorlib::System::Object* GetMemberValue(System_Xml::System::Xml::Serialization::XmlTypeMapMember* member, mscorlib::System::Object* ob, bool isValueList);
		mscorlib::System::Object* ReadObjectElement(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* elem);
		mscorlib::System::Object* ReadPrimitiveValue(System_Xml::System::Xml::Serialization::XmlTypeMapElementInfo* elem);
		mscorlib::System::Object* GetValueFromXmlString(mscorlib::System::String* value, System_Xml::System::Xml::Serialization::TypeData* typeData, System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap);
		mscorlib::System::Object* ReadListElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable, mscorlib::System::Object* list, bool canCreateInstance);
		mscorlib::System::Object* ReadListString(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::String* values);
		void AddListValue(System_Xml::System::Xml::Serialization::TypeData* listType, mscorlib::System::Object& list, int32_t index, mscorlib::System::Object* value, bool canCreateInstance);
		static mscorlib::System::Object* CreateInstance(mscorlib::System::Type* type, bool nonPublic);
		mscorlib::System::Object* CreateInstance(mscorlib::System::Type* type);
		mscorlib::System::Object* CreateList(mscorlib::System::Type* listType);
		mscorlib::System::Object* InitializeList(System_Xml::System::Xml::Serialization::TypeData* listType);
		void FillList(mscorlib::System::Object* list, mscorlib::System::Object* items);
		void CopyEnumerableList(mscorlib::System::Object* source, mscorlib::System::Object* dest);
		mscorlib::System::Object* ReadXmlNodeElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable);
		mscorlib::System::Object* ReadXmlNode(System_Xml::System::Xml::Serialization::TypeData* type, bool wrapped);
		mscorlib::System::Object* ReadPrimitiveElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable);
		mscorlib::System::Object* ReadEnumElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable);
		mscorlib::System::Object* GetEnumValue(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, mscorlib::System::String* val);
		mscorlib::System::Object* ReadXmlSerializableElement(System_Xml::System::Xml::Serialization::XmlTypeMapping* typeMap, bool isNullable);
		static void _cctor();
	};
}

