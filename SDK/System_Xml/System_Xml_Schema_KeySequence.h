#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct TypedObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace System_Xml::System::Xml::Schema
{
	struct KeySequence : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::System::Xml::Schema::TypedObject*>* ks;
		int32_t dim;
		int32_t hashcode;
		int32_t posline;
		int32_t poscol;
		void _ctor(int32_t dim, int32_t line, int32_t col);
		int32_t get_PosLine();
		int32_t get_PosCol();
		mscorlib::System::Object* get_Item(int32_t index);
		void set_Item(int32_t index, mscorlib::System::Object* value);
		bool IsQualified();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		mscorlib::System::String* ToString();
	};
}

