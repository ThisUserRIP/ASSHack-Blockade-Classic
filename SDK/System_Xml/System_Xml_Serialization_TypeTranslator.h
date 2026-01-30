#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Serialization { struct TypeData; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::System::Xml::Serialization
{
	struct TypeTranslator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Hashtable* nameCache;
			mscorlib::System::Collections::Hashtable* primitiveTypes;
			mscorlib::System::Collections::Hashtable* primitiveArrayTypes;
			mscorlib::System::Collections::Hashtable* nullableTypes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static System_Xml::System::Xml::Serialization::TypeData* GetTypeData(mscorlib::System::Type* type);
		static System_Xml::System::Xml::Serialization::TypeData* GetTypeData(mscorlib::System::Type* runtimeType, mscorlib::System::String* xmlDataType, bool underlyingEnumType);
		static System_Xml::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(mscorlib::System::String* typeName);
		static System_Xml::System::Xml::Serialization::TypeData* GetPrimitiveTypeData(mscorlib::System::String* typeName, bool nullable);
		static System_Xml::System::Xml::Serialization::TypeData* FindPrimitiveTypeData(mscorlib::System::String* typeName);
		static mscorlib::System::String* GetArrayName(mscorlib::System::String* elemName);
		static void ParseArrayType(mscorlib::System::String* arrayType, mscorlib::System::String& type, mscorlib::System::String& ns, mscorlib::System::String& dimensions);
	};
}

