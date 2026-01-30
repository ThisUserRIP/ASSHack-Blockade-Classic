#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_EmptyReadOnlyDictionaryInternal.h"
namespace mscorlib::System::Collections { struct EmptyReadOnlyDictionaryInternal; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };

namespace mscorlib::System::Collections
{
	struct EmptyReadOnlyDictionaryInternal_NodeEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		bool MoveNext();
		mscorlib::System::Object* get_Current();
		void Reset();
		mscorlib::System::Object* get_Key();
		mscorlib::System::Object* get_Value();
		mscorlib::System::Collections::DictionaryEntry get_Entry();
	};
}

