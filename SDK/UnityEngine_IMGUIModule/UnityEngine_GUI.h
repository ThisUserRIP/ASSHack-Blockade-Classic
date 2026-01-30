#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUISkin; };
namespace UnityEngine_CoreModule::UnityEngineInternal { struct GenericStack; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUI_WindowFunction; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace mscorlib::System { struct Object; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "UnityEngine_ScaleMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "UnityEngine_FocusType.h"
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct TextEditor; };
#include "UnityEngine_GUI_ToolbarButtonSize.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUI : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t s_ScrollControlId;
			int32_t s_HotTextField;
			int32_t s_BoxHash;
			int32_t s_ButonHash;
			int32_t s_RepeatButtonHash;
			int32_t s_ToggleHash;
			int32_t s_ButtonGridHash;
			int32_t s_SliderHash;
			int32_t s_BeginGroupHash;
			int32_t s_ScrollviewHash;
			int32_t _scrollTroughSide_k__BackingField;
			mscorlib::System::DateTime _nextScrollStepTime_k__BackingField;
			UnityEngine_IMGUIModule::UnityEngine::GUISkin* s_Skin;
			UnityEngine_CoreModule::UnityEngineInternal::GenericStack* _scrollViewStates_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Color get_color();
		static void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		static void set_contentColor(UnityEngine_CoreModule::UnityEngine::Color value);
		static bool get_changed();
		static void set_changed(bool value);
		static bool get_enabled();
		static void set_enabled(bool value);
		static int32_t get_depth();
		static void set_depth(int32_t value);
		static bool get_usePageScrollbars();
		static UnityEngine_CoreModule::UnityEngine::Material* get_blendMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* get_blitMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* get_roundedRectMaterial();
		static UnityEngine_CoreModule::UnityEngine::Material* get_roundedRectWithColorPerBorderMaterial();
		static void GrabMouseControl(int32_t id);
		static bool HasMouseControl(int32_t id);
		static void ReleaseMouseControl();
		static void SetNextControlName(mscorlib::System::String* name);
		static void FocusControl(mscorlib::System::String* name);
		static void InternalRepaintEditorWindow();
		static UnityEngine_CoreModule::UnityEngine::Rect Internal_DoWindow(int32_t id, int32_t instanceID, UnityEngine_CoreModule::UnityEngine::Rect clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* title, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::Object* skin, bool forceRectOnLayout);
		static void FocusWindow(int32_t windowID);
		static void _cctor();
		static int32_t get_scrollTroughSide();
		static void set_scrollTroughSide(int32_t value);
		static mscorlib::System::DateTime get_nextScrollStepTime();
		static void set_nextScrollStepTime(mscorlib::System::DateTime value);
		static void set_skin(UnityEngine_IMGUIModule::UnityEngine::GUISkin* value);
		static UnityEngine_IMGUIModule::UnityEngine::GUISkin* get_skin();
		static void DoSetSkin(UnityEngine_IMGUIModule::UnityEngine::GUISkin* newSkin);
		static UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_matrix();
		static void set_matrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		static void Label(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text);
		static void Label(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void Label(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image);
		static void DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode);
		static void DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend);
		static void DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect);
		static void DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color color, float borderWidth, float borderRadius);
		static void DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color color, UnityEngine_CoreModule::UnityEngine::Vector4 borderWidths, float borderRadius);
		static void DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color color, UnityEngine_CoreModule::UnityEngine::Vector4 borderWidths, UnityEngine_CoreModule::UnityEngine::Vector4 borderRadiuses);
		static void DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color color, UnityEngine_CoreModule::UnityEngine::Vector4 borderWidths, UnityEngine_CoreModule::UnityEngine::Vector4 borderRadiuses, bool drawSmoothCorners);
		static void DrawTexture(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, bool alphaBlend, float imageAspect, UnityEngine_CoreModule::UnityEngine::Color leftColor, UnityEngine_CoreModule::UnityEngine::Color topColor, UnityEngine_CoreModule::UnityEngine::Color rightColor, UnityEngine_CoreModule::UnityEngine::Color bottomColor, UnityEngine_CoreModule::UnityEngine::Vector4 borderWidths, UnityEngine_CoreModule::UnityEngine::Vector4 borderRadiuses, bool drawSmoothCorners);
		static bool CalculateScaledTextureRects(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::ScaleMode scaleMode, float imageAspect, UnityEngine_CoreModule::UnityEngine::Rect& outScreenRect, UnityEngine_CoreModule::UnityEngine::Rect& outSourceRect);
		static void DrawTextureWithTexCoords(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_CoreModule::UnityEngine::Rect texCoords);
		static void DrawTextureWithTexCoords(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_CoreModule::UnityEngine::Rect texCoords, bool alphaBlend);
		static void Box(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text);
		static void Box(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content);
		static void Box(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void Box(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static bool Button(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text);
		static bool Button(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content);
		static bool Button(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static bool Button(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Texture* image, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static bool Button(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static bool Button(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static bool DoRepeatButton(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::FocusType focusType);
		static mscorlib::System::String* TextField(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text);
		static mscorlib::System::String* TextField(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, int32_t maxLength);
		static mscorlib::System::String* TextField(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static mscorlib::System::String* TextField(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static mscorlib::System::String* PasswordFieldGetStrToShow(mscorlib::System::String* password, wchar_t maskChar);
		static mscorlib::System::String* TextArea(UnityEngine_CoreModule::UnityEngine::Rect position, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void DoTextField(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void DoTextField(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::String* secureText);
		static void DoTextField(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::String* secureText, wchar_t maskChar);
		static void HandleTextFieldEventForTouchscreen(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::String* secureText, wchar_t maskChar, UnityEngine_IMGUIModule::UnityEngine::TextEditor* editor);
		static void HandleTextFieldEventForDesktop(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, bool multiline, int32_t maxLength, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::TextEditor* editor);
		static bool Toggle(UnityEngine_CoreModule::UnityEngine::Rect position, bool value, mscorlib::System::String* text);
		static bool Toggle(UnityEngine_CoreModule::UnityEngine::Rect position, bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content);
		static bool Toggle(UnityEngine_CoreModule::UnityEngine::Rect position, bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static int32_t Toolbar(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, IL2CPP::Array<mscorlib::System::String*>* controlNames, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize, IL2CPP::Array<bool>* contentsEnabled);
		static int32_t SelectionGrid(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void FindStyles(UnityEngine_IMGUIModule::UnityEngine::GUIStyle& style, UnityEngine_IMGUIModule::UnityEngine::GUIStyle& firstStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle& midStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle& lastStyle, mscorlib::System::String* first, mscorlib::System::String* mid, mscorlib::System::String* last);
		static int32_t CalcTotalHorizSpacing(int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* firstStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* midStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* lastStyle);
		static bool DoControl(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, bool on, bool hover, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void DoLabel(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static bool DoToggle(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static bool DoButton(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static int32_t DoButtonGrid(UnityEngine_CoreModule::UnityEngine::Rect position, int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, IL2CPP::Array<mscorlib::System::String*>* controlNames, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* firstStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* midStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* lastStyle, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize, IL2CPP::Array<bool>* contentsEnabled);
		static IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* CalcMouseRects(UnityEngine_CoreModule::UnityEngine::Rect position, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, float elemWidth, float elemHeight, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* firstStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* midStyle, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* lastStyle, bool addBorders, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize);
		static float HorizontalSlider(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float leftValue, float rightValue);
		static float HorizontalSlider(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float leftValue, float rightValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb);
		static float VerticalSlider(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float topValue, float bottomValue);
		static float Slider(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float size, float start, float end, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb, bool horiz, int32_t id, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumbExtent);
		static float HorizontalScrollbar(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float size, float leftValue, float rightValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static bool ScrollerRepeatButton(int32_t scrollerID, UnityEngine_CoreModule::UnityEngine::Rect rect, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static float VerticalScrollbar(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float size, float topValue, float bottomValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static float Scroller(UnityEngine_CoreModule::UnityEngine::Rect position, float value, float size, float leftValue, float rightValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* leftButton, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* rightButton, bool horiz);
		static void BeginGroup(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void BeginGroup(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_CoreModule::UnityEngine::Vector2 scrollOffset);
		static void EndGroup();
		static UnityEngine_CoreModule::UnityEngineInternal::GenericStack* get_scrollViewStates();
		static UnityEngine_CoreModule::UnityEngine::Vector2 BeginScrollView(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, UnityEngine_CoreModule::UnityEngine::Rect viewRect);
		static UnityEngine_CoreModule::UnityEngine::Vector2 BeginScrollView(UnityEngine_CoreModule::UnityEngine::Rect position, UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, UnityEngine_CoreModule::UnityEngine::Rect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* verticalScrollbar, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* background);
		static void EndScrollView();
		static void EndScrollView(bool handleScrollWheel);
		static UnityEngine_CoreModule::UnityEngine::Rect Window(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static UnityEngine_CoreModule::UnityEngine::Rect Window(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* title, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static UnityEngine_CoreModule::UnityEngine::Rect DoWindow(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* title, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUISkin* skin, bool forceRectOnLayout);
		static void CallWindowDelegate(UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, int32_t id, int32_t instanceID, UnityEngine_IMGUIModule::UnityEngine::GUISkin* _skin, int32_t forceRect, float width, float height, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void get_color_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		static void set_color_Injected(UnityEngine_CoreModule::UnityEngine::Color& value);
		static void set_contentColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& value);
		static void Internal_DoWindow_Injected(int32_t id, int32_t instanceID, UnityEngine_CoreModule::UnityEngine::Rect& clientRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* title, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, mscorlib::System::Object* skin, bool forceRectOnLayout, UnityEngine_CoreModule::UnityEngine::Rect& ret);
	};
}

