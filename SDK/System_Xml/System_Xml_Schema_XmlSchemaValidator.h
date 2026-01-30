#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSet; };
#include "System_Xml_Schema_XmlSchemaValidationFlags.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml { struct IDtdInfo; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml { struct HWStack; };
namespace System_Xml::System::Xml::Schema { struct ValidationState; };
#include "System_Xml_Schema_ValidatorState.h"
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace System_Xml::System::Xml::Schema { struct IdRefNode; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlLineInfo; };
namespace System_Xml::System::Xml { struct XmlResolver; };
namespace System::System { struct Uri; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "System_Xml_Schema_XmlSchemaContentProcessing.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaParticle; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaInfo; };
namespace System_Xml::System::Xml::Schema { struct XmlValueGetter; };
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Xml_Schema_XmlSchemaContentType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct SchemaDeclBase; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
#include "System_Xml_XmlTokenizedType.h"
namespace mscorlib::System { struct Exception; };
#include "System_Xml_Schema_XmlSeverityType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaValidationException; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaException; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaValidator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet;
		System_Xml::System::Xml::Schema::XmlSchemaValidationFlags validationFlags;
		int32_t startIDConstraint;
		bool isRoot;
		bool rootHasSchema;
		bool attrValid;
		bool checkEntity;
		System_Xml::System::Xml::Schema::SchemaInfo* compiledSchemaInfo;
		System_Xml::System::Xml::IDtdInfo* dtdSchemaInfo;
		mscorlib::System::Collections::Hashtable* validatedNamespaces;
		System_Xml::System::Xml::HWStack* validationStack;
		System_Xml::System::Xml::Schema::ValidationState* context;
		System_Xml::System::Xml::Schema::ValidatorState currentState;
		mscorlib::System::Collections::Hashtable* attPresence;
		System_Xml::System::Xml::Schema::SchemaAttDef* wildID;
		mscorlib::System::Collections::Hashtable* IDs;
		System_Xml::System::Xml::Schema::IdRefNode* idRefListHead;
		System_Xml::System::Xml::XmlQualifiedName* contextQName;
		mscorlib::System::String* NsXs;
		mscorlib::System::String* NsXsi;
		mscorlib::System::String* NsXmlNs;
		mscorlib::System::String* NsXml;
		System_Xml::System::Xml::Schema::XmlSchemaObject* partialValidationType;
		mscorlib::System::Text::StringBuilder* textValue;
		System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler;
		mscorlib::System::Object* validationEventSender;
		System_Xml::System::Xml::XmlNameTable* nameTable;
		System_Xml::System::Xml::IXmlLineInfo* positionInfo;
		System_Xml::System::Xml::IXmlLineInfo* dummyPositionInfo;
		System_Xml::System::Xml::XmlResolver* xmlResolver;
		System::System::Uri* sourceUri;
		mscorlib::System::String* sourceUriString;
		System_Xml::System::Xml::IXmlNamespaceResolver* nsResolver;
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing processContents;
		mscorlib::System::String* xsiTypeString;
		mscorlib::System::String* xsiNilString;
		mscorlib::System::String* xsiSchemaLocationString;
		mscorlib::System::String* xsiNoNamespaceSchemaLocationString;
		System_Xml::System::Xml::XmlCharType xmlCharType;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtQName;
			System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtCDATA;
			System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtStringArray;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaParticle*>* EmptyParticleArray;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaAttribute*>* EmptyAttributeArray;
			IL2CPP::Array<bool>* ValidStates;
			IL2CPP::Array<mscorlib::System::String*>* MethodNames;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::XmlSchemaSet* schemas, System_Xml::System::Xml::IXmlNamespaceResolver* namespaceResolver, System_Xml::System::Xml::Schema::XmlSchemaValidationFlags validationFlags);
		void Init();
		void Reset();
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		void set_LineInfoProvider(System_Xml::System::Xml::IXmlLineInfo* value);
		void set_SourceUri(System::System::Uri* value);
		void set_ValidationEventSender(mscorlib::System::Object* value);
		void add_ValidationEventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value);
		void remove_ValidationEventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value);
		void AddSchema(System_Xml::System::Xml::Schema::XmlSchema* schema);
		void Initialize();
		void Initialize(System_Xml::System::Xml::Schema::XmlSchemaObject* partialValidationType);
		void ValidateElement(mscorlib::System::String* localName, mscorlib::System::String* namespaceUri, System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo, mscorlib::System::String* xsiType, mscorlib::System::String* xsiNil, mscorlib::System::String* xsiSchemaLocation, mscorlib::System::String* xsiNoNamespaceSchemaLocation);
		mscorlib::System::Object* ValidateAttribute(mscorlib::System::String* localName, mscorlib::System::String* namespaceUri, System_Xml::System::Xml::Schema::XmlValueGetter* attributeValue, System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo);
		mscorlib::System::Object* ValidateAttribute(mscorlib::System::String* lName, mscorlib::System::String* ns, System_Xml::System::Xml::Schema::XmlValueGetter* attributeValueGetter, mscorlib::System::String* attributeStringValue, System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo);
		void ValidateEndOfAttributes(System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo);
		void ValidateText(System_Xml::System::Xml::Schema::XmlValueGetter* elementValue);
		void ValidateText(mscorlib::System::String* elementStringValue, System_Xml::System::Xml::Schema::XmlValueGetter* elementValueGetter);
		void ValidateWhitespace(System_Xml::System::Xml::Schema::XmlValueGetter* elementValue);
		void ValidateWhitespace(mscorlib::System::String* elementStringValue, System_Xml::System::Xml::Schema::XmlValueGetter* elementValueGetter);
		mscorlib::System::Object* ValidateEndElement(System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo);
		void SkipToEndElement(System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo);
		void EndValidation();
		void GetUnspecifiedDefaultAttributes(mscorlib::System::Collections::ArrayList* defaultAttributes, bool createNodeData);
		System_Xml::System::Xml::Schema::XmlSchemaSet* get_SchemaSet();
		System_Xml::System::Xml::Schema::XmlSchemaValidationFlags get_ValidationFlags();
		System_Xml::System::Xml::Schema::XmlSchemaContentType get_CurrentContentType();
		void SetDtdSchemaInfo(System_Xml::System::Xml::IDtdInfo* dtdSchemaInfo);
		bool get_StrictlyAssessed();
		bool get_HasSchema();
		mscorlib::System::String* GetConcatenatedValue();
		mscorlib::System::Object* InternalValidateEndElement(System_Xml::System::Xml::Schema::XmlSchemaInfo* schemaInfo, mscorlib::System::Object* typedValue);
		void ProcessSchemaLocations(mscorlib::System::String* xsiSchemaLocation, mscorlib::System::String* xsiNoNamespaceSchemaLocation);
		mscorlib::System::Object* ValidateElementContext(System_Xml::System::Xml::XmlQualifiedName* elementName, bool& invalidElementInContext);
		System_Xml::System::Xml::Schema::XmlSchemaElement* GetSubstitutionGroupHead(System_Xml::System::Xml::XmlQualifiedName* member);
		mscorlib::System::Object* ValidateAtomicValue(mscorlib::System::String* stringValue, System_Xml::System::Xml::Schema::XmlSchemaSimpleType& memberType);
		mscorlib::System::Object* ValidateAtomicValue(mscorlib::System::Object* parsedValue, System_Xml::System::Xml::Schema::XmlSchemaSimpleType& memberType);
		mscorlib::System::String* GetTypeName(System_Xml::System::Xml::Schema::SchemaDeclBase* decl);
		void SaveTextValue(mscorlib::System::Object* value);
		void Push(System_Xml::System::Xml::XmlQualifiedName* elementName);
		void Pop();
		System_Xml::System::Xml::Schema::SchemaElementDecl* FastGetElementDecl(System_Xml::System::Xml::XmlQualifiedName* elementName, mscorlib::System::Object* particle);
		System_Xml::System::Xml::Schema::SchemaElementDecl* CheckXsiTypeAndNil(System_Xml::System::Xml::Schema::SchemaElementDecl* elementDecl, mscorlib::System::String* xsiType, mscorlib::System::String* xsiNil, bool& declFound);
		void ThrowDeclNotFoundWarningOrError(bool declFound);
		void CheckElementProperties();
		void ValidateStartElementIdentityConstraints();
		System_Xml::System::Xml::Schema::SchemaAttDef* CheckIsXmlAttribute(System_Xml::System::Xml::XmlQualifiedName* attQName);
		void AddXmlNamespaceSchema();
		mscorlib::System::Object* CheckMixedValueConstraint(mscorlib::System::String* elementValue);
		void LoadSchema(mscorlib::System::String* uri, mscorlib::System::String* url);
		void RecompileSchemaSet();
		void ProcessTokenizedType(System_Xml::System::Xml::XmlTokenizedType ttype, mscorlib::System::String* name, bool attrValue);
		mscorlib::System::Object* CheckAttributeValue(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::SchemaAttDef* attdef);
		mscorlib::System::Object* CheckElementValue(mscorlib::System::String* stringValue);
		void CheckTokenizedTypes(System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtype, mscorlib::System::Object* typedValue, bool attrValue);
		mscorlib::System::Object* FindId(mscorlib::System::String* name);
		void CheckForwardRefs();
		bool get_HasIdentityConstraints();
		bool get_ProcessIdentityConstraints();
		bool get_ReportValidationWarnings();
		bool get_ProcessSchemaHints();
		void CheckStateTransition(System_Xml::System::Xml::Schema::ValidatorState toState, mscorlib::System::String* methodName);
		void ClearPSVI();
		void CheckRequiredAttributes(System_Xml::System::Xml::Schema::SchemaElementDecl* currentElementDecl);
		System_Xml::System::Xml::Schema::XmlSchemaElement* GetSchemaElement();
		mscorlib::System::String* GetDefaultAttributePrefix(mscorlib::System::String* attributeNS);
		void AddIdentityConstraints();
		void ElementIdentityConstraints();
		void AttributeIdentityConstraints(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* obj, mscorlib::System::String* sobj, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		void EndElementIdentityConstraints(mscorlib::System::Object* typedValue, mscorlib::System::String* stringValue, System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		static void ElementValidationError(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, mscorlib::System::Object* sender, mscorlib::System::String* sourceUri, int32_t lineNo, int32_t linePos, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet);
		static void CompleteValidationError(System_Xml::System::Xml::Schema::ValidationState* context, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, mscorlib::System::Object* sender, mscorlib::System::String* sourceUri, int32_t lineNo, int32_t linePos, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet);
		static mscorlib::System::String* PrintExpectedElements(mscorlib::System::Collections::ArrayList* expected, bool getParticles);
		static mscorlib::System::String* PrintNames(mscorlib::System::Collections::ArrayList* expected);
		static void PrintNamesWithNS(mscorlib::System::Collections::ArrayList* expected, mscorlib::System::Text::StringBuilder* builder);
		static void EnumerateAny(mscorlib::System::Text::StringBuilder* builder, mscorlib::System::String* namespaces);
		static mscorlib::System::String* QNameString(mscorlib::System::String* localName, mscorlib::System::String* ns);
		static mscorlib::System::String* BuildElementName(System_Xml::System::Xml::XmlQualifiedName* qname);
		static mscorlib::System::String* BuildElementName(mscorlib::System::String* localName, mscorlib::System::String* ns);
		void ProcessEntity(mscorlib::System::String* name);
		void SendValidationEvent(mscorlib::System::String* code);
		void SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* arg);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* arg1, mscorlib::System::String* arg2);
		void SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		void SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaValidationException* e);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaValidationException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		static void SendValidationEvent(System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, mscorlib::System::Object* sender, System_Xml::System::Xml::Schema::XmlSchemaValidationException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		static void _cctor();
	};
}

