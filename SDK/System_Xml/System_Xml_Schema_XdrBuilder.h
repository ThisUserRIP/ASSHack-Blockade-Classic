#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_SchemaBuilder.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_XdrAttributeEntry; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_XdrEntry; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlReader; };
namespace System_Xml::System::Xml { struct PositionInfo; };
namespace System_Xml::System::Xml::Schema { struct ParticleContentValidator; };
namespace System_Xml::System::Xml { struct HWStack; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_ElementContent; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_GroupContent; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_AttributeContent; };
namespace System_Xml::System::Xml::Schema { struct XdrBuilder_DeclBaseInfo; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct SchemaNames; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml { struct XmlResolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlNode; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
#include "System_Xml_Schema_XmlSeverityType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaException; };

namespace System_Xml::System::Xml::Schema
{
	struct XdrBuilder : System_Xml::System::Xml::Schema::SchemaBuilder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SchemaInfo* _SchemaInfo;
		mscorlib::System::String* _TargetNamespace;
		System_Xml::System::Xml::XmlReader* _reader;
		System_Xml::System::Xml::PositionInfo* positionInfo;
		System_Xml::System::Xml::Schema::ParticleContentValidator* _contentValidator;
		System_Xml::System::Xml::Schema::XdrBuilder_XdrEntry* _CurState;
		System_Xml::System::Xml::Schema::XdrBuilder_XdrEntry* _NextState;
		System_Xml::System::Xml::HWStack* _StateHistory;
		System_Xml::System::Xml::HWStack* _GroupStack;
		mscorlib::System::String* _XdrName;
		mscorlib::System::String* _XdrPrefix;
		System_Xml::System::Xml::Schema::XdrBuilder_ElementContent* _ElementDef;
		System_Xml::System::Xml::Schema::XdrBuilder_GroupContent* _GroupDef;
		System_Xml::System::Xml::Schema::XdrBuilder_AttributeContent* _AttributeDef;
		System_Xml::System::Xml::Schema::XdrBuilder_DeclBaseInfo* _UndefinedAttributeTypes;
		System_Xml::System::Xml::Schema::XdrBuilder_DeclBaseInfo* _BaseDecl;
		System_Xml::System::Xml::XmlNameTable* _NameTable;
		System_Xml::System::Xml::Schema::SchemaNames* _SchemaNames;
		System_Xml::System::Xml::XmlNamespaceManager* _CurNsMgr;
		mscorlib::System::String* _Text;
		System_Xml::System::Xml::Schema::ValidationEventHandler* validationEventHandler;
		mscorlib::System::Collections::Hashtable* _UndeclaredElements;
		System_Xml::System::Xml::XmlResolver* xmlResolver;
		struct StaticFields
		{
			IL2CPP::Array<int32_t>* S_XDR_Root_Element;
			IL2CPP::Array<int32_t>* S_XDR_Root_SubElements;
			IL2CPP::Array<int32_t>* S_XDR_ElementType_SubElements;
			IL2CPP::Array<int32_t>* S_XDR_AttributeType_SubElements;
			IL2CPP::Array<int32_t>* S_XDR_Group_SubElements;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* S_XDR_Root_Attributes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* S_XDR_ElementType_Attributes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* S_XDR_AttributeType_Attributes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* S_XDR_Element_Attributes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* S_XDR_Attribute_Attributes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* S_XDR_Group_Attributes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* S_XDR_ElementDataType_Attributes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>* S_XDR_AttributeDataType_Attributes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XdrBuilder_XdrEntry*>* S_SchemaEntries;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::XmlReader* reader, System_Xml::System::Xml::XmlNamespaceManager* curmgr, System_Xml::System::Xml::Schema::SchemaInfo* sinfo, mscorlib::System::String* targetNamspace, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventhandler);
		bool ProcessElement(mscorlib::System::String* prefix, mscorlib::System::String* name, mscorlib::System::String* ns);
		void ProcessAttribute(mscorlib::System::String* prefix, mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::String* value);
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		bool LoadSchema(mscorlib::System::String* uri);
		static bool IsXdrSchema(mscorlib::System::String* uri);
		bool IsContentParsed();
		void ProcessMarkup(IL2CPP::Array<System_Xml::System::Xml::XmlNode*>* markup);
		void ProcessCData(mscorlib::System::String* value);
		void StartChildren();
		void EndChildren();
		void Push();
		void Pop();
		void PushGroupInfo();
		void PopGroupInfo();
		static void XDR_InitRoot(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj);
		static void XDR_BuildRoot_Name(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildRoot_ID(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BeginRoot(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_EndRoot(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_InitElementType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj);
		static void XDR_BuildElementType_Name(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildElementType_Content(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildElementType_Model(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildElementType_Order(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildElementType_DtType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildElementType_DtValues(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildElementType_DtMaxLength(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildElementType_DtMinLength(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BeginElementType(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_EndElementType(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_InitAttributeType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj);
		static void XDR_BuildAttributeType_Name(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildAttributeType_Required(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildAttributeType_Default(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildAttributeType_DtType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildAttributeType_DtValues(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildAttributeType_DtMaxLength(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildAttributeType_DtMinLength(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BeginAttributeType(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_EndAttributeType(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_InitElement(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj);
		static void XDR_BuildElement_Type(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildElement_MinOccurs(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildElement_MaxOccurs(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_EndElement(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_InitAttribute(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj);
		static void XDR_BuildAttribute_Type(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildAttribute_Required(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildAttribute_Default(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BeginAttribute(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_EndAttribute(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_InitGroup(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj);
		static void XDR_BuildGroup_Order(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildGroup_MinOccurs(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_BuildGroup_MaxOccurs(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj, mscorlib::System::String* prefix);
		static void XDR_EndGroup(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_InitElementDtType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj);
		static void XDR_EndElementDtType(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void XDR_InitAttributeDtType(System_Xml::System::Xml::Schema::XdrBuilder* builder, mscorlib::System::Object* obj);
		static void XDR_EndAttributeDtType(System_Xml::System::Xml::Schema::XdrBuilder* builder);
		bool GetNextState(System_Xml::System::Xml::XmlQualifiedName* qname);
		bool IsSkipableElement(System_Xml::System::Xml::XmlQualifiedName* qname);
		bool IsSkipableAttribute(System_Xml::System::Xml::XmlQualifiedName* qname);
		int32_t GetOrder(System_Xml::System::Xml::XmlQualifiedName* qname);
		void AddOrder();
		static bool IsYes(mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static uint32_t ParseMinOccurs(mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static uint32_t ParseMaxOccurs(mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void HandleMinMax(System_Xml::System::Xml::Schema::ParticleContentValidator* pContent, uint32_t cMin, uint32_t cMax);
		static void ParseDtMaxLength(uint32_t& cVal, mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void ParseDtMinLength(uint32_t& cVal, mscorlib::System::Object* obj, System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static void CompareMinMaxLength(uint32_t cMin, uint32_t cMax, System_Xml::System::Xml::Schema::XdrBuilder* builder);
		static bool ParseInteger(mscorlib::System::String* str, uint32_t& n);
		void XDR_CheckAttributeDefault(System_Xml::System::Xml::Schema::XdrBuilder_DeclBaseInfo* decl, System_Xml::System::Xml::Schema::SchemaAttDef* pAttdef);
		void SetAttributePresence(System_Xml::System::Xml::Schema::SchemaAttDef* pAttdef, bool fRequired);
		int32_t GetContent(System_Xml::System::Xml::XmlQualifiedName* qname);
		bool GetModel(System_Xml::System::Xml::XmlQualifiedName* qname);
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* CheckDatatype(mscorlib::System::String* str);
		void CheckDefaultAttValue(System_Xml::System::Xml::Schema::SchemaAttDef* attDef);
		bool IsGlobal(int32_t flags);
		void SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		void SendValidationEvent(mscorlib::System::String* code);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		static void _cctor();
	};
}

