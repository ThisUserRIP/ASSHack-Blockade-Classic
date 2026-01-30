#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_BaseProcessor.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
namespace mscorlib::System::Collections { struct Stack; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttributeGroup; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaComplexType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaGroup; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaParticle; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSubstitutionGroupV1Compat; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSubstitutionGroup; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleContentExtension; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleContentRestriction; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaComplexContent; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaComplexContentExtension; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaComplexContentRestriction; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaGroupRef; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAll; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaChoice; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSequence; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAny; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaGroupBase; };
namespace mscorlib::System { struct Decimal; };
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Decimal.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_Schema_XmlSchemaContentType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnyAttribute; };
#include "System_Xml_Schema_XmlSchemaDerivationMethod.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaIdentityConstraint; };
namespace System_Xml::System::Xml::Schema { struct ContentValidator; };
namespace System_Xml::System::Xml::Schema { struct ParticleContentValidator; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaCollectionCompiler : System_Xml::System::Xml::Schema::BaseProcessor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool compileContentModel;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* examplars;
		mscorlib::System::Collections::Stack* complexTypeStack;
		System_Xml::System::Xml::Schema::XmlSchema* schema;
		void _ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler);
		bool Execute(System_Xml::System::Xml::Schema::XmlSchema* schema, System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo, bool compileContentModel);
		void Prepare();
		void Cleanup();
		static void Cleanup(System_Xml::System::Xml::Schema::XmlSchema* schema);
		void Compile();
		void Output(System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo);
		static void CleanupAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute);
		static void CleanupAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);
		static void CleanupComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		static void CleanupSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType);
		static void CleanupElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element);
		static void CleanupAttributes(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes);
		static void CleanupGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group);
		static void CleanupParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CompileSubstitutionGroup(System_Xml::System::Xml::Schema::XmlSchemaSubstitutionGroupV1Compat* substitutionGroup);
		void CheckSubstitutionGroup(System_Xml::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup);
		void CompileGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group);
		void CompileSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType);
		IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* CompileBaseMemberTypes(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType);
		void CheckUnionType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* unionMember, mscorlib::System::Collections::ArrayList* memberTypeDefinitions, System_Xml::System::Xml::Schema::XmlSchemaSimpleType* parentType);
		void CompileComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		void CompileSimpleContentExtension(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaSimpleContentExtension* simpleExtension);
		void CompileSimpleContentRestriction(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaSimpleContentRestriction* simpleRestriction);
		void CompileComplexContentExtension(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaComplexContent* complexContent, System_Xml::System::Xml::Schema::XmlSchemaComplexContentExtension* complexExtension);
		void CompileComplexContentRestriction(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaComplexContent* complexContent, System_Xml::System::Xml::Schema::XmlSchemaComplexContentRestriction* complexRestriction);
		void CheckParticleDerivation(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CompileContentTypeParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, bool substitution);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, bool root, bool substitution);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element, bool substitution);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeGroupRef(System_Xml::System::Xml::Schema::XmlSchemaGroupRef* groupRef, bool root, bool substitution);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeAll(System_Xml::System::Xml::Schema::XmlSchemaAll* all, bool root, bool substitution);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeChoice(System_Xml::System::Xml::Schema::XmlSchemaChoice* choice, bool root, bool substitution);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeSequence(System_Xml::System::Xml::Schema::XmlSchemaSequence* sequence, bool root, bool substitution);
		bool IsValidRestriction(System_Xml::System::Xml::Schema::XmlSchemaParticle* derivedParticle, System_Xml::System::Xml::Schema::XmlSchemaParticle* baseParticle);
		bool IsElementFromElement(System_Xml::System::Xml::Schema::XmlSchemaElement* derivedElement, System_Xml::System::Xml::Schema::XmlSchemaElement* baseElement);
		bool IsElementFromAny(System_Xml::System::Xml::Schema::XmlSchemaElement* derivedElement, System_Xml::System::Xml::Schema::XmlSchemaAny* baseAny);
		bool IsAnyFromAny(System_Xml::System::Xml::Schema::XmlSchemaAny* derivedAny, System_Xml::System::Xml::Schema::XmlSchemaAny* baseAny);
		bool IsGroupBaseFromAny(System_Xml::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, System_Xml::System::Xml::Schema::XmlSchemaAny* baseAny);
		bool IsElementFromGroupBase(System_Xml::System::Xml::Schema::XmlSchemaElement* derivedElement, System_Xml::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly);
		bool IsGroupBaseFromGroupBase(System_Xml::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, System_Xml::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly);
		bool IsSequenceFromAll(System_Xml::System::Xml::Schema::XmlSchemaSequence* derivedSequence, System_Xml::System::Xml::Schema::XmlSchemaAll* baseAll);
		bool IsSequenceFromChoice(System_Xml::System::Xml::Schema::XmlSchemaSequence* derivedSequence, System_Xml::System::Xml::Schema::XmlSchemaChoice* baseChoice);
		void CalculateSequenceRange(System_Xml::System::Xml::Schema::XmlSchemaSequence* sequence, mscorlib::System::Decimal& minOccurs, mscorlib::System::Decimal& maxOccurs);
		bool IsValidOccurrenceRangeRestriction(System_Xml::System::Xml::Schema::XmlSchemaParticle* derivedParticle, System_Xml::System::Xml::Schema::XmlSchemaParticle* baseParticle);
		bool IsValidOccurrenceRangeRestriction(mscorlib::System::Decimal minOccurs, mscorlib::System::Decimal maxOccurs, mscorlib::System::Decimal baseMinOccurs, mscorlib::System::Decimal baseMaxOccurs);
		int32_t GetMappingParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* collection);
		bool IsParticleEmptiable(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CalculateEffectiveTotalRange(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, mscorlib::System::Decimal& minOccurs, mscorlib::System::Decimal& maxOccurs);
		void PushComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		System_Xml::System::Xml::Schema::XmlSchemaContentType GetSchemaContentType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaComplexContent* complexContent, System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CompileAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);
		void CompileLocalAttributes(System_Xml::System::Xml::Schema::XmlSchemaComplexType* baseType, System_Xml::System::Xml::Schema::XmlSchemaComplexType* derivedType, System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy);
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeUnion(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* a, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* b);
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeIntersection(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* a, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* b);
		void CompileAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* xa);
		void CompileIdentityConstraint(System_Xml::System::Xml::Schema::XmlSchemaIdentityConstraint* xi);
		void CompileElement(System_Xml::System::Xml::Schema::XmlSchemaElement* xe);
		System_Xml::System::Xml::Schema::ContentValidator* CompileComplexContent(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		void BuildParticleContentModel(System_Xml::System::Xml::Schema::ParticleContentValidator* contentValidator, System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CompileParticleElements(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CompileCompexTypeElements(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleType(System_Xml::System::Xml::XmlQualifiedName* name);
		System_Xml::System::Xml::Schema::XmlSchemaComplexType* GetComplexType(System_Xml::System::Xml::XmlQualifiedName* name);
		System_Xml::System::Xml::Schema::XmlSchemaType* GetAnySchemaType(System_Xml::System::Xml::XmlQualifiedName* name);
	};
}

