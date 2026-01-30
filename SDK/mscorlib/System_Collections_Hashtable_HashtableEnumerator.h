#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Hashtable.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };

namespace mscorlib::System::Collections
{
	struct Hashtable_HashtableEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* hashtable;
		int32_t bucket;
		int32_t version;
		bool current;
		int32_t getObjectRetType;
		mscorlib::System::Object* currentKey;
		mscorlib::System::Object* currentValue;
		void _ctor(mscorlib::System::Collections::Hashtable* hashtable, int32_t getObjRetType);
		mscorlib::System::Object* Clone();
		mscorlib::System::Object* get_Key();
		bool MoveNext();
		mscorlib::System::Collections::DictionaryEntry get_Entry();
		mscorlib::System::Object* get_Current();
		mscorlib::System::Object* get_Value();
		void Reset();
	};
}

