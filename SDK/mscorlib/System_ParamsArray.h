#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System
{
	struct ParamsArray
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* arg0;
		mscorlib::System::Object* arg1;
		mscorlib::System::Object* arg2;
		IL2CPP::Array<mscorlib::System::Object*>* args;
		void _ctor(mscorlib::System::Object* arg0);
		void _ctor(mscorlib::System::Object* arg0, mscorlib::System::Object* arg1);
		void _ctor(mscorlib::System::Object* arg0, mscorlib::System::Object* arg1, mscorlib::System::Object* arg2);
		void _ctor(IL2CPP::Array<mscorlib::System::Object*>* args);
		int32_t get_Length();
		mscorlib::System::Object* get_Item(int32_t index);
		mscorlib::System::Object* GetAtSlow(int32_t index);
		static void _cctor();
	};
}

