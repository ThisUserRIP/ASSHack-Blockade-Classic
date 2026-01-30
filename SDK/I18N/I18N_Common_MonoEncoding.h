#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Text_Encoding.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct EncoderFallbackBuffer; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Char.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct String; };

namespace I18N::I18N::Common
{
	struct MonoEncoding : mscorlib::System::Text::Encoding
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t win_code_page;
		void _ctor(int32_t codePage);
		void _ctor(int32_t codePage, int32_t windowsCodePage);
		int32_t get_WindowsCodePage();
		void HandleFallback(mscorlib::System::Text::EncoderFallbackBuffer& buffer, wchar_t* chars, int32_t& charIndex, int32_t& charCount, uint8_t* bytes, int32_t& byteIndex, int32_t& byteCount);
		int32_t GetByteCount(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count);
		int32_t GetBytes(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex);
		int32_t GetBytes(mscorlib::System::String* s, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex);
		int32_t GetByteCount(wchar_t* chars, int32_t count);
		int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount);
		int32_t GetByteCountImpl(wchar_t* chars, int32_t charCount);
		int32_t GetBytesImpl(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount);
	};
}

