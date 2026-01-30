#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Text_DecoderNLS.h"
#include "System_Text_UTF32Encoding.h"
namespace mscorlib::System::Text { struct UTF32Encoding; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Text
{
	struct UTF32Encoding_UTF32Decoder : mscorlib::System::Text::DecoderNLS
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t iChar;
		int32_t readByteCount;
		void _ctor(mscorlib::System::Text::UTF32Encoding* encoding);
		void Reset();
		bool get_HasState();
	};
}

