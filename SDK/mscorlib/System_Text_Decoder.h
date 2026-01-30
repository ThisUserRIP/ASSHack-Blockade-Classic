#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Text { struct DecoderFallback; };
namespace mscorlib::System::Text { struct DecoderFallbackBuffer; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };

namespace mscorlib::System::Text
{
	struct Decoder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Text::DecoderFallback* m_fallback;
		mscorlib::System::Text::DecoderFallbackBuffer* m_fallbackBuffer;
		void SerializeDecoder(mscorlib::System::Runtime::Serialization::SerializationInfo* info);
		void _ctor();
		mscorlib::System::Text::DecoderFallback* get_Fallback();
		mscorlib::System::Text::DecoderFallbackBuffer* get_FallbackBuffer();
		bool get_InternalHasFallbackBuffer();
		void Reset();
		int32_t GetCharCount(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		int32_t GetCharCount(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count, bool flush);
		int32_t GetCharCount(uint8_t* bytes, int32_t count, bool flush);
		int32_t GetChars(IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, IL2CPP::Array<wchar_t>* chars, int32_t charIndex);
		int32_t GetChars(IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, IL2CPP::Array<wchar_t>* chars, int32_t charIndex, bool flush);
		int32_t GetChars(uint8_t* bytes, int32_t byteCount, wchar_t* chars, int32_t charCount, bool flush);
		void Convert(IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, bool flush, int32_t& bytesUsed, int32_t& charsUsed, bool& completed);
		void Convert(uint8_t* bytes, int32_t byteCount, wchar_t* chars, int32_t charCount, bool flush, int32_t& bytesUsed, int32_t& charsUsed, bool& completed);
	};
}

