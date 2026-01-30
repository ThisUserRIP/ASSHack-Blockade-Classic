#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System
{
	struct CharEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* str;
		int32_t index;
		wchar_t currentElement;
		void _ctor(mscorlib::System::String* str);
		mscorlib::System::Object* Clone();
		bool MoveNext();
		void Dispose();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		wchar_t get_Current();
		void Reset();
		void _ctor();
	};
}

