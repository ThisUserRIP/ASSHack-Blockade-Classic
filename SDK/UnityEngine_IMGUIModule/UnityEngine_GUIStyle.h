#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyleState; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectOffset; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "UnityEngine_ImagePosition.h"
#include "..\UnityEngine_TextRenderingModule\UnityEngine_TextAnchor.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_FontStyle.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUIStyle : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* m_Normal;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* m_Hover;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* m_Active;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* m_Focused;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* m_OnNormal;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* m_OnHover;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* m_OnActive;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* m_OnFocused;
		UnityEngine_CoreModule::UnityEngine::RectOffset* m_Border;
		UnityEngine_CoreModule::UnityEngine::RectOffset* m_Padding;
		UnityEngine_CoreModule::UnityEngine::RectOffset* m_Margin;
		UnityEngine_CoreModule::UnityEngine::RectOffset* m_Overflow;
		mscorlib::System::String* m_Name;
		struct StaticFields
		{
			bool showKeyboardFocus;
			UnityEngine_IMGUIModule::UnityEngine::GUIStyle* s_None;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_rawName();
		void set_rawName(mscorlib::System::String* value);
		UnityEngine_TextRenderingModule::UnityEngine::Font* get_font();
		void set_font(UnityEngine_TextRenderingModule::UnityEngine::Font* value);
		UnityEngine_IMGUIModule::UnityEngine::ImagePosition get_imagePosition();
		UnityEngine_TextRenderingModule::UnityEngine::TextAnchor get_alignment();
		void set_alignment(UnityEngine_TextRenderingModule::UnityEngine::TextAnchor value);
		bool get_wordWrap();
		void set_wordWrap(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_contentOffset();
		void set_contentOffset(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		float get_fixedWidth();
		float get_fixedHeight();
		void set_fixedHeight(float value);
		bool get_stretchWidth();
		void set_stretchWidth(bool value);
		bool get_stretchHeight();
		void set_stretchHeight(bool value);
		int32_t get_fontSize();
		void set_fontSize(int32_t value);
		UnityEngine_TextRenderingModule::UnityEngine::FontStyle get_fontStyle();
		void set_fontStyle(UnityEngine_TextRenderingModule::UnityEngine::FontStyle value);
		bool get_richText();
		void set_richText(bool value);
		void set_Internal_clipOffset(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		static intptr_t Internal_Create(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* self);
		static intptr_t Internal_Copy(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* self, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* other);
		static void Internal_Destroy(intptr_t self);
		intptr_t GetStyleStatePtr(int32_t idx);
		intptr_t GetRectOffsetPtr(int32_t idx);
		void AssignRectOffset(int32_t idx, intptr_t srcRectOffset);
		static float Internal_GetLineHeight(intptr_t target);
		void Internal_Draw(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
		void Internal_Draw2(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, bool on);
		void Internal_DrawCursor(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t pos, UnityEngine_CoreModule::UnityEngine::Color cursorColor);
		void Internal_DrawWithTextSelection(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int32_t cursorFirst, int32_t cursorLast, UnityEngine_CoreModule::UnityEngine::Color cursorColor, UnityEngine_CoreModule::UnityEngine::Color selectionColor);
		UnityEngine_CoreModule::UnityEngine::Vector2 Internal_GetCursorPixelPosition(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t cursorStringIndex);
		int32_t Internal_GetCursorStringIndex(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2 cursorPixelPosition);
		mscorlib::System::String* Internal_GetSelectedRenderedText(UnityEngine_CoreModule::UnityEngine::Rect localPosition, UnityEngine_IMGUIModule::UnityEngine::GUIContent* mContent, int32_t selectIndex, int32_t cursorIndex);
		UnityEngine_CoreModule::UnityEngine::Vector2 Internal_CalcSize(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content);
		UnityEngine_CoreModule::UnityEngine::Vector2 Internal_CalcSizeWithConstraints(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2 maxSize);
		float Internal_CalcHeight(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, float width);
		UnityEngine_CoreModule::UnityEngine::Vector2 Internal_CalcMinMaxWidth(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content);
		static void SetMouseTooltip(mscorlib::System::String* tooltip, UnityEngine_CoreModule::UnityEngine::Rect screenRect);
		static float Internal_GetCursorFlashOffset();
		static void SetDefaultFont(UnityEngine_TextRenderingModule::UnityEngine::Font* font);
		void _ctor();
		void _ctor(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* other);
		void Finalize();
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* get_normal();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* get_hover();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* get_active();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* get_onNormal();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* get_onHover();
		UnityEngine_IMGUIModule::UnityEngine::GUIStyleState* get_onActive();
		UnityEngine_CoreModule::UnityEngine::RectOffset* get_margin();
		UnityEngine_CoreModule::UnityEngine::RectOffset* get_padding();
		void set_padding(UnityEngine_CoreModule::UnityEngine::RectOffset* value);
		float get_lineHeight();
		void Draw(UnityEngine_CoreModule::UnityEngine::Rect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
		void Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
		void Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID);
		void Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, bool on);
		void Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, bool on, bool hover);
		void Draw(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
		void DrawCursor(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, int32_t character);
		void DrawWithTextSelection(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isActive, bool hasKeyboardFocus, int32_t firstSelectedCharacter, int32_t lastSelectedCharacter, bool drawSelectionAsComposition, UnityEngine_CoreModule::UnityEngine::Color selectionColor);
		void DrawWithTextSelection(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, int32_t firstSelectedCharacter, int32_t lastSelectedCharacter, bool drawSelectionAsComposition);
		void DrawWithTextSelection(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, int32_t firstSelectedCharacter, int32_t lastSelectedCharacter);
		static UnityEngine_IMGUIModule::UnityEngine::GUIStyle* op_Implicit(mscorlib::System::String* str);
		static UnityEngine_IMGUIModule::UnityEngine::GUIStyle* get_none();
		UnityEngine_CoreModule::UnityEngine::Vector2 GetCursorPixelPosition(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t cursorStringIndex);
		int32_t GetCursorStringIndex(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2 cursorPixelPosition);
		UnityEngine_CoreModule::UnityEngine::Vector2 CalcSize(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content);
		UnityEngine_CoreModule::UnityEngine::Vector2 CalcSizeWithConstraints(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2 constraints);
		float CalcHeight(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, float width);
		bool get_isHeightDependantOnWidth();
		void CalcMinMaxWidth(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, float& minWidth, float& maxWidth);
		mscorlib::System::String* ToString();
		static void _cctor();
		void get_contentOffset_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void set_contentOffset_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
		void set_Internal_clipOffset_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& value);
		void Internal_Draw_Injected(UnityEngine_CoreModule::UnityEngine::Rect& screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);
		void Internal_Draw2_Injected(UnityEngine_CoreModule::UnityEngine::Rect& position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t controlID, bool on);
		void Internal_DrawCursor_Injected(UnityEngine_CoreModule::UnityEngine::Rect& position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t pos, UnityEngine_CoreModule::UnityEngine::Color& cursorColor);
		void Internal_DrawWithTextSelection_Injected(UnityEngine_CoreModule::UnityEngine::Rect& screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, int32_t cursorFirst, int32_t cursorLast, UnityEngine_CoreModule::UnityEngine::Color& cursorColor, UnityEngine_CoreModule::UnityEngine::Color& selectionColor);
		void Internal_GetCursorPixelPosition_Injected(UnityEngine_CoreModule::UnityEngine::Rect& position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, int32_t cursorStringIndex, UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		int32_t Internal_GetCursorStringIndex_Injected(UnityEngine_CoreModule::UnityEngine::Rect& position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2& cursorPixelPosition);
		mscorlib::System::String* Internal_GetSelectedRenderedText_Injected(UnityEngine_CoreModule::UnityEngine::Rect& localPosition, UnityEngine_IMGUIModule::UnityEngine::GUIContent* mContent, int32_t selectIndex, int32_t cursorIndex);
		void Internal_CalcSize_Injected(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void Internal_CalcSizeWithConstraints_Injected(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2& maxSize, UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		void Internal_CalcMinMaxWidth_Injected(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_CoreModule::UnityEngine::Vector2& ret);
		static void SetMouseTooltip_Injected(mscorlib::System::String* tooltip, UnityEngine_CoreModule::UnityEngine::Rect& screenRect);
	};
}

