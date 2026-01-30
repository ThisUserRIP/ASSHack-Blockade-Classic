#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Text_Encoding.h"
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct EncoderNLS; };
namespace mscorlib::System::Text { struct EncoderFallbackBuffer; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
#include "System_Char.h"

namespace mscorlib::System::Text
{
	struct Encoding_EncodingByteBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t* bytes;
		uint8_t* byteStart;
		uint8_t* byteEnd;
		wchar_t* chars;
		wchar_t* charStart;
		wchar_t* charEnd;
		int32_t byteCountResult;
		mscorlib::System::Text::Encoding* enc;
		mscorlib::System::Text::EncoderNLS* encoder;
		mscorlib::System::Text::EncoderFallbackBuffer* fallbackBuffer;
		void _ctor(mscorlib::System::Text::Encoding* inEncoding, mscorlib::System::Text::EncoderNLS* inEncoder, uint8_t* inByteStart, int32_t inByteCount, wchar_t* inCharStart, int32_t inCharCount);
		bool AddByte(uint8_t b, int32_t moreBytesExpected);
		bool AddByte(uint8_t b1);
		bool AddByte(uint8_t b1, uint8_t b2);
		bool AddByte(uint8_t b1, uint8_t b2, int32_t moreBytesExpected);
		void MovePrevious(bool bThrow);
		bool get_MoreData();
		wchar_t GetNextChar();
		int32_t get_CharsUsed();
		int32_t get_Count();
	};
}

