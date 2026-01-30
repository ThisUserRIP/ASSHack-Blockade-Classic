#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct Window_Timer; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasGroup; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { struct String; };
#include "..\Rewired_Core\Rewired_UI_UIPivot.h"
namespace Rewired_Core::Rewired::UI { struct UIPivot; };
#include "..\Rewired_Core\Rewired_UI_UIAnchor.h"
namespace Rewired_Core::Rewired::UI { struct UIAnchor; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ButtonInfo; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct Window : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Image* backgroundImage;
		UnityEngine_CoreModule::UnityEngine::GameObject* content;
		bool _initialized;
		int32_t _id;
		UnityEngine_CoreModule::UnityEngine::RectTransform* _rectTransform;
		Unity_TextMeshPro::TMPro::TMP_Text* _titleText;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Text>* _contentText;
		UnityEngine_CoreModule::UnityEngine::GameObject* _defaultUIElement;
		mscorlib::System::Action_1<mscorlib::System::Int32>* _updateCallback;
		mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* _isFocusedCallback;
		Assembly_CSharp::Rewired::UI::ControlMapper::Window_Timer* _timer;
		UnityEngine_UIModule::UnityEngine::CanvasGroup* _canvasGroup;
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* cancelCallback;
		UnityEngine_CoreModule::UnityEngine::GameObject* lastUISelection;
		bool get_hasFocus();
		int32_t get_id();
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		Unity_TextMeshPro::TMPro::TMP_Text* get_titleText();
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Text>* get_contentText();
		UnityEngine_CoreModule::UnityEngine::GameObject* get_defaultUIElement();
		void set_defaultUIElement(UnityEngine_CoreModule::UnityEngine::GameObject* value);
		mscorlib::System::Action_1<mscorlib::System::Int32>* get_updateCallback();
		void set_updateCallback(mscorlib::System::Action_1<mscorlib::System::Int32>* value);
		Assembly_CSharp::Rewired::UI::ControlMapper::Window_Timer* get_timer();
		int32_t get_width();
		void set_width(int32_t value);
		int32_t get_height();
		void set_height(int32_t value);
		bool get_initialized();
		void OnEnable();
		void Update();
		void Initialize(int32_t id, mscorlib::System::Func_2<mscorlib::System::Int32, mscorlib::System::Boolean>* isFocusedCallback);
		void SetSize(int32_t width, int32_t height);
		void CreateTitleText(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, UnityEngine_CoreModule::UnityEngine::Vector2 offset);
		void CreateTitleText(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, UnityEngine_CoreModule::UnityEngine::Vector2 offset, mscorlib::System::String* text);
		void AddContentText(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, Rewired_Core::Rewired::UI::UIPivot pivot, Rewired_Core::Rewired::UI::UIAnchor anchor, UnityEngine_CoreModule::UnityEngine::Vector2 offset);
		void AddContentText(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, Rewired_Core::Rewired::UI::UIPivot pivot, Rewired_Core::Rewired::UI::UIAnchor anchor, UnityEngine_CoreModule::UnityEngine::Vector2 offset, mscorlib::System::String* text);
		void AddContentImage(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, Rewired_Core::Rewired::UI::UIPivot pivot, Rewired_Core::Rewired::UI::UIAnchor anchor, UnityEngine_CoreModule::UnityEngine::Vector2 offset);
		void AddContentImage(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, Rewired_Core::Rewired::UI::UIPivot pivot, Rewired_Core::Rewired::UI::UIAnchor anchor, UnityEngine_CoreModule::UnityEngine::Vector2 offset, mscorlib::System::String* text);
		void CreateButton(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, Rewired_Core::Rewired::UI::UIPivot pivot, Rewired_Core::Rewired::UI::UIAnchor anchor, UnityEngine_CoreModule::UnityEngine::Vector2 offset, mscorlib::System::String* buttonText, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* confirmCallback, UnityEngine_CoreModule::UnityEngine::Events::UnityAction* cancelCallback, bool setDefault);
		mscorlib::System::String* GetTitleText(mscorlib::System::String* text);
		void SetTitleText(mscorlib::System::String* text);
		mscorlib::System::String* GetContentText(int32_t index);
		float GetContentTextHeight(int32_t index);
		void SetContentText(mscorlib::System::String* text, int32_t index);
		void SetUpdateCallback(mscorlib::System::Action_1<mscorlib::System::Int32>* callback);
		void TakeInputFocus();
		void Enable();
		void Disable();
		void Cancel();
		void CreateText(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, Unity_TextMeshPro::TMPro::TMP_Text& textComponent, mscorlib::System::String* name, Rewired_Core::Rewired::UI::UIPivot pivot, Rewired_Core::Rewired::UI::UIAnchor anchor, UnityEngine_CoreModule::UnityEngine::Vector2 offset);
		void CreateImage(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, mscorlib::System::String* name, Rewired_Core::Rewired::UI::UIPivot pivot, Rewired_Core::Rewired::UI::UIAnchor anchor, UnityEngine_CoreModule::UnityEngine::Vector2 offset);
		UnityEngine_CoreModule::UnityEngine::GameObject* CreateButton(UnityEngine_CoreModule::UnityEngine::GameObject* prefab, mscorlib::System::String* name, Rewired_Core::Rewired::UI::UIAnchor anchor, Rewired_Core::Rewired::UI::UIPivot pivot, UnityEngine_CoreModule::UnityEngine::Vector2 offset, Assembly_CSharp::Rewired::UI::ControlMapper::ButtonInfo& buttonInfo);
		mscorlib::System::Collections::IEnumerator* OnEnableAsync();
		void CheckUISelection();
		void RestoreDefaultOrLastUISelection();
		void SetUISelection(UnityEngine_CoreModule::UnityEngine::GameObject* selection);
		void _ctor();
	};
}

