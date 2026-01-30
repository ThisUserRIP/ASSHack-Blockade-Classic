#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Text { struct EncoderFallback; };
namespace mscorlib::System::Text { struct EncoderFallbackBuffer; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Text
{
	struct Encoder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Text::EncoderFallback* m_fallback;
		mscorlib::System::Text::EncoderFallbackBuffer* m_fallbackBuffer;
		void SerializeEncoder(mscorlib::System::Runtime::Serialization::SerializationInfo* info);
		void _ctor();
		mscorlib::System::Text::EncoderFallback* get_Fallback();
		mscorlib::System::Text::EncoderFallbackBuffer* get_FallbackBuffer();
		bool get_InternalHasFallbackBuffer();
		void Reset();
		int32_t GetByteCount(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count, bool flush);
		int32_t GetByteCount(wchar_t* chars, int32_t count, bool flush);
		int32_t GetBytes(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, bool flush);
		int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush);
		void Convert(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed);
		void Convert(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed);
	};
}

