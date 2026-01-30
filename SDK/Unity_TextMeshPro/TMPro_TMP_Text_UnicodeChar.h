#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_Text.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Text_UnicodeChar
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t unicode;
		int32_t stringIndex;
		int32_t length;
	};
}

