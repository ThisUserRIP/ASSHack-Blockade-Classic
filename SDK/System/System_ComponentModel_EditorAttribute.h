#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct EditorAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* baseTypeName;
		mscorlib::System::String* typeName;
		mscorlib::System::String* typeId;
		void _ctor();
		void _ctor(mscorlib::System::String* typeName, mscorlib::System::String* baseTypeName);
		void _ctor(mscorlib::System::String* typeName, mscorlib::System::Type* baseType);
		void _ctor(mscorlib::System::Type* type, mscorlib::System::Type* baseType);
		mscorlib::System::String* get_EditorBaseTypeName();
		mscorlib::System::String* get_EditorTypeName();
		mscorlib::System::Object* get_TypeId();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

