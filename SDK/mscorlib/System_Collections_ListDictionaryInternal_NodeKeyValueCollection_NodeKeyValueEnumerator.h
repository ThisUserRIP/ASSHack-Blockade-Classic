#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_ListDictionaryInternal_NodeKeyValueCollection.h"
namespace mscorlib::System::Collections { struct ListDictionaryInternal_NodeKeyValueCollection; };
namespace mscorlib::System::Collections { struct ListDictionaryInternal; };
namespace mscorlib::System::Collections { struct ListDictionaryInternal_DictionaryNode; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Collections
{
	struct ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ListDictionaryInternal* list;
		mscorlib::System::Collections::ListDictionaryInternal_DictionaryNode* current;
		int32_t version;
		bool isKeys;
		bool start;
		void _ctor(mscorlib::System::Collections::ListDictionaryInternal* list, bool isKeys);
		mscorlib::System::Object* get_Current();
		bool MoveNext();
		void Reset();
	};
}

