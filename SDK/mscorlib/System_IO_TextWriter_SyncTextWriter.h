#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_TextWriter.h"
namespace mscorlib::System::IO { struct TextWriter; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System { struct IFormatProvider; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::IO
{
	struct TextWriter_SyncTextWriter : mscorlib::System::IO::TextWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::TextWriter* _out;
		void _ctor(mscorlib::System::IO::TextWriter* t);
		mscorlib::System::Text::Encoding* get_Encoding();
		mscorlib::System::IFormatProvider* get_FormatProvider();
		void Close();
		void Dispose(bool disposing);
		void Flush();
		void Write(wchar_t value);
		void Write(IL2CPP::Array<wchar_t>* buffer);
		void Write(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void Write(mscorlib::System::String* value);
		void WriteLine();
		void WriteLine(wchar_t value);
		void WriteLine(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void WriteLine(mscorlib::System::String* value);
		void WriteLine(mscorlib::System::Object* value);
		void WriteLine(mscorlib::System::String* format, mscorlib::System::Object* arg0);
		void WriteLine(mscorlib::System::String* format, mscorlib::System::Object* arg0, mscorlib::System::Object* arg1);
	};
}

