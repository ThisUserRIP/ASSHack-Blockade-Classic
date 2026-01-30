#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_ListDictionaryInternal.h"
namespace mscorlib::System::Collections { struct ListDictionaryInternal; };
namespace mscorlib::System::Collections { struct ListDictionaryInternal_DictionaryNode; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };

namespace mscorlib::System::Collections
{
	struct ListDictionaryInternal_NodeEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ListDictionaryInternal* list;
		mscorlib::System::Collections::ListDictionaryInternal_DictionaryNode* current;
		int32_t version;
		bool start;
		void _ctor(mscorlib::System::Collections::ListDictionaryInternal* list);
		mscorlib::System::Object* get_Current();
		mscorlib::System::Collections::DictionaryEntry get_Entry();
		mscorlib::System::Object* get_Key();
		mscorlib::System::Object* get_Value();
		bool MoveNext();
		void Reset();
	};
}

