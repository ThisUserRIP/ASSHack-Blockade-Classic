#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_MaskableGraphic.h"
namespace UnityEngine_UI::UnityEngine::UI { struct FontData; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct TextGenerator; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_UIVertex.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UIVertex; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_TextAnchor.h"
#include "..\UnityEngine_TextRenderingModule\UnityEngine_HorizontalWrapMode.h"
#include "..\UnityEngine_TextRenderingModule\UnityEngine_VerticalWrapMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_FontStyle.h"
#include "..\UnityEngine_TextRenderingModule\UnityEngine_TextGenerationSettings.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct TextGenerationSettings; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_UI::UnityEngine::UI { struct VertexHelper; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Text : UnityEngine_UI::UnityEngine::UI::MaskableGraphic
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::FontData* m_FontData;
		mscorlib::System::String* m_Text;
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* m_TextCache;
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* m_TextCacheForLayout;
		bool m_DisableFontTextureRebuiltCallback;
		IL2CPP::Array<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* m_TempVerts;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Material* s_DefaultText;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* get_cachedTextGenerator();
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* get_cachedTextGeneratorForLayout();
		UnityEngine_CoreModule::UnityEngine::Texture* get_mainTexture();
		void FontTextureChanged();
		UnityEngine_TextRenderingModule::UnityEngine::Font* get_font();
		void set_font(UnityEngine_TextRenderingModule::UnityEngine::Font* value);
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		bool get_supportRichText();
		void set_supportRichText(bool value);
		bool get_resizeTextForBestFit();
		void set_resizeTextForBestFit(bool value);
		int32_t get_resizeTextMinSize();
		void set_resizeTextMinSize(int32_t value);
		int32_t get_resizeTextMaxSize();
		void set_resizeTextMaxSize(int32_t value);
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor get_alignment();
		void set_alignment(UnityEngine_TextRenderingModule::UnityEngine::TextAnchor value);
		bool get_alignByGeometry();
		void set_alignByGeometry(bool value);
		int32_t get_fontSize();
		void set_fontSize(int32_t value);
		UnityEngine_TextRenderingModule::UnityEngine::HorizontalWrapMode get_horizontalOverflow();
		void set_horizontalOverflow(UnityEngine_TextRenderingModule::UnityEngine::HorizontalWrapMode value);
		UnityEngine_TextRenderingModule::UnityEngine::VerticalWrapMode get_verticalOverflow();
		void set_verticalOverflow(UnityEngine_TextRenderingModule::UnityEngine::VerticalWrapMode value);
		float get_lineSpacing();
		void set_lineSpacing(float value);
		UnityEngine_TextRenderingModule::UnityEngine::FontStyle get_fontStyle();
		void set_fontStyle(UnityEngine_TextRenderingModule::UnityEngine::FontStyle value);
		float get_pixelsPerUnit();
		void OnEnable();
		void OnDisable();
		void UpdateGeometry();
		void AssignDefaultFont();
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerationSettings GetGenerationSettings(UnityEngine_CoreModule::UnityEngine::Vector2 extents);
		static UnityEngine_CoreModule::UnityEngine::Vector2 GetTextAnchorPivot(UnityEngine_TextRenderingModule::UnityEngine::TextAnchor anchor);
		void OnPopulateMesh(UnityEngine_UI::UnityEngine::UI::VertexHelper* toFill);
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		float get_minWidth();
		float get_preferredWidth();
		float get_flexibleWidth();
		float get_minHeight();
		float get_preferredHeight();
		float get_flexibleHeight();
		int32_t get_layoutPriority();
		static void _cctor();
	};
}

