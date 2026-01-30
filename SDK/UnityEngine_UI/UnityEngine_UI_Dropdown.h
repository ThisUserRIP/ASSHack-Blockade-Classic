#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_Selectable.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::UI { struct Dropdown_OptionDataList; };
namespace UnityEngine_UI::UnityEngine::UI { struct Dropdown_DropdownEvent; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_UI::UnityEngine::UI { struct Dropdown_DropdownItem; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "UnityEngine_UI_CoroutineTween_FloatTween.h"
namespace UnityEngine_UI::UnityEngine::UI::CoroutineTween { struct FloatTween; };
namespace UnityEngine_UI::UnityEngine::UI::CoroutineTween { template <typename T> struct TweenRunner_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct Dropdown_OptionData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct PointerEventData; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct BaseEventData; };
namespace UnityEngine_UIModule::UnityEngine { struct Canvas; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Dropdown : UnityEngine_UI::UnityEngine::UI::Selectable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* m_Template;
		UnityEngine_UI::UnityEngine::UI::Text* m_CaptionText;
		UnityEngine_UI::UnityEngine::UI::Image* m_CaptionImage;
		UnityEngine_UI::UnityEngine::UI::Text* m_ItemText;
		UnityEngine_UI::UnityEngine::UI::Image* m_ItemImage;
		int32_t m_Value;
		UnityEngine_UI::UnityEngine::UI::Dropdown_OptionDataList* m_Options;
		UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownEvent* m_OnValueChanged;
		float m_AlphaFadeSpeed;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_Dropdown;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_Blocker;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownItem>* m_Items;
		UnityEngine_UI::UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine_UI::UnityEngine::UI::CoroutineTween::FloatTween>* m_AlphaTweenRunner;
		bool validTemplate;
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::Dropdown_OptionData* s_NoOptionData;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_template();
		void set_template(UnityEngine_CoreModule::UnityEngine::RectTransform* value);
		UnityEngine_UI::UnityEngine::UI::Text* get_captionText();
		void set_captionText(UnityEngine_UI::UnityEngine::UI::Text* value);
		UnityEngine_UI::UnityEngine::UI::Image* get_captionImage();
		void set_captionImage(UnityEngine_UI::UnityEngine::UI::Image* value);
		UnityEngine_UI::UnityEngine::UI::Text* get_itemText();
		void set_itemText(UnityEngine_UI::UnityEngine::UI::Text* value);
		UnityEngine_UI::UnityEngine::UI::Image* get_itemImage();
		void set_itemImage(UnityEngine_UI::UnityEngine::UI::Image* value);
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Dropdown_OptionData>* get_options();
		void set_options(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Dropdown_OptionData>* value);
		UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownEvent* get_onValueChanged();
		void set_onValueChanged(UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownEvent* value);
		float get_alphaFadeSpeed();
		void set_alphaFadeSpeed(float value);
		int32_t get_value();
		void set_value(int32_t value);
		void SetValueWithoutNotify(int32_t input);
		void Set(int32_t value, bool sendCallback);
		void _ctor();
		void Awake();
		void Start();
		void OnDisable();
		void RefreshShownValue();
		void AddOptions(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Dropdown_OptionData>* options);
		void AddOptions(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* options);
		void AddOptions(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Sprite>* options);
		void ClearOptions();
		void SetupTemplate();
		template <typename T> static T* GetOrAddComponent(UnityEngine_CoreModule::UnityEngine::GameObject* go)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOrAddComponent", std::vector<std::string> { "UnityEngine.GameObject" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)go;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void OnPointerClick(UnityEngine_UI::UnityEngine::EventSystems::PointerEventData* eventData);
		void OnSubmit(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void OnCancel(UnityEngine_UI::UnityEngine::EventSystems::BaseEventData* eventData);
		void Show();
		UnityEngine_CoreModule::UnityEngine::GameObject* CreateBlocker(UnityEngine_UIModule::UnityEngine::Canvas* rootCanvas);
		void DestroyBlocker(UnityEngine_CoreModule::UnityEngine::GameObject* blocker);
		UnityEngine_CoreModule::UnityEngine::GameObject* CreateDropdownList(UnityEngine_CoreModule::UnityEngine::GameObject* template_);
		void DestroyDropdownList(UnityEngine_CoreModule::UnityEngine::GameObject* dropdownList);
		UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownItem* CreateItem(UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownItem* itemTemplate);
		void DestroyItem(UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownItem* item);
		UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownItem* AddItem(UnityEngine_UI::UnityEngine::UI::Dropdown_OptionData* data, bool selected, UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownItem* itemTemplate, mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Dropdown_DropdownItem>* items);
		void AlphaFadeList(float duration, float alpha);
		void AlphaFadeList(float duration, float start, float end);
		void SetAlpha(float alpha);
		void Hide();
		mscorlib::System::Collections::IEnumerator* DelayedDestroyDropdownList(float delay);
		void ImmediateDestroyDropdownList();
		void OnSelectItem(UnityEngine_UI::UnityEngine::UI::Toggle* toggle);
		static void _cctor();
	};
}

