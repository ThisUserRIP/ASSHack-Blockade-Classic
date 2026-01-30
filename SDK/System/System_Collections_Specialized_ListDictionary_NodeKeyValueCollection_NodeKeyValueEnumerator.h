#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Specialized_ListDictionary_NodeKeyValueCollection.h"
namespace System::System::Collections::Specialized { struct ListDictionary_NodeKeyValueCollection; };
namespace System::System::Collections::Specialized { struct ListDictionary; };
namespace System::System::Collections::Specialized { struct ListDictionary_DictionaryNode; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace System::System::Collections::Specialized
{
	struct ListDictionary_NodeKeyValueCollection_NodeKeyValueEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Collections::Specialized::ListDictionary* list;
		System::Collections::Specialized::ListDictionary_DictionaryNode* current;
		int32_t version;
		bool isKeys;
		bool start;
		void _ctor(System::Collections::Specialized::ListDictionary* list, bool isKeys);
		mscorlib::System::Object* get_Current();
		bool MoveNext();
		void Reset();
	};
}

