#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Serialization::Formatters::Binary
{
	struct SerStack : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* objects;
		mscorlib::System::String* stackId;
		int32_t top;
		void _ctor(mscorlib::System::String* stackId);
		void Push(mscorlib::System::Object* obj);
		mscorlib::System::Object* Pop();
		void IncreaseCapacity();
		mscorlib::System::Object* Peek();
		mscorlib::System::Object* PeekPeek();
		bool IsEmpty();
	};
}

