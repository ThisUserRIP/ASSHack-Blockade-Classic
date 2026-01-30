#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Hashtable.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Array; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Collections
{
	struct Hashtable_KeyCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* _hashtable;
		void _ctor(mscorlib::System::Collections::Hashtable* hashtable);
		void CopyTo(mscorlib::System::Array* array, int32_t arrayIndex);
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_SyncRoot();
		int32_t get_Count();
	};
}

