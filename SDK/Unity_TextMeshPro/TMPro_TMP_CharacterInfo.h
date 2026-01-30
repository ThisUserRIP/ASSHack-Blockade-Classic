#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "TMPro_TMP_TextElementType.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_TextElement; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "TMPro_TMP_Vertex.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Vertex; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "TMPro_HighlightState.h"
namespace Unity_TextMeshPro::TMPro { struct HighlightState; };
#include "TMPro_FontStyles.h"

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_CharacterInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		wchar_t character;
		int32_t index;
		int32_t stringLength;
		Unity_TextMeshPro::TMPro::TMP_TextElementType elementType;
		Unity_TextMeshPro::TMPro::TMP_TextElement* textElement;
		Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset;
		Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset;
		int32_t spriteIndex;
		UnityEngine_CoreModule::UnityEngine::Material* material;
		int32_t materialReferenceIndex;
		bool isUsingAlternateTypeface;
		float pointSize;
		int32_t lineNumber;
		int32_t pageNumber;
		int32_t vertexIndex;
		Unity_TextMeshPro::TMPro::TMP_Vertex vertex_BL;
		Unity_TextMeshPro::TMPro::TMP_Vertex vertex_TL;
		Unity_TextMeshPro::TMPro::TMP_Vertex vertex_TR;
		Unity_TextMeshPro::TMPro::TMP_Vertex vertex_BR;
		UnityEngine_CoreModule::UnityEngine::Vector3 topLeft;
		UnityEngine_CoreModule::UnityEngine::Vector3 bottomLeft;
		UnityEngine_CoreModule::UnityEngine::Vector3 topRight;
		UnityEngine_CoreModule::UnityEngine::Vector3 bottomRight;
		float origin;
		float xAdvance;
		float ascender;
		float baseLine;
		float descender;
		float adjustedAscender;
		float adjustedDescender;
		float aspectRatio;
		float scale;
		UnityEngine_CoreModule::UnityEngine::Color32 color;
		UnityEngine_CoreModule::UnityEngine::Color32 underlineColor;
		int32_t underlineVertexIndex;
		UnityEngine_CoreModule::UnityEngine::Color32 strikethroughColor;
		int32_t strikethroughVertexIndex;
		UnityEngine_CoreModule::UnityEngine::Color32 highlightColor;
		Unity_TextMeshPro::TMPro::HighlightState highlightState;
		Unity_TextMeshPro::TMPro::FontStyles style;
		bool isVisible;
	};
}

