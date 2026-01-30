#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct TouchScreenKeyboard; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "UnityEngine_TextEditor_DblClickSnapping.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct Event; };
#include "UnityEngine_TextEditor_TextEditOp.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "UnityEngine_TextEditor_CharacterType.h"
#include "UnityEngine_TextEditor_Direction.h"

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct TextEditor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard* keyboardOnScreen;
		int32_t controlID;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style;
		bool multiline;
		bool hasHorizontalCursorPos;
		bool isPasswordField;
		bool m_HasFocus;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollOffset;
		UnityEngine_IMGUIModule::UnityEngine::GUIContent* m_Content;
		UnityEngine_CoreModule::UnityEngine::Rect m_Position;
		int32_t m_CursorIndex;
		int32_t m_SelectIndex;
		bool m_RevealCursor;
		UnityEngine_CoreModule::UnityEngine::Vector2 graphicalCursorPos;
		UnityEngine_CoreModule::UnityEngine::Vector2 graphicalSelectCursorPos;
		bool m_MouseDragSelectsWholeWords;
		int32_t m_DblClickInitPos;
		UnityEngine_IMGUIModule::UnityEngine::TextEditor_DblClickSnapping m_DblClickSnap;
		bool m_bJustSelected;
		int32_t m_iAltCursorPos;
		mscorlib::System::String* oldText;
		int32_t oldPos;
		int32_t oldSelectPos;
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_IMGUIModule::UnityEngine::Event, UnityEngine_IMGUIModule::UnityEngine::TextEditor_TextEditOp>* s_Keyactions;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		UnityEngine_CoreModule::UnityEngine::Rect get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Rect value);
		UnityEngine_CoreModule::UnityEngine::Rect get_localPosition();
		int32_t get_cursorIndex();
		void set_cursorIndex(int32_t value);
		int32_t get_selectIndex();
		void set_selectIndex(int32_t value);
		void ClearCursorPos();
		void _ctor();
		void OnFocus();
		void OnLostFocus();
		void GrabGraphicalCursorPos();
		bool HandleKeyEvent(UnityEngine_IMGUIModule::UnityEngine::Event* e);
		bool HandleKeyEvent(UnityEngine_IMGUIModule::UnityEngine::Event* e, bool textIsReadOnly);
		bool DeleteLineBack();
		bool DeleteWordBack();
		bool DeleteWordForward();
		bool Delete();
		bool Backspace();
		void SelectAll();
		void SelectNone();
		bool get_hasSelection();
		bool DeleteSelection();
		void ReplaceSelection(mscorlib::System::String* replace);
		void Insert(wchar_t c);
		void MoveRight();
		void MoveLeft();
		void MoveUp();
		void MoveDown();
		void MoveLineStart();
		void MoveLineEnd();
		void MoveGraphicalLineStart();
		void MoveGraphicalLineEnd();
		void MoveTextStart();
		void MoveTextEnd();
		int32_t IndexOfEndOfLine(int32_t startIndex);
		void MoveParagraphForward();
		void MoveParagraphBackward();
		void MoveCursorToPosition(UnityEngine_CoreModule::UnityEngine::Vector2 cursorPosition);
		void MoveCursorToPosition_Internal(UnityEngine_CoreModule::UnityEngine::Vector2 cursorPosition, bool shift);
		void SelectToPosition(UnityEngine_CoreModule::UnityEngine::Vector2 cursorPosition);
		void SelectLeft();
		void SelectRight();
		void SelectUp();
		void SelectDown();
		void SelectTextEnd();
		void SelectTextStart();
		void MouseDragSelectsWholeWords(bool on);
		void DblClickSnap(UnityEngine_IMGUIModule::UnityEngine::TextEditor_DblClickSnapping snapping);
		int32_t GetGraphicalLineStart(int32_t p);
		int32_t GetGraphicalLineEnd(int32_t p);
		int32_t FindNextSeperator(int32_t startPos);
		int32_t FindPrevSeperator(int32_t startPos);
		void MoveWordRight();
		void MoveToStartOfNextWord();
		void MoveToEndOfPreviousWord();
		void SelectToStartOfNextWord();
		void SelectToEndOfPreviousWord();
		UnityEngine_IMGUIModule::UnityEngine::TextEditor_CharacterType ClassifyChar(int32_t index);
		int32_t FindStartOfNextWord(int32_t p);
		int32_t FindEndOfPreviousWord(int32_t p);
		void MoveWordLeft();
		void SelectWordRight();
		void SelectWordLeft();
		void ExpandSelectGraphicalLineStart();
		void ExpandSelectGraphicalLineEnd();
		void SelectGraphicalLineStart();
		void SelectGraphicalLineEnd();
		void SelectParagraphForward();
		void SelectParagraphBackward();
		void SelectCurrentWord();
		int32_t FindEndOfClassification(int32_t p, UnityEngine_IMGUIModule::UnityEngine::TextEditor_Direction dir);
		void SelectCurrentParagraph();
		void UpdateScrollOffsetIfNeeded(UnityEngine_IMGUIModule::UnityEngine::Event* evt);
		void UpdateScrollOffset();
		void DrawCursor(mscorlib::System::String* newText);
		bool PerformOperation(UnityEngine_IMGUIModule::UnityEngine::TextEditor_TextEditOp operation, bool textIsReadOnly);
		void SaveBackup();
		bool Cut();
		void Copy();
		static mscorlib::System::String* ReplaceNewlinesWithSpaces(mscorlib::System::String* value);
		bool Paste();
		static void MapKey(mscorlib::System::String* key, UnityEngine_IMGUIModule::UnityEngine::TextEditor_TextEditOp action);
		void InitKeyActions();
		void DetectFocusChange();
		void OnDetectFocusChange();
		void OnCursorIndexChange();
		void OnSelectIndexChange();
		void ClampTextIndex(int32_t& index);
		void EnsureValidCodePointIndex(int32_t& index);
		bool IsValidCodePointIndex(int32_t index);
		int32_t PreviousCodePointIndex(int32_t index);
		int32_t NextCodePointIndex(int32_t index);
	};
}

