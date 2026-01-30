#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_BaseValidator.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlValidatingReaderImpl; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollection; };
namespace System_Xml::System::Xml { struct IValidationEventHandling; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "System_Xml_ValidationType.h"

namespace System_Xml::System::Xml::Schema
{
	struct AutoValidator : System_Xml::System::Xml::Schema::BaseValidator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(System_Xml::System::Xml::XmlValidatingReaderImpl* reader, System_Xml::System::Xml::Schema::XmlSchemaCollection* schemaCollection, System_Xml::System::Xml::IValidationEventHandling* eventHandling);
		bool get_PreserveWhitespace();
		void Validate();
		void CompleteValidation();
		mscorlib::System::Object* FindId(mscorlib::System::String* name);
		System_Xml::System::Xml::ValidationType DetectValidationType();
	};
}

