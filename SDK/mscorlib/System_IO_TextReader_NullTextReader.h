#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_TextReader.h"
namespace mscorlib::System::IO { struct TextReader; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::IO
{
	struct TextReader_NullTextReader : mscorlib::System::IO::TextReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		int32_t Read(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		mscorlib::System::String* ReadLine();
	};
}

