#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Character; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_FontUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* k_searchedFontAssets;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_TextMeshPro::TMPro::TMP_FontAsset* SearchForCharacter(Unity_TextMeshPro::TMPro::TMP_FontAsset* font, uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character);
		static Unity_TextMeshPro::TMPro::TMP_FontAsset* SearchForCharacter(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* fonts, uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character);
		static Unity_TextMeshPro::TMPro::TMP_FontAsset* SearchForCharacterInternal(Unity_TextMeshPro::TMPro::TMP_FontAsset* font, uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character);
		static Unity_TextMeshPro::TMPro::TMP_FontAsset* SearchForCharacterInternal(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* fonts, uint32_t unicode, Unity_TextMeshPro::TMPro::TMP_Character& character);
	};
}

