#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_TextElement_Legacy.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Glyph : Unity_TextMeshPro::TMPro::TMP_TextElement_Legacy
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Unity_TextMeshPro::TMPro::TMP_Glyph* Clone(Unity_TextMeshPro::TMPro::TMP_Glyph* source);
		void _ctor();
	};
}

