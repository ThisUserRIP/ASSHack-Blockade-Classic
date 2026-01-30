#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_TermInfoStrings.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::System
{
	struct ByteMatcher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* map;
		mscorlib::System::Collections::Hashtable* starts;
		void AddMapping(mscorlib::System::TermInfoStrings key, IL2CPP::Array<uint8_t>* val);
		void Sort();
		bool StartsWith(int32_t c);
		mscorlib::System::TermInfoStrings Match(IL2CPP::Array<wchar_t>* buffer, int32_t offset, int32_t length, int32_t& used);
		void _ctor();
	};
}

