#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Array; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace mscorlib::System::Collections
{
	struct Stack : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* _array;
		int32_t _size;
		int32_t _version;
		mscorlib::System::Object* _syncRoot;
		void _ctor();
		void _ctor(int32_t initialCapacity);
		int32_t get_Count();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		void Clear();
		mscorlib::System::Object* Clone();
		void CopyTo(mscorlib::System::Array* array, int32_t index);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		mscorlib::System::Object* Peek();
		mscorlib::System::Object* Pop();
		void Push(mscorlib::System::Object* obj);
	};
}

