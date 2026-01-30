#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_TextReader.h"
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::System::IO
{
	struct StringReader : mscorlib::System::IO::TextReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _s;
		int32_t _pos;
		int32_t _length;
		void _ctor(mscorlib::System::String* s);
		void Close();
		void Dispose(bool disposing);
		int32_t Peek();
		int32_t Read();
		int32_t Read(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		mscorlib::System::String* ReadToEnd();
		mscorlib::System::String* ReadLine();
	};
}

