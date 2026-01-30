#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_SpriteAssetUtilities_TexturePacker_JsonArray.h"
namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities { struct TexturePacker_JsonArray; };
namespace mscorlib::System { struct String; };
#include "TMPro_SpriteAssetUtilities_TexturePacker_JsonArray_SpriteSize.h"
namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities { struct TexturePacker_JsonArray_SpriteSize; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities
{
	struct TexturePacker_JsonArray_Meta
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* app;
		mscorlib::System::String* version;
		mscorlib::System::String* image;
		mscorlib::System::String* format;
		Unity_TextMeshPro::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize size;
		float scale;
		mscorlib::System::String* smartupdate;
	};
}

