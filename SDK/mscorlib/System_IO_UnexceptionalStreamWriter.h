#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_StreamWriter.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::IO
{
	struct UnexceptionalStreamWriter : mscorlib::System::IO::StreamWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Text::Encoding* encoding);
		void Flush();
		void Write(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void Write(wchar_t value);
		void Write(IL2CPP::Array<wchar_t>* value);
		void Write(mscorlib::System::String* value);
	};
}

