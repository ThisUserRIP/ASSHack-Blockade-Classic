#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Text_Encoding.h"
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct DecoderNLS; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Text { struct DecoderFallbackBuffer; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Char.h"
#include "System_Byte.h"

namespace mscorlib::System::Text
{
	struct Encoding_EncodingCharBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t* chars;
		wchar_t* charStart;
		wchar_t* charEnd;
		int32_t charCountResult;
		mscorlib::System::Text::Encoding* enc;
		mscorlib::System::Text::DecoderNLS* decoder;
		uint8_t* byteStart;
		uint8_t* byteEnd;
		uint8_t* bytes;
		mscorlib::System::Text::DecoderFallbackBuffer* fallbackBuffer;
		void _ctor(mscorlib::System::Text::Encoding* enc, mscorlib::System::Text::DecoderNLS* decoder, wchar_t* charStart, int32_t charCount, uint8_t* byteStart, int32_t byteCount);
		bool AddChar(wchar_t ch, int32_t numBytes);
		bool AddChar(wchar_t ch);
		void AdjustBytes(int32_t count);
		bool get_MoreData();
		uint8_t GetNextByte();
		int32_t get_BytesUsed();
		bool Fallback(uint8_t fallbackByte);
		bool Fallback(IL2CPP::Array<uint8_t>* byteBuffer);
		int32_t get_Count();
	};
}

