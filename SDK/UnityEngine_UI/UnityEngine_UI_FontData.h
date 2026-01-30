#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_FontStyle.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_TextAnchor.h"
#include "..\UnityEngine_TextRenderingModule\UnityEngine_HorizontalWrapMode.h"
#include "..\UnityEngine_TextRenderingModule\UnityEngine_VerticalWrapMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct FontData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_TextRenderingModule::UnityEngine::Font* m_Font;
		int32_t m_FontSize;
		UnityEngine_TextRenderingModule::UnityEngine::FontStyle m_FontStyle;
		bool m_BestFit;
		int32_t m_MinSize;
		int32_t m_MaxSize;
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor m_Alignment;
		bool m_AlignByGeometry;
		bool m_RichText;
		UnityEngine_TextRenderingModule::UnityEngine::HorizontalWrapMode m_HorizontalOverflow;
		UnityEngine_TextRenderingModule::UnityEngine::VerticalWrapMode m_VerticalOverflow;
		float m_LineSpacing;
		static UnityEngine_UI::UnityEngine::UI::FontData* get_defaultFontData();
		UnityEngine_TextRenderingModule::UnityEngine::Font* get_font();
		void set_font(UnityEngine_TextRenderingModule::UnityEngine::Font* value);
		int32_t get_fontSize();
		void set_fontSize(int32_t value);
		UnityEngine_TextRenderingModule::UnityEngine::FontStyle get_fontStyle();
		void set_fontStyle(UnityEngine_TextRenderingModule::UnityEngine::FontStyle value);
		bool get_bestFit();
		void set_bestFit(bool value);
		int32_t get_minSize();
		void set_minSize(int32_t value);
		int32_t get_maxSize();
		void set_maxSize(int32_t value);
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor get_alignment();
		void set_alignment(UnityEngine_TextRenderingModule::UnityEngine::TextAnchor value);
		bool get_alignByGeometry();
		void set_alignByGeometry(bool value);
		bool get_richText();
		void set_richText(bool value);
		UnityEngine_TextRenderingModule::UnityEngine::HorizontalWrapMode get_horizontalOverflow();
		void set_horizontalOverflow(UnityEngine_TextRenderingModule::UnityEngine::HorizontalWrapMode value);
		UnityEngine_TextRenderingModule::UnityEngine::VerticalWrapMode get_verticalOverflow();
		void set_verticalOverflow(UnityEngine_TextRenderingModule::UnityEngine::VerticalWrapMode value);
		float get_lineSpacing();
		void set_lineSpacing(float value);
		void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
		void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
		void _ctor();
	};
}

