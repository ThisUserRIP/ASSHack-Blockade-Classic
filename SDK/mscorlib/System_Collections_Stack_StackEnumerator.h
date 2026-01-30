#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Stack.h"
namespace mscorlib::System::Collections { struct Stack; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Collections
{
	struct Stack_StackEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Stack* _stack;
		int32_t _index;
		int32_t _version;
		mscorlib::System::Object* currentElement;
		void _ctor(mscorlib::System::Collections::Stack* stack);
		mscorlib::System::Object* Clone();
		bool MoveNext();
		mscorlib::System::Object* get_Current();
		void Reset();
	};
}

