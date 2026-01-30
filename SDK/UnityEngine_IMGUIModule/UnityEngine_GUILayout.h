#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutOption; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_GUI_ToolbarButtonSize.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUI_WindowFunction; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUILayout : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Label(mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void Label(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void Label(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void DoLabel(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void Box(UnityEngine_CoreModule::UnityEngine::Texture* image, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void Box(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void Box(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void DoBox(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static bool Button(mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static bool Button(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static bool DoButton(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static mscorlib::System::String* TextField(mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static mscorlib::System::String* TextField(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static mscorlib::System::String* TextArea(mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static mscorlib::System::String* TextArea(mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static mscorlib::System::String* DoTextField(mscorlib::System::String* text, int32_t maxLength, bool multiline, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static bool Toggle(bool value, mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static bool Toggle(bool value, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static bool Toggle(bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static bool DoToggle(bool value, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static int32_t Toolbar(int32_t selected, IL2CPP::Array<mscorlib::System::String*>* texts, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static int32_t Toolbar(int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static int32_t Toolbar(int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static int32_t Toolbar(int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, IL2CPP::Array<bool>* enabled, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUI_ToolbarButtonSize buttonSize, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static int32_t SelectionGrid(int32_t selected, IL2CPP::Array<mscorlib::System::String*>* texts, int32_t xCount, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static int32_t SelectionGrid(int32_t selected, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* images, int32_t xCount, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static int32_t SelectionGrid(int32_t selected, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static float HorizontalSlider(float value, float leftValue, float rightValue, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static float DoHorizontalSlider(float value, float leftValue, float rightValue, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* slider, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* thumb, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void Space(float pixels);
		static void FlexibleSpace();
		static void BeginHorizontal(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void BeginHorizontal(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void EndHorizontal();
		static void BeginVertical(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void BeginVertical(UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void EndVertical();
		static void BeginArea(UnityEngine_CoreModule::UnityEngine::Rect screenRect);
		static void BeginArea(UnityEngine_CoreModule::UnityEngine::Rect screenRect, mscorlib::System::String* text);
		static void BeginArea(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void BeginArea(UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		static void EndArea();
		static UnityEngine_CoreModule::UnityEngine::Vector2 BeginScrollView(UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_CoreModule::UnityEngine::Vector2 BeginScrollView(UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_CoreModule::UnityEngine::Vector2 BeginScrollView(UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* verticalScrollbar, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* background, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static void EndScrollView();
		static void EndScrollView(bool handleScrollWheel);
		static UnityEngine_CoreModule::UnityEngine::Rect Window(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, mscorlib::System::String* text, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_CoreModule::UnityEngine::Rect Window(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, mscorlib::System::String* text, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_CoreModule::UnityEngine::Rect DoWindow(int32_t id, UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* func, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* Width(float width);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* MinWidth(float minWidth);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* MaxWidth(float maxWidth);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* Height(float height);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* MinHeight(float minHeight);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* MaxHeight(float maxHeight);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* ExpandWidth(bool expand);
		static UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption* ExpandHeight(bool expand);
	};
}

