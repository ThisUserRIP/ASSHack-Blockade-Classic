#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaParticle.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_Schema_XmlSchemaDerivationMethod.h"
#include "System_Xml_Schema_XmlSchemaForm.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaElement : System_Xml::System::Xml::Schema::XmlSchemaParticle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isAbstract;
		bool hasAbstractAttribute;
		bool isNillable;
		bool hasNillableAttribute;
		bool isLocalTypeDerivationChecked;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod block;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod final;
		System_Xml::System::Xml::Schema::XmlSchemaForm form;
		mscorlib::System::String* defaultValue;
		mscorlib::System::String* fixedValue;
		mscorlib::System::String* name;
		System_Xml::System::Xml::XmlQualifiedName* refName;
		System_Xml::System::Xml::XmlQualifiedName* substitutionGroup;
		System_Xml::System::Xml::XmlQualifiedName* typeName;
		System_Xml::System::Xml::Schema::XmlSchemaType* type;
		System_Xml::System::Xml::XmlQualifiedName* qualifiedName;
		System_Xml::System::Xml::Schema::XmlSchemaType* elementType;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod blockResolved;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod finalResolved;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* constraints;
		System_Xml::System::Xml::Schema::SchemaElementDecl* elementDecl;
		bool get_IsAbstract();
		void set_IsAbstract(bool value);
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_Block();
		void set_Block(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		mscorlib::System::String* get_DefaultValue();
		void set_DefaultValue(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_Final();
		void set_Final(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		mscorlib::System::String* get_FixedValue();
		void set_FixedValue(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaForm get_Form();
		void set_Form(System_Xml::System::Xml::Schema::XmlSchemaForm value);
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		bool get_IsNillable();
		void set_IsNillable(bool value);
		bool get_HasNillableAttribute();
		bool get_HasAbstractAttribute();
		System_Xml::System::Xml::XmlQualifiedName* get_RefName();
		void set_RefName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::XmlQualifiedName* get_SubstitutionGroup();
		void set_SubstitutionGroup(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::XmlQualifiedName* get_SchemaTypeName();
		void set_SchemaTypeName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::Schema::XmlSchemaType* get_SchemaType();
		void set_SchemaType(System_Xml::System::Xml::Schema::XmlSchemaType* value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Constraints();
		System_Xml::System::Xml::XmlQualifiedName* get_QualifiedName();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_ElementSchemaType();
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_BlockResolved();
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_FinalResolved();
		void SetQualifiedName(System_Xml::System::Xml::XmlQualifiedName* value);
		void SetElementType(System_Xml::System::Xml::Schema::XmlSchemaType* value);
		void SetBlockResolved(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		void SetFinalResolved(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		bool get_HasConstraints();
		bool get_IsLocalTypeDerivationChecked();
		void set_IsLocalTypeDerivationChecked(bool value);
		System_Xml::System::Xml::Schema::SchemaElementDecl* get_ElementDecl();
		void set_ElementDecl(System_Xml::System::Xml::Schema::SchemaElementDecl* value);
		mscorlib::System::String* get_NameAttribute();
		void set_NameAttribute(mscorlib::System::String* value);
		mscorlib::System::String* get_NameString();
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone(System_Xml::System::Xml::Schema::XmlSchema* parentSchema);
		void _ctor();
	};
}

