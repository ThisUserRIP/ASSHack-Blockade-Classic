#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Security_Util_Tokenizer.h"
namespace mscorlib::System::Security::Util { struct Tokenizer; };
namespace mscorlib::System::IO { struct StreamReader; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Security::Util
{
	struct Tokenizer_StreamTokenReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::StreamReader* _in;
		int32_t _numCharRead;
		void _ctor(mscorlib::System::IO::StreamReader* input);
		int32_t Read();
		int32_t get_NumCharEncountered();
	};
}

