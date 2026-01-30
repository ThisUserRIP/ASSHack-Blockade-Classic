#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct SizedArray : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* objects;
		IL2CPP::Array<mscorlib::System::Object*>* negObjects;
		void _ctor();
		void _ctor(int32_t length);
		void _ctor(mscorlib::System::Runtime::Serialization::Formatters::Binary::SizedArray* sizedArray);
		mscorlib::System::Object* Clone();
		mscorlib::System::Object* get_Item(int32_t index);
		void set_Item(int32_t index, mscorlib::System::Object* value);
		void IncreaseCapacity(int32_t index);
	};
}

