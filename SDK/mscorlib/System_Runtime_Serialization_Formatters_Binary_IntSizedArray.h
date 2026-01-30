#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct IntSizedArray : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* objects;
		IL2CPP::Array<int32_t>* negObjects;
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* sizedArray);
		mscorlib::System::Object* Clone();
		int32_t get_Item(int32_t index);
		void set_Item(int32_t index, int32_t value);
		void IncreaseCapacity(int32_t index);
	};
}

