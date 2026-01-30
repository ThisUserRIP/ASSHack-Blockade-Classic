#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "TMPro_HorizontalAlignmentOptions.h"
#include "TMPro_Extents.h"
namespace Unity_TextMeshPro::TMPro { struct Extents; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_LineInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t controlCharacterCount;
		int32_t characterCount;
		int32_t visibleCharacterCount;
		int32_t spaceCount;
		int32_t wordCount;
		int32_t firstCharacterIndex;
		int32_t firstVisibleCharacterIndex;
		int32_t lastCharacterIndex;
		int32_t lastVisibleCharacterIndex;
		float length;
		float lineHeight;
		float ascender;
		float baseline;
		float descender;
		float maxAdvance;
		float width;
		float marginLeft;
		float marginRight;
		Unity_TextMeshPro::TMPro::HorizontalAlignmentOptions alignment;
		Unity_TextMeshPro::TMPro::Extents lineExtents;
	};
}

