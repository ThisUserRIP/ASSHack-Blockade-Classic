#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Resources_ResourceTypeCode.h"

namespace mscorlib::System::Resources
{
	struct ResourceLocator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* _value;
		int32_t _dataPos;
		void _ctor(int32_t dataPos, mscorlib::System::Object* value);
		int32_t get_DataPosition();
		mscorlib::System::Object* get_Value();
		void set_Value(mscorlib::System::Object* value);
		static bool CanCache(mscorlib::System::Resources::ResourceTypeCode value);
	};
}

