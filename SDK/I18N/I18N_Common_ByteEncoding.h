#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "I18N_Common_MonoEncoding.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Text_NormalizationForm.h"

namespace I18N::I18N::Common
{
	struct ByteEncoding : I18N::Common::MonoEncoding
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<wchar_t>* toChars;
		mscorlib::System::String* encodingName;
		mscorlib::System::String* bodyName;
		mscorlib::System::String* headerName;
		mscorlib::System::String* webName;
		bool isBrowserDisplay;
		bool isBrowserSave;
		bool isMailNewsDisplay;
		bool isMailNewsSave;
		int32_t windowsCodePage;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* isNormalized;
			IL2CPP::Array<uint8_t>* isNormalizedComputed;
			IL2CPP::Array<uint8_t>* normalization_bytes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t codePage, IL2CPP::Array<wchar_t>* toChars, mscorlib::System::String* encodingName, mscorlib::System::String* bodyName, mscorlib::System::String* headerName, mscorlib::System::String* webName, bool isBrowserDisplay, bool isBrowserSave, bool isMailNewsDisplay, bool isMailNewsSave, int32_t windowsCodePage);
		bool IsAlwaysNormalized(mscorlib::System::Text::NormalizationForm form);
		bool get_IsSingleByte();
		int32_t GetByteCount(mscorlib::System::String* s);
		int32_t GetByteCountImpl(wchar_t* chars, int32_t count);
		void ToBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount);
		void ToBytes(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex);
		int32_t GetBytesImpl(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount);
		int32_t GetCharCount(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		int32_t GetChars(IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, IL2CPP::Array<wchar_t>* chars, int32_t charIndex);
		int32_t GetMaxByteCount(int32_t charCount);
		int32_t GetMaxCharCount(int32_t byteCount);
		mscorlib::System::String* GetString(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		mscorlib::System::String* GetString(IL2CPP::Array<uint8_t>* bytes);
		mscorlib::System::String* get_BodyName();
		mscorlib::System::String* get_EncodingName();
		mscorlib::System::String* get_HeaderName();
		bool get_IsBrowserDisplay();
		bool get_IsBrowserSave();
		bool get_IsMailNewsDisplay();
		bool get_IsMailNewsSave();
		mscorlib::System::String* get_WebName();
		int32_t get_WindowsCodePage();
	};
}

