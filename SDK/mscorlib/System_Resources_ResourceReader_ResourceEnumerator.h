#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Resources_ResourceReader.h"
namespace mscorlib::System::Resources { struct ResourceReader; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };

namespace mscorlib::System::Resources
{
	struct ResourceReader_ResourceEnumerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Resources::ResourceReader* _reader;
		bool _currentIsValid;
		int32_t _currentName;
		int32_t _dataPosition;
		void _ctor(mscorlib::System::Resources::ResourceReader* reader);
		bool MoveNext();
		mscorlib::System::Object* get_Key();
		mscorlib::System::Object* get_Current();
		int32_t get_DataPosition();
		mscorlib::System::Collections::DictionaryEntry get_Entry();
		mscorlib::System::Object* get_Value();
		void Reset();
	};
}

