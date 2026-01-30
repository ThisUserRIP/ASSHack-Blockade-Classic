#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Queue.h"
namespace mscorlib::System::Collections { struct Queue; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Collections
{
	struct Queue_QueueEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Queue* _q;
		int32_t _index;
		int32_t _version;
		mscorlib::System::Object* currentElement;
		void _ctor(mscorlib::System::Collections::Queue* q);
		mscorlib::System::Object* Clone();
		bool MoveNext();
		mscorlib::System::Object* get_Current();
		void Reset();
	};
}

