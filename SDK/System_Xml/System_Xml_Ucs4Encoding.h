#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Text_Encoding.h"
namespace System_Xml::System::Xml { struct Ucs4Decoder; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Text { struct Decoder; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Text { struct Encoder; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml
{
	struct Ucs4Encoding : mscorlib::System::Text::Encoding
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Ucs4Decoder* ucs4Decoder;
		mscorlib::System::String* get_WebName();
		mscorlib::System::Text::Decoder* GetDecoder();
		int32_t GetByteCount(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count);
		IL2CPP::Array<uint8_t>* GetBytes(mscorlib::System::String* s);
		int32_t GetBytes(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex);
		int32_t GetMaxByteCount(int32_t charCount);
		int32_t GetCharCount(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		int32_t GetChars(IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, IL2CPP::Array<wchar_t>* chars, int32_t charIndex);
		int32_t GetMaxCharCount(int32_t byteCount);
		int32_t get_CodePage();
		mscorlib::System::Text::Encoder* GetEncoder();
		static mscorlib::System::Text::Encoding* get_UCS4_Littleendian();
		static mscorlib::System::Text::Encoding* get_UCS4_Bigendian();
		static mscorlib::System::Text::Encoding* get_UCS4_2143();
		static mscorlib::System::Text::Encoding* get_UCS4_3412();
		void _ctor();
	};
}

