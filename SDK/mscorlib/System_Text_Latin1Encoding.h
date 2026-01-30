#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_EncodingNLS.h"
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Text { struct EncoderNLS; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Text { struct DecoderNLS; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Text_NormalizationForm.h"

namespace mscorlib::System::Text
{
	struct Latin1Encoding : mscorlib::System::Text::EncodingNLS
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* arrayCharBestFit;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void System_Runtime_Serialization_ISerializable_GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		int32_t GetByteCount(wchar_t* chars, int32_t charCount, mscorlib::System::Text::EncoderNLS* encoder);
		int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, mscorlib::System::Text::EncoderNLS* encoder);
		int32_t GetCharCount(uint8_t* bytes, int32_t count, mscorlib::System::Text::DecoderNLS* decoder);
		int32_t GetChars(uint8_t* bytes, int32_t byteCount, wchar_t* chars, int32_t charCount, mscorlib::System::Text::DecoderNLS* decoder);
		int32_t GetMaxByteCount(int32_t charCount);
		int32_t GetMaxCharCount(int32_t byteCount);
		bool get_IsSingleByte();
		bool IsAlwaysNormalized(mscorlib::System::Text::NormalizationForm form);
		IL2CPP::Array<wchar_t>* GetBestFitUnicodeToBytesData();
		static void _cctor();
	};
}

