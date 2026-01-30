#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Text_Encoder.h"
namespace I18N::I18N::Common { struct MonoEncoding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace I18N::I18N::Common
{
	struct MonoEncoder : mscorlib::System::Text::Encoder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		I18N::Common::MonoEncoding* encoding;
		void _ctor(I18N::Common::MonoEncoding* encoding);
		int32_t GetByteCount(IL2CPP::Array<wchar_t>* chars, int32_t index, int32_t count, bool refresh);
		int32_t GetBytes(IL2CPP::Array<wchar_t>* chars, int32_t charIndex, int32_t charCount, IL2CPP::Array<uint8_t>* bytes, int32_t byteIndex, bool flush);
		int32_t GetByteCountImpl(wchar_t* chars, int32_t charCount, bool refresh);
		int32_t GetBytesImpl(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool refresh);
		int32_t GetBytes(wchar_t* chars, int32_t charCount, uint8_t* bytes, int32_t byteCount, bool flush);
		void HandleFallback(wchar_t* chars, int32_t& charIndex, int32_t& charCount, uint8_t* bytes, int32_t& byteIndex, int32_t& byteCount);
	};
}

