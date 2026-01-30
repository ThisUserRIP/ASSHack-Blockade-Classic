#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_TextWriter.h"
namespace mscorlib::System::Text { struct UnicodeEncoding; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct IFormatProvider; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::IO
{
	struct StringWriter : mscorlib::System::IO::TextWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Text::StringBuilder* _sb;
		bool _isOpen;
		struct StaticFields
		{
			mscorlib::System::Text::UnicodeEncoding* m_encoding;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Text::StringBuilder* sb);
		void _ctor(mscorlib::System::Text::StringBuilder* sb, mscorlib::System::IFormatProvider* formatProvider);
		void Close();
		void Dispose(bool disposing);
		mscorlib::System::Text::Encoding* get_Encoding();
		void Write(wchar_t value);
		void Write(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void Write(mscorlib::System::String* value);
		mscorlib::System::String* ToString();
	};
}

