#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_BaseValidator.h"
namespace System_Xml::System::Xml::Schema { struct DtdValidator_NamespaceManager; };
namespace System_Xml::System::Xml { struct HWStack; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct IdRefNode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlValidatingReaderImpl; };
namespace System_Xml::System::Xml { struct IValidationEventHandling; };
#include "System_Xml_XmlTokenizedType.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct SchemaEntity; };
namespace System_Xml::System::Xml { struct IDtdParserAdapter; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };

namespace System_Xml::System::Xml::Schema
{
	struct DtdValidator : System_Xml::System::Xml::Schema::BaseValidator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::HWStack* validationStack;
		mscorlib::System::Collections::Hashtable* attPresence;
		System_Xml::System::Xml::XmlQualifiedName* name;
		mscorlib::System::Collections::Hashtable* IDs;
		System_Xml::System::Xml::Schema::IdRefNode* idRefListHead;
		bool processIdentityConstraints;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::DtdValidator_NamespaceManager* namespaceManager;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::XmlValidatingReaderImpl* reader, System_Xml::System::Xml::IValidationEventHandling* eventHandling, bool processIdentityConstraints);
		void Init();
		void Validate();
		bool MeetsStandAloneConstraint();
		void ValidatePIComment();
		void ValidateElement();
		void ValidateChildElement();
		void ValidateStartElement();
		void ValidateEndStartElement();
		void ProcessElement();
		void CompleteValidation();
		void ValidateEndElement();
		bool get_PreserveWhitespace();
		void ProcessTokenizedType(System_Xml::System::Xml::XmlTokenizedType ttype, mscorlib::System::String* name);
		void CheckValue(mscorlib::System::String* value, System_Xml::System::Xml::Schema::SchemaAttDef* attdef);
		void AddID(mscorlib::System::String* name, mscorlib::System::Object* node);
		mscorlib::System::Object* FindId(mscorlib::System::String* name);
		bool GenEntity(System_Xml::System::Xml::XmlQualifiedName* qname);
		System_Xml::System::Xml::Schema::SchemaEntity* GetEntity(System_Xml::System::Xml::XmlQualifiedName* qname, bool fParameterEntity);
		void CheckForwardRefs();
		void Push(System_Xml::System::Xml::XmlQualifiedName* elementName);
		bool Pop();
		static void SetDefaultTypedValue(System_Xml::System::Xml::Schema::SchemaAttDef* attdef, System_Xml::System::Xml::IDtdParserAdapter* readerAdapter);
		static void CheckDefaultValue(System_Xml::System::Xml::Schema::SchemaAttDef* attdef, System_Xml::System::Xml::Schema::SchemaInfo* sinfo, System_Xml::System::Xml::IValidationEventHandling* eventHandling, mscorlib::System::String* baseUriStr);
		static void _cctor();
	};
}

