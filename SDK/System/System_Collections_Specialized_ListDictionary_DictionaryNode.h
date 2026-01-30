#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Specialized_ListDictionary.h"
namespace System::System::Collections::Specialized { struct ListDictionary; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Collections::Specialized
{
	struct ListDictionary_DictionaryNode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* key;
		mscorlib::System::Object* value;
		System::Collections::Specialized::ListDictionary_DictionaryNode* next;
		void _ctor();
	};
}

