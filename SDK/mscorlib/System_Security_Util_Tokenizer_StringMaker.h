#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Security_Util_Tokenizer.h"
namespace mscorlib::System::Security::Util { struct Tokenizer; };
namespace mscorlib::System { struct String; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Util
{
	struct Tokenizer_StringMaker : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::String*>* aStrings;
		uint32_t cStringsMax;
		uint32_t cStringsUsed;
		mscorlib::System::Text::StringBuilder* _outStringBuilder;
		IL2CPP::Array<wchar_t>* _outChars;
		int32_t _outIndex;
		static uint32_t HashString(mscorlib::System::String* str);
		static uint32_t HashCharArray(IL2CPP::Array<wchar_t>* a, int32_t l);
		void _ctor();
		bool CompareStringAndChars(mscorlib::System::String* str, IL2CPP::Array<wchar_t>* a, int32_t l);
		mscorlib::System::String* MakeString();
	};
}

