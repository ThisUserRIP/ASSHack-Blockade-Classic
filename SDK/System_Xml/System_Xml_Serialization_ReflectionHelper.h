#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Reflection_ParameterModifier.h"
namespace mscorlib::System::Reflection { struct ParameterModifier; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct XmlTypeMapping; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml::Serialization
{
	struct ReflectionHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* _clrTypes;
		mscorlib::System::Collections::Hashtable* _schemaTypes;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::Reflection::ParameterModifier>* empty_modifiers;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void RegisterSchemaType(System_Xml::System::Xml::Serialization::XmlTypeMapping* map, mscorlib::System::String* xmlType, mscorlib::System::String* ns);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* GetRegisteredSchemaType(mscorlib::System::String* xmlType, mscorlib::System::String* ns);
		void RegisterClrType(System_Xml::System::Xml::Serialization::XmlTypeMapping* map, mscorlib::System::Type* type, mscorlib::System::String* ns);
		System_Xml::System::Xml::Serialization::XmlTypeMapping* GetRegisteredClrType(mscorlib::System::Type* type, mscorlib::System::String* ns);
		static void CheckSerializableType(mscorlib::System::Type* type, bool allowPrivateConstructors);
		void _ctor();
		static void _cctor();
	};
}

