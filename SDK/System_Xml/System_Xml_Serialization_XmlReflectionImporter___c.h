#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Serialization_XmlReflectionImporter.h"
namespace System_Xml::System::Xml::Serialization { struct XmlReflectionImporter; };
namespace System_Xml::System::Xml::Serialization { struct XmlReflectionMember; };
namespace mscorlib::System { template <typename T> struct Comparison_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlReflectionImporter___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System_Xml::System::Xml::Serialization::XmlReflectionImporter___c* __9;
			mscorlib::System::Comparison_1<System_Xml::System::Xml::Serialization::XmlReflectionMember>* __9__28_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		int32_t _ImportClassMapping_b__28_0(System_Xml::System::Xml::Serialization::XmlReflectionMember* m1, System_Xml::System::Xml::Serialization::XmlReflectionMember* m2);
	};
}

