#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Remoting_Messaging_MessageDictionary.h"
namespace mscorlib::System::Runtime::Remoting::Messaging { struct MessageDictionary; };
namespace mscorlib::System::Collections { struct IDictionaryEnumerator; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct MessageDictionary_DictionaryEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Messaging::MessageDictionary* _methodDictionary;
		mscorlib::System::Collections::IDictionaryEnumerator* _hashtableEnum;
		int32_t _posMethod;
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary);
		mscorlib::System::Object* get_Current();
		bool MoveNext();
		void Reset();
		mscorlib::System::Collections::DictionaryEntry get_Entry();
		mscorlib::System::Object* get_Key();
		mscorlib::System::Object* get_Value();
	};
}

