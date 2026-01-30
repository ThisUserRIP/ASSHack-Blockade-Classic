#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_WordInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_Text* textComponent;
		int32_t firstCharacterIndex;
		int32_t lastCharacterIndex;
		int32_t characterCount;
		mscorlib::System::String* GetWord();
	};
}

