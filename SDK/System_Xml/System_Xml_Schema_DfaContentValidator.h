#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_ContentValidator.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct SymbolsDictionary; };
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
	struct DfaContentValidator : System_Xml::System::Xml::Schema::ContentValidator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<IL2CPP::Array<int32_t>*>* transitionTable;
		System_Xml::System::Xml::Schema::SymbolsDictionary* symbols;
		void _ctor(IL2CPP::Array<IL2CPP::Array<int32_t>*>* transitionTable, System_Xml::System::Xml::Schema::SymbolsDictionary* symbols, System_Xml::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);
		void InitValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		mscorlib::System::Object* ValidateElement(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, int32_t& errorCode);
		bool CompleteValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		mscorlib::System::Collections::ArrayList* ExpectedElements(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);
		mscorlib::System::Collections::ArrayList* ExpectedParticles(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet);
	};
}

