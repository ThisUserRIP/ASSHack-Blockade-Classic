#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Text; };
namespace UnityEngine_UI::UnityEngine::UI { struct Selectable; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct UIElementInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_UI_ControlMapper_ControlMapper_LayoutElementSizeType.h"
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_GUIElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* gameObject;
		Unity_TextMeshPro::TMPro::TMP_Text* text;
		UnityEngine_UI::UnityEngine::UI::Selectable* selectable;
		Assembly_CSharp::Rewired::UI::ControlMapper::UIElementInfo* uiElementInfo;
		bool permanentStateSet;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIElement>* children;
		UnityEngine_CoreModule::UnityEngine::RectTransform* _rectTransform_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::RectTransform* get_rectTransform();
		void set_rectTransform(UnityEngine_CoreModule::UnityEngine::RectTransform* value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* gameObject);
		void _ctor(UnityEngine_UI::UnityEngine::UI::Selectable* selectable, Unity_TextMeshPro::TMPro::TMP_Text* label);
		void SetInteractible(bool state, bool playTransition);
		void SetInteractible(bool state, bool playTransition, bool permanent);
		void SetTextWidth(int32_t value);
		void SetFirstChildObjectWidth(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_LayoutElementSizeType type, int32_t value);
		void SetLabel(mscorlib::System::String* label);
		mscorlib::System::String* GetLabel();
		void AddChild(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIElement* child);
		void SetElementInfoData(mscorlib::System::String* identifier, int32_t intData);
		void SetActive(bool state);
		bool Init();
	};
}

