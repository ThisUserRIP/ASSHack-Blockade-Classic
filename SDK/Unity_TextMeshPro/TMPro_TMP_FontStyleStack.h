#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "TMPro_FontStyles.h"

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_FontStyleStack
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t bold;
		uint8_t italic;
		uint8_t underline;
		uint8_t strikethrough;
		uint8_t highlight;
		uint8_t superscript;
		uint8_t subscript;
		uint8_t uppercase;
		uint8_t lowercase;
		uint8_t smallcaps;
		void Clear();
		uint8_t Add(Unity_TextMeshPro::TMPro::FontStyles style);
		uint8_t Remove(Unity_TextMeshPro::TMPro::FontStyles style);
	};
}

