#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_Selectable.h"
namespace UnityEngine_CoreModule::UnityEngine { struct TouchScreenKeyboard; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
#include "UnityEngine_UI_InputField_ContentType.h"
#include "UnityEngine_UI_InputField_InputType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_TouchScreenKeyboardType.h"
#include "UnityEngine_UI_InputField_LineType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_UI_InputField_CharacterValidation.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::UI { struct InputField_SubmitEvent; };
namespace UnityEngine_UI::UnityEngine::UI { struct InputField_OnChangeEvent; };
namespace UnityEngine_UI::UnityEngine::UI { struct InputField_OnValidateInput; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_TextRenderingModule\UnityEngine_UIVertex.h"
namespace UnityEngine_TextRenderingModule::UnityEngine { struct UIVertex; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct TextGenerator; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasRenderer; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace UnityEngine_CoreModule::UnityEngine { struct WaitForSecondsRealtime; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct Event; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseInput; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
#include "UnityEngine_UI_InputField_EditState.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
#include "UnityEngine_UI_CanvasUpdate.h"
namespace UnityEngine_UI::UnityEngine::UI { struct VertexHelper; };
#include "UnityEngine_UI_Selectable_SelectionState.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct InputField : UnityEngine_UI::UnityEngine::UI::Selectable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard* m_Keyboard;
		UnityEngine_UI::UnityEngine::UI::Text* m_TextComponent;
		UnityEngine_UI::UnityEngine::UI::Graphic* m_Placeholder;
		UnityEngine_UI::UnityEngine::UI::InputField_ContentType m_ContentType;
		UnityEngine_UI::UnityEngine::UI::InputField_InputType m_InputType;
		wchar_t m_AsteriskChar;
		UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboardType m_KeyboardType;
		UnityEngine_UI::UnityEngine::UI::InputField_LineType m_LineType;
		bool m_HideMobileInput;
		UnityEngine_UI::UnityEngine::UI::InputField_CharacterValidation m_CharacterValidation;
		int32_t m_CharacterLimit;
		UnityEngine_UI::UnityEngine::UI::InputField_SubmitEvent* m_OnEndEdit;
		UnityEngine_UI::UnityEngine::UI::InputField_OnChangeEvent* m_OnValueChanged;
		UnityEngine_UI::UnityEngine::UI::InputField_OnValidateInput* m_OnValidateInput;
		UnityEngine_CoreModule::UnityEngine::Color m_CaretColor;
		bool m_CustomCaretColor;
		UnityEngine_CoreModule::UnityEngine::Color m_SelectionColor;
		mscorlib::System::String* m_Text;
		float m_CaretBlinkRate;
		int32_t m_CaretWidth;
		bool m_ReadOnly;
		bool m_ShouldActivateOnSelect;
		int32_t m_CaretPosition;
		int32_t m_CaretSelectPosition;
		UnityEngine_CoreModule::UnityEngine::RectTransform* caretRectTrans;
		IL2CPP::Array<UnityEngine_TextRenderingModule::UnityEngine::UIVertex>* m_CursorVerts;
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* m_InputTextCache;
		UnityEngine_UIModule::UnityEngine::CanvasRenderer* m_CachedInputRenderer;
		bool m_PreventFontCallback;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_Mesh;
		bool m_AllowInput;
		bool m_ShouldActivateNextUpdate;
		bool m_UpdateDrag;
		bool m_DragPositionOutOfBounds;
		bool m_CaretVisible;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_BlinkCoroutine;
		float m_BlinkStartTime;
		int32_t m_DrawStart;
		int32_t m_DrawEnd;
		UnityEngine_CoreModule::UnityEngine::Coroutine* m_DragCoroutine;
		mscorlib::System::String* m_OriginalText;
		bool m_WasCanceled;
		bool m_HasDoneFocusTransition;
		UnityEngine_CoreModule::UnityEngine::WaitForSecondsRealtime* m_WaitForSecondsRealtime;
		bool m_TouchKeyboardAllowsInPlaceEditing;
		UnityEngine_IMGUIModule::UnityEngine::Event* m_ProcessingEvent;
		struct StaticFields
		{
			IL2CPP::Array<wchar_t>* kSeparators;
			float kHScrollSpeed;
			float kVScrollSpeed;
			mscorlib::System::String* kEmailSpecialCharacters;
			int32_t k_MaxTextLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_UI::UnityEngine::EventSystems::BaseInput* get_input();
		mscorlib::System::String* get_compositionString();
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Mesh* get_mesh();
		UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* get_cachedInputTextGenerator();
		void set_shouldHideMobileInput(bool value);
		bool get_shouldHideMobileInput();
		void set_shouldActivateOnSelect(bool value);
		bool get_shouldActivateOnSelect();
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		void SetTextWithoutNotify(mscorlib::System::String* input);
		void SetText(mscorlib::System::String* value, bool sendCallback);
		bool get_isFocused();
		float get_caretBlinkRate();
		void set_caretBlinkRate(float value);
		int32_t get_caretWidth();
		void set_caretWidth(int32_t value);
		UnityEngine_UI::UnityEngine::UI::Text* get_textComponent();
		void set_textComponent(UnityEngine_UI::UnityEngine::UI::Text* value);
		UnityEngine_UI::UnityEngine::UI::Graphic* get_placeholder();
		void set_placeholder(UnityEngine_UI::UnityEngine::UI::Graphic* value);
		UnityEngine_CoreModule::UnityEngine::Color get_caretColor();
		void set_caretColor(UnityEngine_CoreModule::UnityEngine::Color value);
		bool get_customCaretColor();
		void set_customCaretColor(bool value);
		UnityEngine_CoreModule::UnityEngine::Color get_selectionColor();
		void set_selectionColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_UI::UnityEngine::UI::InputField_SubmitEvent* get_onEndEdit();
		void set_onEndEdit(UnityEngine_UI::UnityEngine::UI::InputField_SubmitEvent* value);
		UnityEngine_UI::UnityEngine::UI::InputField_OnChangeEvent* get_onValueChange();
		void set_onValueChange(UnityEngine_UI::UnityEngine::UI::InputField_OnChangeEvent* value);
		UnityEngine_UI::UnityEngine::UI::InputField_OnChangeEvent* get_onValueChanged();
		void set_onValueChanged(UnityEngine_UI::UnityEngine::UI::InputField_OnChangeEvent* value);
		UnityEngine_UI::UnityEngine::UI::InputField_OnValidateInput* get_onValidateInput();
		void set_onValidateInput(UnityEngine_UI::UnityEngine::UI::InputField_OnValidateInput* value);
		int32_t get_characterLimit();
		void set_characterLimit(int32_t value);
		UnityEngine_UI::UnityEngine::UI::InputField_ContentType get_contentType();
		void set_contentType(UnityEngine_UI::UnityEngine::UI::InputField_ContentType value);
		UnityEngine_UI::UnityEngine::UI::InputField_LineType get_lineType();
		void set_lineType(UnityEngine_UI::UnityEngine::UI::InputField_LineType value);
		UnityEngine_UI::UnityEngine::UI::InputField_InputType get_inputType();
		void set_inputType(UnityEngine_UI::UnityEngine::UI::InputField_InputType value);
		UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard* get_touchScreenKeyboard();
		UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboardType get_keyboardType();
		void set_keyboardType(UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboardType value);
		UnityEngine_UI::UnityEngine::UI::InputField_CharacterValidation get_characterValidation();
		void set_characterValidation(UnityEngine_UI::UnityEngine::UI::InputField_CharacterValidation value);
		bool get_readOnly();
		void set_readOnly(bool value);
		bool get_multiLine();
		wchar_t get_asteriskChar();
		void set_asteriskChar(wchar_t value);
		bool get_wasCanceled();
		void ClampPos(int32_t& pos);
		int32_t get_caretPositionInternal();
		void set_caretPositionInternal(int32_t value);
		int32_t get_caretSelectPositionInternal();
		void set_caretSelectPositionInternal(int32_t value);
		bool get_hasSelection();
		int32_t get_caretPosition();
		void set_caretPosition(int32_t value);
		int32_t get_selectionAnchorPosition();
		void set_selectionAnchorPosition(int32_t value);
		int32_t get_selectionFocusPosition();
		void set_selectionFocusPosition(int32_t value);
		void OnEnable();
		void OnDisable();
		mscorlib::System::Collections::IEnumerator* CaretBlink();
		void SetCaretVisible();
		void SetCaretActive();
		void UpdateCaretMaterial();
		void OnFocus();
		void SelectAll();
		void MoveTextEnd(bool shift);
		void MoveTextStart(bool shift);
		static mscorlib::System::String* get_clipboard();
		static void set_clipboard(mscorlib::System::String* value);
		bool InPlaceEditing();
		void UpdateCaretFromKeyboard();
		void LateUpdate();
		UnityEngine_CoreModule::UnityEngine::Vector2 ScreenToLocal(UnityEngine_CoreModule::UnityEngine::Vector2 screen);
		int32_t GetUnclampedCharacterLineFromPosition(UnityEngine_CoreModule::UnityEngine::Vector2 pos, UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* generator);
		int32_t GetCharacterIndexFromPosition(UnityEngine_CoreModule::UnityEngine::Vector2 pos);
		bool MayDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnBeginDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		mscorlib::System::Collections::IEnumerator* MouseDragOutsideRect(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnEndDrag(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnPointerDown(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		UnityEngine_UI::UnityEngine::UI::InputField_EditState KeyPressed(UnityEngine_IMGUIModule::UnityEngine::Event* evt);
		bool IsValidChar(wchar_t c);
		void ProcessEvent(UnityEngine_IMGUIModule::UnityEngine::Event* e);
		void OnUpdateSelected(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		mscorlib::System::String* GetSelectedString();
		int32_t FindtNextWordBegin();
		void MoveRight(bool shift, bool ctrl);
		int32_t FindtPrevWordBegin();
		void MoveLeft(bool shift, bool ctrl);
		int32_t DetermineCharacterLine(int32_t charPos, UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* generator);
		int32_t LineUpCharacterPosition(int32_t originalPos, bool goToFirstChar);
		int32_t LineDownCharacterPosition(int32_t originalPos, bool goToLastChar);
		void MoveDown(bool shift);
		void MoveDown(bool shift, bool goToLastChar);
		void MoveUp(bool shift);
		void MoveUp(bool shift, bool goToFirstChar);
		void Delete();
		void ForwardSpace();
		void Backspace();
		void Insert(wchar_t c);
		void UpdateTouchKeyboardFromEditChanges();
		void SendOnValueChangedAndUpdateLabel();
		void SendOnValueChanged();
		void SendOnSubmit();
		void Append(mscorlib::System::String* input);
		void Append(wchar_t input);
		void UpdateLabel();
		bool IsSelectionVisible();
		static int32_t GetLineStartPosition(UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* gen, int32_t line);
		static int32_t GetLineEndPosition(UnityEngine_TextRenderingModule::UnityEngine::TextGenerator* gen, int32_t line);
		void SetDrawRangeToContainCaretPosition(int32_t caretPos);
		void ForceLabelUpdate();
		void MarkGeometryAsDirty();
		void Rebuild(UnityEngine_UI::UnityEngine::UI::CanvasUpdate update);
		void LayoutComplete();
		void GraphicUpdateComplete();
		void UpdateGeometry();
		void AssignPositioningIfNeeded();
		void OnFillVBO(UnityEngine_CoreModule::UnityEngine::Mesh* vbo);
		void GenerateCaret(UnityEngine_UI::UnityEngine::UI::VertexHelper* vbo, UnityEngine_CoreModule::UnityEngine::Vector2 roundingOffset);
		void CreateCursorVerts();
		void GenerateHighlight(UnityEngine_UI::UnityEngine::UI::VertexHelper* vbo, UnityEngine_CoreModule::UnityEngine::Vector2 roundingOffset);
		wchar_t Validate(mscorlib::System::String* text, int32_t pos, wchar_t ch);
		void ActivateInputField();
		void ActivateInputFieldInternal();
		void OnSelect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnPointerClick(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void DeactivateInputField();
		void OnDeselect(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnSubmit(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void EnforceContentType();
		void EnforceTextHOverflow();
		void SetToCustomIfContentTypeIsNot(IL2CPP::Array<UnityEngine_UI::UnityEngine::UI::InputField_ContentType>* allowedContentTypes);
		void SetToCustom();
		void DoStateTransition(UnityEngine_UI::UnityEngine::UI::Selectable_SelectionState state, bool instant);
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
		UnityEngine_CoreModule::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
	};
}

