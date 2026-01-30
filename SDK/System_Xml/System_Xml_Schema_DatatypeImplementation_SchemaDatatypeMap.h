#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_DatatypeImplementation.h"
namespace System_Xml::System::Xml::Schema { struct DatatypeImplementation; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System_Xml::System::Xml::Schema
{
	struct DatatypeImplementation_SchemaDatatypeMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		System_Xml::System::Xml::Schema::DatatypeImplementation* type;
		int32_t parentIndex;
		void _ctor(mscorlib::System::String* name, System_Xml::System::Xml::Schema::DatatypeImplementation* type);
		void _ctor(mscorlib::System::String* name, System_Xml::System::Xml::Schema::DatatypeImplementation* type, int32_t parentIndex);
		mscorlib::System::String* get_Name();
		int32_t get_ParentIndex();
		int32_t CompareTo(mscorlib::System::Object* obj);
	};
}

