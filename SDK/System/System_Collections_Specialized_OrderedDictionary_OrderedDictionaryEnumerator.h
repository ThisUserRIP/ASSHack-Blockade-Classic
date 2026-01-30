#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Collections_Specialized_OrderedDictionary.h"
namespace System::System::Collections::Specialized { struct OrderedDictionary; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Collections::Specialized
{
	struct OrderedDictionary_OrderedDictionaryEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _objectReturnType;
		mscorlib::System::Collections::IEnumerator* arrayEnumerator;
		void _ctor(mscorlib::System::Collections::ArrayList* array, int32_t objectReturnType);
		mscorlib::System::Object* get_Current();
		mscorlib::System::Collections::DictionaryEntry get_Entry();
		mscorlib::System::Object* get_Key();
		mscorlib::System::Object* get_Value();
		bool MoveNext();
		void Reset();
	};
}

