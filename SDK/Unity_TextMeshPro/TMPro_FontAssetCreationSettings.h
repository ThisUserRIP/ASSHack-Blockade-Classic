#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct FontAssetCreationSettings
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* sourceFontFileName;
		mscorlib::System::String* sourceFontFileGUID;
		int32_t pointSizeSamplingMode;
		int32_t pointSize;
		int32_t padding;
		int32_t packingMode;
		int32_t atlasWidth;
		int32_t atlasHeight;
		int32_t characterSetSelectionMode;
		mscorlib::System::String* characterSequence;
		mscorlib::System::String* referencedFontAssetGUID;
		mscorlib::System::String* referencedTextAssetGUID;
		int32_t fontStyle;
		float fontStyleModifier;
		int32_t renderMode;
		bool includeFontFeatures;
		void _ctor(mscorlib::System::String* sourceFontFileGUID, int32_t pointSize, int32_t pointSizeSamplingMode, int32_t padding, int32_t packingMode, int32_t atlasWidth, int32_t atlasHeight, int32_t characterSelectionMode, mscorlib::System::String* characterSet, int32_t renderMode);
	};
}

