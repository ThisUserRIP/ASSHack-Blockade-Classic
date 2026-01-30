#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_FacetsChecker.h"
namespace System_Xml::System::Xml::Schema { struct FacetsChecker; };
namespace System_Xml::System::Xml::Schema { struct DatatypeImplementation; };
namespace System_Xml::System::Xml::Schema { struct RestrictionFacets; };
#include "System_Xml_Schema_RestrictionFlags.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
#include "System_Xml_Schema_XmlTypeCode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaPatternFacet; };
#include "System_Xml_Schema_FacetsChecker_FacetsCompiler_Map.h"
namespace System_Xml::System::Xml::Schema { struct FacetsChecker_FacetsCompiler_Map; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaFacet; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml::Schema
{
	struct FacetsChecker_FacetsCompiler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::DatatypeImplementation* datatype;
		System_Xml::System::Xml::Schema::RestrictionFacets* derivedRestriction;
		System_Xml::System::Xml::Schema::RestrictionFlags baseFlags;
		System_Xml::System::Xml::Schema::RestrictionFlags baseFixedFlags;
		System_Xml::System::Xml::Schema::RestrictionFlags validRestrictionFlags;
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* nonNegativeInt;
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* builtInType;
		System_Xml::System::Xml::Schema::XmlTypeCode builtInEnum;
		bool firstPattern;
		mscorlib::System::Text::StringBuilder* regStr;
		System_Xml::System::Xml::Schema::XmlSchemaPatternFacet* pattern_facet;
		void _ctor(System_Xml::System::Xml::Schema::DatatypeImplementation* baseDatatype, System_Xml::System::Xml::Schema::RestrictionFacets* restriction);
		void CompileLengthFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompileMinLengthFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompileMaxLengthFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompilePatternFacet(System_Xml::System::Xml::Schema::XmlSchemaPatternFacet* facet);
		void CompileEnumerationFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, System_Xml::System::Xml::XmlNameTable* nameTable);
		void CompileWhitespaceFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompileMaxInclusiveFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompileMaxExclusiveFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompileMinInclusiveFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompileMinExclusiveFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompileTotalDigitsFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompileFractionDigitsFacet(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void FinishFacetCompile();
		void CheckValue(mscorlib::System::Object* value, System_Xml::System::Xml::Schema::XmlSchemaFacet* facet);
		void CompileFacetCombinations();
		void CopyFacetsFromBaseType();
		mscorlib::System::Object* ParseFacetValue(System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype, System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, mscorlib::System::String* code, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, System_Xml::System::Xml::XmlNameTable* nameTable);
		static mscorlib::System::String* Preprocess(mscorlib::System::String* pattern);
		void CheckProhibitedFlag(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, System_Xml::System::Xml::Schema::RestrictionFlags flag, mscorlib::System::String* errorCode);
		void CheckDupFlag(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, System_Xml::System::Xml::Schema::RestrictionFlags flag, mscorlib::System::String* errorCode);
		void SetFlag(System_Xml::System::Xml::Schema::XmlSchemaFacet* facet, System_Xml::System::Xml::Schema::RestrictionFlags flag);
		void SetFlag(System_Xml::System::Xml::Schema::RestrictionFlags flag);
		static void _cctor();
	};
}

