#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_FontStyle.h"
#include "UnityEngine_TextAnchor.h"
#include "UnityEngine_VerticalWrapMode.h"
#include "UnityEngine_HorizontalWrapMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace UnityEngine_TextRenderingModule::UnityEngine
{
	struct TextGenerationSettings
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_TextRenderingModule::UnityEngine::Font* font;
		UnityEngine_CoreModule::UnityEngine::Color color;
		int32_t fontSize;
		float lineSpacing;
		bool richText;
		float scaleFactor;
		UnityEngine_TextRenderingModule::UnityEngine::FontStyle fontStyle;
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor textAnchor;
		bool alignByGeometry;
		bool resizeTextForBestFit;
		int32_t resizeTextMinSize;
		int32_t resizeTextMaxSize;
		bool updateBounds;
		UnityEngine_TextRenderingModule::UnityEngine::VerticalWrapMode verticalOverflow;
		UnityEngine_TextRenderingModule::UnityEngine::HorizontalWrapMode horizontalOverflow;
		UnityEngine_CoreModule::UnityEngine::Vector2 generationExtents;
		UnityEngine_CoreModule::UnityEngine::Vector2 pivot;
		bool generateOutOfBounds;
		bool CompareColors(UnityEngine_CoreModule::UnityEngine::Color left, UnityEngine_CoreModule::UnityEngine::Color right);
		bool CompareVector2(UnityEngine_CoreModule::UnityEngine::Vector2 left, UnityEngine_CoreModule::UnityEngine::Vector2 right);
		bool Equals(UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings other);
	};
}

