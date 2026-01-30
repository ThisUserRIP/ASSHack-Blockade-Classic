#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct CodePageDataItem; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Text { struct EncoderFallback; };
namespace mscorlib::System::Text { struct DecoderFallback; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System::Text { struct EncoderNLS; };
namespace mscorlib::System::Text { struct DecoderNLS; };
#include "System_Text_NormalizationForm.h"
namespace mscorlib::System::Text { struct Decoder; };
namespace mscorlib::System::Text { struct Encoder; };

namespace mscorlib::System::Text
{
	struct Encoding : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_codePage;
		mscorlib::System::Globalization::CodePageDataItem* dataItem;
		bool m_deserializedFromEverett;
		bool m_isReadOnly;
		mscorlib::System::Text::EncoderFallback* encoderFallback;
		mscorlib::System::Text::DecoderFallback* decoderFallback;
		struct StaticFields
		{
			mscorlib::System::Text::Encoding* defaultEncoding;
			mscorlib::System::Text::Encoding* unicodeEncoding;
			mscorlib::System::Text::Encoding* bigEndianUnicode;
			mscorlib::System::Text::Encoding* utf7Encoding;
			mscorlib::System::Text::Encoding* utf8Encoding;
			mscorlib::System::Text::Encoding* utf32Encoding;
			mscorlib::System::Text::Encoding* asciiEncoding;
			mscorlib::System::Text::Encoding* latin1Encoding;
			mscorlib::System::Collections::Hashtable* encodings;
			int32_t MIMECONTF_MAILNEWS;
			int32_t MIMECONTF_BROWSER;
			int32_t MIMECONTF_SAVABLE_MAILNEWS;
			int32_t MIMECONTF_SAVABLE_BROWSER;
			int32_t CodePageDefault;
			int32_t CodePageNoOEM;
			int32_t CodePageNoMac;
			int32_t CodePageNoThread;
			int32_t CodePageNoSymbol;
			int32_t CodePageUnicode;
			int32_t CodePageBigEndian;
			int32_t CodePageWindows1252;
			int32_t CodePageMacGB2312;
			int32_t CodePageGB2312;
			int32_t CodePageMacKorean;
			int32_t CodePageDLLKorean;
			int32_t ISO2022JP;
			int32_t ISO2022JPESC;
			int32_t ISO2022JPSISO;
			int32_t ISOKorean;
			int32_t ISOSimplifiedCN;
			int32_t EUCJP;
			int32_t ChineseHZ;
			int32_t DuplicateEUCCN;
			int32_t EUCCN;
			int32_t EUCKR;
			int32_t CodePageASCII;
			int32_t ISO_8859_1;
			int32_t ISCIIAssemese;
			int32_t ISCIIBengali;
			int32_t ISCIIDevanagari;
			int32_t ISCIIGujarathi;
			int32_t ISCIIKannada;
			int32_t ISCIIMalayalam;
			int32_t ISCIIOriya;
			int32_t ISCIIPanjabi;
			int32_t ISCIITamil;
			int32_t ISCIITelugu;
			int32_t GB18030;
			int32_t ISO_8859_8I;
			int32_t ISO_8859_8_Visual;
			int32_t ENC50229;
			int32_t CodePageUTF7;
			int32_t CodePageUTF8;
			int32_t CodePageUTF32;
			int32_t CodePageUTF32BE;
			mscorlib::System::Object* s_InternalSyncObject;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(int32_t codePage);
		void SetDefaultFallbacks();
		void OnDeserializing();
		void OnDeserialized();
		void OnDeserializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnDeserialized(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void OnSerializing(mscorlib::System::Runtime::Serialization::StreamingContext ctx);
		void DeserializeEncoding(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void SerializeEncoding(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		static mscorlib::System::Object* get_InternalSyncObject();
		static mscorlib::System::Text::Encoding* GetEncoding(int32_t codepage);
		static mscorlib::System::Text::Encoding* GetEncoding(int32_t codepage, mscorlib::System::Text::EncoderFallback* encoderFallback, mscorlib::System::Text::DecoderFallback* decoderFallback);
		static mscorlib::System::Text::Encoding* GetEncoding(mscorlib::System::String* name);
		IL2CPP::Array<uint8_t>* GetPreamble();
		void GetDataItem();
		mscorlib::System::String* get_BodyName();
		mscorlib::System::String* get_EncodingName();
		mscorlib::System::String* get_HeaderName();
		mscorlib::System::String* get_WebName();
		int32_t get_WindowsCodePage();
		bool get_IsBrowserDisplay();
		bool get_IsBrowserSave();
		bool get_IsMailNewsDisplay();
		bool get_IsMailNewsSave();
		bool get_IsSingleByte();
		mscorlib::System::Text::EncoderFallback* get_EncoderFallback();
		void set_EncoderFallback(mscorlib::System::Text::EncoderFallback* value);
		mscorlib::System::Text::DecoderFallback* get_DecoderFallback();
		void set_DecoderFallback(mscorlib::System::Text::DecoderFallback* value);
		mscorlib::System::Object* Clone();
		bool get_IsReadOnly();
		static mscorlib::System::Text::Encoding* get_ASCII();
		static mscorlib::System::Text::Encoding* get_Latin1();
		int32_t GetByteCount(mscorlib::System::String* s);
		int32_t GetByteCount(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count);
		int32_t GetByteCount(wchar_t* chars, int32_t count);
		int32_t GetByteCount(wchar_t* chars, int32_t count, mscorlib::System::Text::EncoderNLS* encoder);
		IL2CPP::Array<uint8_t>* GetBytes(IL2CPP::Array<wchar_t>* chars);
		IL2CPP::Array<uint8_t>* GetBytes(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count);
		int32_t GetBytes(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex);
		IL2CPP::Array<uint8_t>* GetBytes(mscorlib::System::String* s);
		int32_t GetBytes(mscorlib::System::String* s, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex);
		int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, mscorlib::System::Text::EncoderNLS* encoder);
		int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount);
		int32_t GetCharCount(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		int32_t GetCharCount(uint8_t* bytes, int32_t count);
		int32_t GetCharCount(uint8_t* bytes, int32_t count, mscorlib::System::Text::DecoderNLS* decoder);
		IL2CPP::Array<wchar_t>* GetChars(IL2CPP::Array<uint8_t>* bytes);
		IL2CPP::Array<wchar_t>* GetChars(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		int32_t GetChars(IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, IL2CPP::Array<wchar_t>* chars, int32_t charIndex);
		int32_t GetChars(uint8_t* bytes, int32_t byteCount, wchar_t* chars, int32_t charCount);
		int32_t GetChars(uint8_t* bytes, int32_t byteCount, wchar_t* chars, int32_t charCount, mscorlib::System::Text::DecoderNLS* decoder);
		int32_t get_CodePage();
		bool IsAlwaysNormalized(mscorlib::System::Text::NormalizationForm form);
		mscorlib::System::Text::Decoder* GetDecoder();
		static mscorlib::System::Text::Encoding* CreateDefaultEncoding();
		void setReadOnly(bool value);
		static mscorlib::System::Text::Encoding* get_Default();
		mscorlib::System::Text::Encoder* GetEncoder();
		int32_t GetMaxByteCount(int32_t charCount);
		int32_t GetMaxCharCount(int32_t byteCount);
		mscorlib::System::String* GetString(IL2CPP::Array<uint8_t>* bytes);
		mscorlib::System::String* GetString(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		static mscorlib::System::Text::Encoding* get_Unicode();
		static mscorlib::System::Text::Encoding* get_BigEndianUnicode();
		static mscorlib::System::Text::Encoding* get_UTF7();
		static mscorlib::System::Text::Encoding* get_UTF8();
		static mscorlib::System::Text::Encoding* get_UTF32();
		bool Equals(mscorlib::System::Object* value);
		int32_t GetHashCode();
		IL2CPP::Array<wchar_t>* GetBestFitUnicodeToBytesData();
		IL2CPP::Array<wchar_t>* GetBestFitBytesToUnicodeData();
		void ThrowBytesOverflow();
		void ThrowBytesOverflow(mscorlib::System::Text::EncoderNLS* encoder, bool nothingEncoded);
		void ThrowCharsOverflow();
		void ThrowCharsOverflow(mscorlib::System::Text::DecoderNLS* decoder, bool nothingDecoded);
	};
}

