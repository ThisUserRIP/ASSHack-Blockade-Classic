#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_SortedList.h"
namespace mscorlib::System::Collections { struct SortedList; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };

namespace mscorlib::System::Collections
{
	struct SortedList_SortedListEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::SortedList* sortedList;
		mscorlib::System::Object* key;
		mscorlib::System::Object* value;
		int32_t index;
		int32_t startIndex;
		int32_t endIndex;
		int32_t version;
		bool current;
		int32_t getObjectRetType;
		void _ctor(mscorlib::System::Collections::SortedList* sortedList, int32_t index, int32_t count, int32_t getObjRetType);
		mscorlib::System::Object* Clone();
		mscorlib::System::Object* get_Key();
		bool MoveNext();
		mscorlib::System::Collections::DictionaryEntry get_Entry();
		mscorlib::System::Object* get_Current();
		mscorlib::System::Object* get_Value();
		void Reset();
	};
}

