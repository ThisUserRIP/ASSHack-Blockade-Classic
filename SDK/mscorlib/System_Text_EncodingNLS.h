#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_Encoding.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Text { struct Decoder; };
namespace mscorlib::System::Text { struct Encoder; };

namespace mscorlib::System::Text
{
	struct EncodingNLS : mscorlib::System::Text::Encoding
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(int32_t codePage);
		int32_t GetByteCount(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count);
		int32_t GetByteCount(mscorlib::System::String* s);
		int32_t GetByteCount(wchar_t* chars, int32_t count);
		int32_t GetBytes(mscorlib::System::String* s, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex);
		int32_t GetBytes(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex);
		int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount);
		int32_t GetCharCount(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		int32_t GetCharCount(uint8_t* bytes, int32_t count);
		int32_t GetChars(IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, IL2CPP::Array<wchar_t>* chars, int32_t charIndex);
		int32_t GetChars(uint8_t* bytes, int32_t byteCount, wchar_t* chars, int32_t charCount);
		mscorlib::System::String* GetString(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		mscorlib::System::Text::Decoder* GetDecoder();
		mscorlib::System::Text::Encoder* GetEncoder();
	};
}

