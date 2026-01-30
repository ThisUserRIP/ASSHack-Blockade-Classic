#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_StreamReader.h"
namespace mscorlib::System { struct TermInfoDriver; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::IO
{
	struct CStreamReader : mscorlib::System::IO::StreamReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TermInfoDriver* driver;
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Text::Encoding* encoding);
		int32_t Peek();
		int32_t Read();
		int32_t Read(IL2CPP::Array<wchar_t>* dest, int32_t index, int32_t count);
		mscorlib::System::String* ReadLine();
		mscorlib::System::String* ReadToEnd();
	};
}

