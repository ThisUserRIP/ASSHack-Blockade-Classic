#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_Encoder.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Text
{
	struct EncoderNLS : mscorlib::System::Text::Encoder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t charLeftOver;
		mscorlib::System::Text::Encoding* m_encoding;
		bool m_mustFlush;
		bool m_throwOnOverflow;
		int32_t m_charsUsed;
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::Text::Encoding* encoding);
		void _ctor();
		void Reset();
		int32_t GetByteCount(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count, bool flush);
		int32_t GetByteCount(wchar_t* chars, int32_t count, bool flush);
		int32_t GetBytes(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, bool flush);
		int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush);
		void Convert(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed);
		void Convert(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush, int32_t& charsUsed, int32_t& bytesUsed, bool& completed);
		mscorlib::System::Text::Encoding* get_Encoding();
		bool get_MustFlush();
		bool get_HasState();
		void ClearMustFlush();
	};
}

