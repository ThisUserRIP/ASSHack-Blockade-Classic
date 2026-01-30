#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Serialization
{
	struct XmlCustomFormatter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* allTimeFormats;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* FromEnum(int64_t value, IL2CPP::Array<mscorlib::System::String*>* values, IL2CPP::Array<int64_t>* ids, mscorlib::System::String* typeName);
		static mscorlib::System::String* FromXmlName(mscorlib::System::String* name);
		static mscorlib::System::String* FromXmlNCName(mscorlib::System::String* ncName);
		static mscorlib::System::String* ToXmlString(System_Xml::System::Xml::Serialization::TypeData* type, mscorlib::System::Object* value);
		static mscorlib::System::Object* FromXmlString(System_Xml::System::Xml::Serialization::TypeData* type, mscorlib::System::String* value);
		static void _cctor();
	};
}

