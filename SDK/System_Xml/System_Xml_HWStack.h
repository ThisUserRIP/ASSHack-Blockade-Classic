#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct HWStack : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* stack;
		int32_t growthRate;
		int32_t used;
		int32_t size;
		int32_t limit;
		void _ctor(int32_t GrowthRate);
		void _ctor(int32_t GrowthRate, int32_t limit);
		mscorlib::System::Object* Push();
		mscorlib::System::Object* Pop();
		mscorlib::System::Object* Peek();
		void AddToTop(mscorlib::System::Object* o);
		mscorlib::System::Object* get_Item(int32_t index);
		void set_Item(int32_t index, mscorlib::System::Object* value);
		int32_t get_Length();
		void _ctor(IL2CPP::Array<mscorlib::System::Object*>* stack, int32_t growthRate, int32_t used, int32_t size);
		mscorlib::System::Object* Clone();
	};
}

