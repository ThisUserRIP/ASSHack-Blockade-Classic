#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_ContentValidator.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct BitSet; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_Schema_XmlSchemaContentType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct ValidationState; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSet; };

namespace System_Xml::System::Xml::Schema
{
	struct AllElementsContentValidator : System_Xml::System::Xml::Schema::ContentValidator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* elements;
		IL2CPP::Array<mscorlib::System::Object*>* particles;
		System_Xml::System::Xml::Schema::BitSet* isRequired;
		int32_t countRequired;
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaContentType contentType, int32_t size, bool isEmptiable);
		bool AddElement(System_Xml::System::Xml::XmlQualifiedName* name, mscorlib::System::Object* particle, bool isEmptiable);
		bool get_IsEmptiable();
		void InitValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		mscorlib::System::Object* ValidateElement(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, int32_t& errorCode);
		bool CompleteValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		mscorlib::System::Collections::ArrayList* ExpectedElements(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);
		mscorlib::System::Collections::ArrayList* ExpectedParticles(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet);
	};
}

