#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_SpriteAssetUtilities_TexturePacker_JsonArray.h"
namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities { struct TexturePacker_JsonArray; };
#include "TMPro_SpriteAssetUtilities_TexturePacker_JsonArray_Frame.h"
namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities { struct TexturePacker_JsonArray_Frame; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "TMPro_SpriteAssetUtilities_TexturePacker_JsonArray_Meta.h"
namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities { struct TexturePacker_JsonArray_Meta; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro::SpriteAssetUtilities
{
	struct TexturePacker_JsonArray_SpriteDataObject : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Frame>* frames;
		Unity_TextMeshPro::TMPro::SpriteAssetUtilities::TexturePacker_JsonArray_Meta meta;
		void _ctor();
	};
}

