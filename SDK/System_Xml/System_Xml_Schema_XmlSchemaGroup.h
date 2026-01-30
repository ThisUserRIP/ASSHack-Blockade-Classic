#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaAnnotated.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaGroupBase; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaParticle; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaGroup : System_Xml::System::Xml::Schema::XmlSchemaAnnotated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		System_Xml::System::Xml::Schema::XmlSchemaGroupBase* particle;
		System_Xml::System::Xml::Schema::XmlSchemaParticle* canonicalParticle;
		System_Xml::System::Xml::XmlQualifiedName* qname;
		System_Xml::System::Xml::Schema::XmlSchemaGroup* redefined;
		int32_t selfReferenceCount;
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaGroupBase* get_Particle();
		void set_Particle(System_Xml::System::Xml::Schema::XmlSchemaGroupBase* value);
		System_Xml::System::Xml::XmlQualifiedName* get_QualifiedName();
		System_Xml::System::Xml::Schema::XmlSchemaParticle* get_CanonicalParticle();
		void set_CanonicalParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* value);
		System_Xml::System::Xml::Schema::XmlSchemaGroup* get_Redefined();
		void set_Redefined(System_Xml::System::Xml::Schema::XmlSchemaGroup* value);
		int32_t get_SelfReferenceCount();
		void set_SelfReferenceCount(int32_t value);
		mscorlib::System::String* get_NameAttribute();
		void set_NameAttribute(mscorlib::System::String* value);
		void SetQualifiedName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone(System_Xml::System::Xml::Schema::XmlSchema* parentSchema);
		void _ctor();
	};
}

