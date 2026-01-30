#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_SpriteAssetUtilities_TexturePacker_JsonArray.h"
namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities { struct TexturePacker_JsonArray; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };

namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities
{
	struct TexturePacker_JsonArray_SpriteFrame
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float x;
		float y;
		float w;
		float h;
		mscorlib::System::String* ToString();
	};
}

