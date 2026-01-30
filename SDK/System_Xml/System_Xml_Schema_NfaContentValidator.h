#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_ContentValidator.h"
namespace System_Xml::System::Xml::Schema { struct BitSet; };
namespace System_Xml::System::Xml::Schema { struct SymbolsDictionary; };
namespace System_Xml::System::Xml::Schema { struct Positions; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_Schema_XmlSchemaContentType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct ValidationState; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSet; };

namespace System_Xml::System::Xml::Schema
{
	struct NfaContentValidator : System_Xml::System::Xml::Schema::ContentValidator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::BitSet* firstpos;
		IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos;
		System_Xml::System::Xml::Schema::SymbolsDictionary* symbols;
		System_Xml::System::Xml::Schema::Positions* positions;
		int32_t endMarkerPos;
		void _ctor(System_Xml::System::Xml::Schema::BitSet* firstpos, IL2CPP::Array<System_Xml::System::Xml::Schema::BitSet*>* followpos, System_Xml::System::Xml::Schema::SymbolsDictionary* symbols, System_Xml::System::Xml::Schema::Positions* positions, int32_t endMarkerPos, System_Xml::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);
		void InitValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		mscorlib::System::Object* ValidateElement(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, int32_t& errorCode);
		bool CompleteValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		mscorlib::System::Collections::ArrayList* ExpectedElements(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);
		mscorlib::System::Collections::ArrayList* ExpectedParticles(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet);
	};
}

