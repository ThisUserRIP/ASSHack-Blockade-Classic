#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "TMPro_HorizontalAlignmentOptions.h"
#include "TMPro_FontStyles.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_TextMeshPro::TMPro { struct TMP_TextInfo; };
#include "TMPro_TMP_LineInfo.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_LineInfo; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "TMPro_TMP_FontStyleStack.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_FontStyleStack; };
#include "TMPro_TMP_TextProcessingStack_1.h"
namespace Unity_TextMeshPro::TMPro { template <typename T> struct TMP_TextProcessingStack_1; };
#include "TMPro_HighlightState.h"
namespace Unity_TextMeshPro::TMPro { struct HighlightState; };
namespace Unity_TextMeshPro::TMPro { struct TMP_ColorGradient; };
#include "TMPro_FontWeight.h"
#include "TMPro_MaterialReference.h"
namespace Unity_TextMeshPro::TMPro { struct MaterialReference; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "TMPro_Extents.h"
namespace Unity_TextMeshPro::TMPro { struct Extents; };

namespace Unity_TextMeshPro::TMPro
{
	struct WordWrapState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t previous_WordBreak;
		int32_t total_CharacterCount;
		int32_t visible_CharacterCount;
		int32_t visible_SpriteCount;
		int32_t visible_LinkCount;
		int32_t firstCharacterIndex;
		int32_t firstVisibleCharacterIndex;
		int32_t lastCharacterIndex;
		int32_t lastVisibleCharIndex;
		int32_t lineNumber;
		float maxCapHeight;
		float maxAscender;
		float maxDescender;
		float startOfLineAscender;
		float maxLineAscender;
		float maxLineDescender;
		float pageAscender;
		Unity_TextMeshPro::TMPro::HorizontalAlignmentOptions horizontalAlignment;
		float marginLeft;
		float marginRight;
		float xAdvance;
		float preferredWidth;
		float preferredHeight;
		float previousLineScale;
		int32_t wordCount;
		Unity_TextMeshPro::TMPro::FontStyles fontStyle;
		int32_t italicAngle;
		float fontScaleMultiplier;
		float currentFontSize;
		float baselineOffset;
		float lineOffset;
		bool isDrivenLineSpacing;
		float glyphHorizontalAdvanceAdjustment;
		float cSpace;
		float mSpace;
		Unity_TextMeshPro::TMPro::TMP_TextInfo* textInfo;
		Unity_TextMeshPro::TMPro::TMP_LineInfo lineInfo;
		UnityEngine_CoreModule::UnityEngine::Color32 vertexColor;
		UnityEngine_CoreModule::UnityEngine::Color32 underlineColor;
		UnityEngine_CoreModule::UnityEngine::Color32 strikethroughColor;
		UnityEngine_CoreModule::UnityEngine::Color32 highlightColor;
		Unity_TextMeshPro::TMPro::TMP_FontStyleStack basicStyleStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<mscorlib::System::Int32> italicAngleStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<UnityEngine_CoreModule::UnityEngine::Color32> colorStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<UnityEngine_CoreModule::UnityEngine::Color32> underlineColorStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<UnityEngine_CoreModule::UnityEngine::Color32> strikethroughColorStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<UnityEngine_CoreModule::UnityEngine::Color32> highlightColorStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<Unity_TextMeshPro::TMPro::HighlightState> highlightStateStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<Unity_TextMeshPro::TMPro::TMP_ColorGradient> colorGradientStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<mscorlib::System::Single> sizeStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<mscorlib::System::Single> indentStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<Unity_TextMeshPro::TMPro::FontWeight> fontWeightStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<mscorlib::System::Int32> styleStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<mscorlib::System::Single> baselineStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<mscorlib::System::Int32> actionStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<Unity_TextMeshPro::TMPro::MaterialReference> materialReferenceStack;
		Unity_TextMeshPro::TMPro::TMP_TextProcessingStack_1<Unity_TextMeshPro::TMPro::HorizontalAlignmentOptions> lineJustificationStack;
		int32_t spriteAnimationID;
		Unity_TextMeshPro::TMPro::TMP_FontAsset* currentFontAsset;
		Unity_TextMeshPro::TMPro::TMP_SpriteAsset* currentSpriteAsset;
		UnityEngine_CoreModule::UnityEngine::Material* currentMaterial;
		int32_t currentMaterialIndex;
		Unity_TextMeshPro::TMPro::Extents meshExtents;
		bool tagNoParsing;
		bool isNonBreakingSpace;
	};
}

