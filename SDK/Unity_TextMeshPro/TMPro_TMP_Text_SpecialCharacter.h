#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_TMP_Text.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Character; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Text_SpecialCharacter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_TextMeshPro::TMPro::TMP_Character* character;
		Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset;
		UnityEngine_CoreModule::UnityEngine::Material* material;
		int32_t materialIndex;
		void _ctor(Unity_TextMeshPro::TMPro::TMP_Character* character, int32_t materialIndex);
	};
}

