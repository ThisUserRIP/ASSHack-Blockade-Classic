#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaType.h"
#include "System_Xml_Schema_XmlSchemaDerivationMethod.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaContentModel; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaParticle; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnyAttribute; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_Schema_XmlSchemaContentProcessing.h"
namespace System_Xml::System::Xml::Schema { struct ContentValidator; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_Schema_XmlSchemaContentType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
#include "System_Xml_Schema_XmlSchemaForm.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaComplexType : System_Xml::System::Xml::Schema::XmlSchemaType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod block;
		System_Xml::System::Xml::Schema::XmlSchemaContentModel* contentModel;
		System_Xml::System::Xml::Schema::XmlSchemaParticle* particle;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes;
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
		System_Xml::System::Xml::Schema::XmlSchemaParticle* contentTypeParticle;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod blockResolved;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* localElements;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* attributeUses;
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard;
		uint8_t pvFlags;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::XmlSchemaComplexType* anyTypeLax;
			System_Xml::System::Xml::Schema::XmlSchemaComplexType* anyTypeSkip;
			System_Xml::System::Xml::Schema::XmlSchemaComplexType* untypedAnyType;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static System_Xml::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType(System_Xml::System::Xml::Schema::XmlSchemaContentProcessing processContents);
		void _ctor();
		static System_Xml::System::Xml::Schema::XmlSchemaComplexType* get_AnyType();
		static System_Xml::System::Xml::Schema::XmlSchemaComplexType* get_UntypedAnyType();
		static System_Xml::System::Xml::Schema::ContentValidator* get_AnyTypeContentValidator();
		bool get_IsAbstract();
		void set_IsAbstract(bool value);
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_Block();
		void set_Block(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		bool get_IsMixed();
		void set_IsMixed(bool value);
		System_Xml::System::Xml::Schema::XmlSchemaContentModel* get_ContentModel();
		void set_ContentModel(System_Xml::System::Xml::Schema::XmlSchemaContentModel* value);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* get_Particle();
		void set_Particle(System_Xml::System::Xml::Schema::XmlSchemaParticle* value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();
		void set_AnyAttribute(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* value);
		System_Xml::System::Xml::Schema::XmlSchemaContentType get_ContentType();
		System_Xml::System::Xml::Schema::XmlSchemaParticle* get_ContentTypeParticle();
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_BlockResolved();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeUses();
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* get_AttributeWildcard();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_LocalElements();
		void SetContentTypeParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* value);
		void SetBlockResolved(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		void SetAttributeWildcard(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* value);
		void set_HasWildCard(bool value);
		void SetAttributes(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes);
		bool ContainsIdAttribute(bool findAll);
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone(System_Xml::System::Xml::Schema::XmlSchema* parentSchema);
		void ClearCompiledState();
		static System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* CloneAttributes(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes);
		static System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* CloneGroupBaseParticles(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* groupBaseParticles, System_Xml::System::Xml::Schema::XmlSchema* parentSchema);
		static System_Xml::System::Xml::Schema::XmlSchemaParticle* CloneParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, System_Xml::System::Xml::Schema::XmlSchema* parentSchema);
		static System_Xml::System::Xml::Schema::XmlSchemaForm GetResolvedElementForm(System_Xml::System::Xml::Schema::XmlSchema* parentSchema, System_Xml::System::Xml::Schema::XmlSchemaElement* element);
		static bool HasParticleRef(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle, System_Xml::System::Xml::Schema::XmlSchema* parentSchema);
		static bool HasAttributeQNameRef(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes);
	};
}

