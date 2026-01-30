#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_LinkInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_Text* textComponent;
		int32_t hashCode;
		int32_t linkIdFirstCharacterIndex;
		int32_t linkIdLength;
		int32_t linkTextfirstCharacterIndex;
		int32_t linkTextLength;
		IL2CPP::Array<wchar_t>* linkID;
		void SetLinkID(IL2CPP::Array<wchar_t>* text, int32_t startIndex, int32_t length);
		mscorlib::System::String* GetLinkText();
		mscorlib::System::String* GetLinkID();
	};
}

