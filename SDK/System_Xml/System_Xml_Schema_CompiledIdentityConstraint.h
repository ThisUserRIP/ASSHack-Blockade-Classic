#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "System_Xml_Schema_CompiledIdentityConstraint_ConstraintRole.h"
namespace System_Xml::System::Xml::Schema { struct Asttree; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaIdentityConstraint; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };

namespace System_Xml::System::Xml::Schema
{
	struct CompiledIdentityConstraint : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* name;
		System_Xml::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole role;
		System_Xml::System::Xml::Schema::Asttree* selector;
		IL2CPP::Array<System_Xml::System::Xml::Schema::Asttree*>* fields;
		System_Xml::System::Xml::XmlQualifiedName* refer;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::CompiledIdentityConstraint* Empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System_Xml::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole get_Role();
		System_Xml::System::Xml::Schema::Asttree* get_Selector();
		IL2CPP::Array<System_Xml::System::Xml::Schema::Asttree*>* get_Fields();
		void _ctor();
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint, System_Xml::System::Xml::XmlNamespaceManager* nsmgr);
		static void _cctor();
	};
}

