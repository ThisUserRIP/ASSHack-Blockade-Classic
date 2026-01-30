#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUISettings; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUISkin_SkinChangedDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUISkin : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_TextRenderingModule::UnityEngine::Font* m_Font;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_box;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_button;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_toggle;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_label;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_textField;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_textArea;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_window;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_horizontalSlider;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_horizontalSliderThumb;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_horizontalSliderThumbExtent;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_verticalSlider;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_verticalSliderThumb;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_verticalSliderThumbExtent;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_SliderMixed;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_horizontalScrollbar;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_horizontalScrollbarThumb;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_horizontalScrollbarRightButton;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_verticalScrollbar;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_verticalScrollbarThumb;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_verticalScrollbarUpButton;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_verticalScrollbarDownButton;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_ScrollView;
		IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIStyle*>* m_CustomStyles;
		UnityEngine_IMGUIModule::UnityEngine::GUISettings* m_Settings;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_IMGUIModule::UnityEngine::GUIStyle>* m_Styles;
		struct StaticFields
		{
			UnityEngine_IMGUIModule::UnityEngine::GUIStyle* ms_Error;
			UnityEngine_IMGUIModule::UnityEngine::GUISkin_SkinChangedDelegate* m_SkinChanged;
			UnityEngine_IMGUIModule::UnityEngine::GUISkin* current;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void OnEnable();
		static void CleanupRoots();
		UnityEngine_TextRenderingModule::UnityEngine::Font* get_font();
		void set_font(UnityEngine_TextRenderingModule::UnityEngine::Font* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_box();
		void set_box(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_label();
		void set_label(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_textField();
		void set_textField(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_textArea();
		void set_textArea(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_button();
		void set_button(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_toggle();
		void set_toggle(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_window();
		void set_window(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_horizontalSlider();
		void set_horizontalSlider(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_horizontalSliderThumb();
		void set_horizontalSliderThumb(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_horizontalSliderThumbExtent();
		void set_horizontalSliderThumbExtent(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_sliderMixed();
		void set_sliderMixed(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_verticalSlider();
		void set_verticalSlider(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_verticalSliderThumb();
		void set_verticalSliderThumb(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_verticalSliderThumbExtent();
		void set_verticalSliderThumbExtent(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_horizontalScrollbar();
		void set_horizontalScrollbar(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_horizontalScrollbarThumb();
		void set_horizontalScrollbarThumb(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_horizontalScrollbarLeftButton();
		void set_horizontalScrollbarLeftButton(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_horizontalScrollbarRightButton();
		void set_horizontalScrollbarRightButton(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_verticalScrollbar();
		void set_verticalScrollbar(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_verticalScrollbarThumb();
		void set_verticalScrollbarThumb(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_verticalScrollbarUpButton();
		void set_verticalScrollbarUpButton(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_verticalScrollbarDownButton();
		void set_verticalScrollbarDownButton(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_scrollView();
		void set_scrollView(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* value);
		IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIStyle*>* get_customStyles();
		void set_customStyles(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIStyle*>* value);
		UnityEngine_IMGUIModule::UnityEngine::GUISettings* get_settings();
		static UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_error();
		void Apply();
		void BuildStyleCache();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* GetStyle(mscorlib::System::String* styleName);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* FindStyle(mscorlib::System::String* styleName);
		void MakeCurrent();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
	};
}

