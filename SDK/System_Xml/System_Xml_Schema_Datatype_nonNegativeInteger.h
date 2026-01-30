#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_Datatype_integer.h"
namespace System_Xml::System::Xml::Schema { struct FacetsChecker; };
#include "System_Xml_Schema_XmlTypeCode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct Datatype_nonNegativeInteger : System_Xml::System::Xml::Schema::Datatype_integer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::FacetsChecker* numeric10FacetsChecker;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System_Xml::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		bool get_HasValueFacets();
		void _ctor();
		static void _cctor();
	};
}

