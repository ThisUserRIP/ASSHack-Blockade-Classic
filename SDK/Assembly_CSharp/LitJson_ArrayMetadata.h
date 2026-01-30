#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::LitJson
{
	struct ArrayMetadata
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* element_type;
		bool is_array;
		bool is_list;
		mscorlib::System::Type* get_ElementType();
		void set_ElementType(mscorlib::System::Type* value);
		bool get_IsArray();
		void set_IsArray(bool value);
		bool get_IsList();
		void set_IsList(bool value);
	};
}

