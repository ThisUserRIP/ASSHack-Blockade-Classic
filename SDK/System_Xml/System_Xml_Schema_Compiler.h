#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_BaseProcessor.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
namespace mscorlib::System::Collections { struct Stack; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCompilationSettings; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSet; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttributeGroup; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaComplexType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaGroup; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaParticle; };
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
#include "..\mscorlib\System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_Schema_XmlSchemaContentType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnyAttribute; };
#include "System_Xml_Schema_XmlSchemaDerivationMethod.h"
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaIdentityConstraint; };
namespace System_Xml::System::Xml::Schema { struct ContentValidator; };
namespace System_Xml::System::Xml::Schema { struct ParticleContentValidator; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnnotated; };
namespace System_Xml::System::Xml::Schema { struct SchemaDeclBase; };

namespace System_Xml::System::Xml::Schema
{
	struct Compiler : System_Xml::System::Xml::Schema::BaseProcessor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* restrictionErrorMsg;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* attributes;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* elements;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* schemaTypes;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* groups;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* notations;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* examplars;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* identityConstraints;
		mscorlib::System::Collections::Stack* complexTypeStack;
		mscorlib::System::Collections::Hashtable* schemasToCompile;
		mscorlib::System::Collections::Hashtable* importedSchemas;
		System_Xml::System::Xml::Schema::XmlSchema* schemaForSchema;
		void _ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, System_Xml::System::Xml::Schema::XmlSchema* schemaForSchema, System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);
		bool Execute(System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet, System_Xml::System::Xml::Schema::SchemaInfo* schemaCompiledInfo);
		void Prepare(System_Xml::System::Xml::Schema::XmlSchema* schema, bool cleanup);
		void UpdateSForSSimpleTypes();
		void Output(System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo);
		void ImportAllCompiledSchemas(System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet);
		bool Compile();
		void CleanupAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute);
		void CleanupAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);
		void CleanupComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		void CleanupSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType);
		void CleanupElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element);
		void CleanupAttributes(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes);
		void CleanupGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group);
		void CleanupParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void ProcessSubstitutionGroups();
		void CompileSubstitutionGroup(System_Xml::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup);
		void RecursivelyCheckRedefinedGroups(System_Xml::System::Xml::Schema::XmlSchemaGroup* redefinedGroup, System_Xml::System::Xml::Schema::XmlSchemaGroup* baseGroup);
		void RecursivelyCheckRedefinedAttributeGroups(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup, System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* baseAttributeGroup);
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
		void CheckParticleDerivation(System_Xml::System::Xml::Schema::XmlSchemaParticle* derivedParticle, System_Xml::System::Xml::Schema::XmlSchemaParticle* baseParticle);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CompileContentTypeParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, bool root);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeGroupRef(System_Xml::System::Xml::Schema::XmlSchemaGroupRef* groupRef, bool root);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeAll(System_Xml::System::Xml::Schema::XmlSchemaAll* all, bool root);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeChoice(System_Xml::System::Xml::Schema::XmlSchemaChoice* choice, bool root);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizeSequence(System_Xml::System::Xml::Schema::XmlSchemaSequence* sequence, bool root);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* CannonicalizePointlessRoot(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		bool IsValidRestriction(System_Xml::System::Xml::Schema::XmlSchemaParticle* derivedParticle, System_Xml::System::Xml::Schema::XmlSchemaParticle* baseParticle);
		bool IsElementFromElement(System_Xml::System::Xml::Schema::XmlSchemaElement* derivedElement, System_Xml::System::Xml::Schema::XmlSchemaElement* baseElement);
		bool IsElementFromAny(System_Xml::System::Xml::Schema::XmlSchemaElement* derivedElement, System_Xml::System::Xml::Schema::XmlSchemaAny* baseAny);
		bool IsAnyFromAny(System_Xml::System::Xml::Schema::XmlSchemaAny* derivedAny, System_Xml::System::Xml::Schema::XmlSchemaAny* baseAny);
		bool IsGroupBaseFromAny(System_Xml::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, System_Xml::System::Xml::Schema::XmlSchemaAny* baseAny);
		bool IsElementFromGroupBase(System_Xml::System::Xml::Schema::XmlSchemaElement* derivedElement, System_Xml::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase);
		bool IsChoiceFromChoiceSubstGroup(System_Xml::System::Xml::Schema::XmlSchemaChoice* derivedChoice, System_Xml::System::Xml::Schema::XmlSchemaChoice* baseChoice);
		bool IsGroupBaseFromGroupBase(System_Xml::System::Xml::Schema::XmlSchemaGroupBase* derivedGroupBase, System_Xml::System::Xml::Schema::XmlSchemaGroupBase* baseGroupBase, bool skipEmptableOnly);
		bool IsSequenceFromAll(System_Xml::System::Xml::Schema::XmlSchemaSequence* derivedSequence, System_Xml::System::Xml::Schema::XmlSchemaAll* baseAll);
		bool IsSequenceFromChoice(System_Xml::System::Xml::Schema::XmlSchemaSequence* derivedSequence, System_Xml::System::Xml::Schema::XmlSchemaChoice* baseChoice);
		bool IsValidOccurrenceRangeRestriction(System_Xml::System::Xml::Schema::XmlSchemaParticle* derivedParticle, System_Xml::System::Xml::Schema::XmlSchemaParticle* baseParticle);
		bool IsValidOccurrenceRangeRestriction(mscorlib::System::Decimal minOccurs, mscorlib::System::Decimal maxOccurs, mscorlib::System::Decimal baseMinOccurs, mscorlib::System::Decimal baseMaxOccurs);
		int32_t GetMappingParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* collection);
		bool IsParticleEmptiable(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CalculateEffectiveTotalRange(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, mscorlib::System::Decimal& minOccurs, mscorlib::System::Decimal& maxOccurs);
		void PushComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		System_Xml::System::Xml::Schema::XmlSchemaContentType GetSchemaContentType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaComplexContent* complexContent, System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CompileAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);
		void CompileLocalAttributes(System_Xml::System::Xml::Schema::XmlSchemaComplexType* baseType, System_Xml::System::Xml::Schema::XmlSchemaComplexType* derivedType, System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy);
		void CheckAtrributeGroupRestriction(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* baseAttributeGroup, System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* derivedAttributeGroup);
		bool IsProcessContentsRestricted(System_Xml::System::Xml::Schema::XmlSchemaComplexType* baseType, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* derivedAttributeWildcard, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* baseAttributeWildcard);
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeUnion(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* a, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* b);
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* CompileAnyAttributeIntersection(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* a, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* b);
		void CompileAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* xa);
		void SetDefaultFixed(System_Xml::System::Xml::Schema::XmlSchemaAttribute* xa, System_Xml::System::Xml::Schema::SchemaAttDef* decl);
		void CompileIdentityConstraint(System_Xml::System::Xml::Schema::XmlSchemaIdentityConstraint* xi);
		void CompileElement(System_Xml::System::Xml::Schema::XmlSchemaElement* xe);
		System_Xml::System::Xml::Schema::ContentValidator* CompileComplexContent(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		bool BuildParticleContentModel(System_Xml::System::Xml::Schema::ParticleContentValidator* contentValidator, System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CompileParticleElements(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CompileParticleElements(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void CompileComplexTypeElements(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType);
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleType(System_Xml::System::Xml::XmlQualifiedName* name);
		System_Xml::System::Xml::Schema::XmlSchemaComplexType* GetComplexType(System_Xml::System::Xml::XmlQualifiedName* name);
		System_Xml::System::Xml::Schema::XmlSchemaType* GetAnySchemaType(System_Xml::System::Xml::XmlQualifiedName* name);
		void CopyPosition(System_Xml::System::Xml::Schema::XmlSchemaAnnotated* to, System_Xml::System::Xml::Schema::XmlSchemaAnnotated* from, bool copyParent);
		bool IsFixedEqual(System_Xml::System::Xml::Schema::SchemaDeclBase* baseDecl, System_Xml::System::Xml::Schema::SchemaDeclBase* derivedDecl);
	};
}

