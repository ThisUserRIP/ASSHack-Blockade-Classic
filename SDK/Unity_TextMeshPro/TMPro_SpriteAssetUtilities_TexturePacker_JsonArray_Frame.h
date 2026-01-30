#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "TMPro_SpriteAssetUtilities_TexturePacker_JsonArray.h"
namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities { struct TexturePacker_JsonArray; };
namespace mscorlib::System { struct String; };
#include "TMPro_SpriteAssetUtilities_TexturePacker_JsonArray_SpriteFrame.h"
namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities { struct TexturePacker_JsonArray_SpriteFrame; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "TMPro_SpriteAssetUtilities_TexturePacker_JsonArray_SpriteSize.h"
namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities { struct TexturePacker_JsonArray_SpriteSize; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities
{
	struct TexturePacker_JsonArray_Frame
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* filename;
		Unity_TextMeshPro::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame frame;
		bool rotated;
		bool trimmed;
		Unity_TextMeshPro::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteFrame spriteSourceSize;
		Unity_TextMeshPro::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_SpriteSize sourceSize;
		UnityEngine_CoreModule::UnityEngine::Vector2 pivot;
	};
}

