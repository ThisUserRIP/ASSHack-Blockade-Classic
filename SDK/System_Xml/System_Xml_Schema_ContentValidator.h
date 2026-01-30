#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_XmlSchemaContentType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct ValidationState; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSet; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaParticle; };

namespace System_Xml::System::Xml::Schema
{
	struct ContentValidator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaContentType contentType;
		bool isOpen;
		bool isEmptiable;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::ContentValidator* Empty;
			System_Xml::System::Xml::Schema::ContentValidator* TextOnly;
			System_Xml::System::Xml::Schema::ContentValidator* Mixed;
			System_Xml::System::Xml::Schema::ContentValidator* Any;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaContentType contentType);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);
		System_Xml::System::Xml::Schema::XmlSchemaContentType get_ContentType();
		bool get_PreserveWhitespace();
		bool get_IsEmptiable();
		bool get_IsOpen();
		void set_IsOpen(bool value);
		void InitValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		mscorlib::System::Object* ValidateElement(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::ValidationState* context, int32_t& errorCode);
		bool CompleteValidation(System_Xml::System::Xml::Schema::ValidationState* context);
		mscorlib::System::Collections::ArrayList* ExpectedElements(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);
		mscorlib::System::Collections::ArrayList* ExpectedParticles(System_Xml::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet);
		static void AddParticleToExpected(System_Xml::System::Xml::Schema::XmlSchemaParticle* p, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet, mscorlib::System::Collections::ArrayList* particles);
		static void AddParticleToExpected(System_Xml::System::Xml::Schema::XmlSchemaParticle* p, System_Xml::System::Xml::Schema::XmlSchemaSet* schemaSet, mscorlib::System::Collections::ArrayList* particles, bool global);
		static void _cctor();
	};
}

