#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_ListDictionaryInternal.h"
namespace mscorlib::System::Collections { struct ListDictionaryInternal; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Collections
{
	struct ListDictionaryInternal_DictionaryNode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* key;
		mscorlib::System::Object* value;
		mscorlib::System::Collections::ListDictionaryInternal_DictionaryNode* next;
		void _ctor();
	};
}

