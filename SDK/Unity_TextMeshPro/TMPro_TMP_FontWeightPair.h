#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_FontWeightPair
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_FontAsset* regularTypeface;
		Unity_TextMeshPro::TMPro::TMP_FontAsset* italicTypeface;
	};
}

