#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\I18N\I18N_Common_MonoEncoding.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Byte.h"

namespace I18N_Other::I18N::Other
{
	struct ISCIIEncoding : I18N::I18N::Common::MonoEncoding
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t shift;
		mscorlib::System::String* encodingName;
		mscorlib::System::String* webName;
		void _ctor(int32_t codePage, int32_t shift, mscorlib::System::String* encodingName, mscorlib::System::String* webName);
		int32_t GetByteCount(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count);
		int32_t GetByteCount(mscorlib::System::String* s);
		int32_t GetByteCountImpl(wchar_t* chars, int32_t count);
		int32_t GetBytesImpl(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount);
		int32_t GetCharCount(IL2CPP::Array<uint8_t>* bytes, int32_t index, int32_t count);
		int32_t GetChars(IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, int32_t byteCount, IL2CPP::Array<wchar_t>* chars, int32_t charIndex);
		int32_t GetMaxByteCount(int32_t charCount);
		int32_t GetMaxCharCount(int32_t byteCount);
		mscorlib::System::String* get_BodyName();
		mscorlib::System::String* get_EncodingName();
		mscorlib::System::String* get_HeaderName();
		mscorlib::System::String* get_WebName();
	};
}

