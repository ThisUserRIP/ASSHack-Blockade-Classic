#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct DataObjectFieldAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _primaryKey;
		bool _isIdentity;
		bool _isNullable;
		int32_t _length;
		void _ctor(bool primaryKey);
		void _ctor(bool primaryKey, bool isIdentity);
		void _ctor(bool primaryKey, bool isIdentity, bool isNullable);
		void _ctor(bool primaryKey, bool isIdentity, bool isNullable, int32_t length);
		bool get_IsIdentity();
		bool get_IsNullable();
		int32_t get_Length();
		bool get_PrimaryKey();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

