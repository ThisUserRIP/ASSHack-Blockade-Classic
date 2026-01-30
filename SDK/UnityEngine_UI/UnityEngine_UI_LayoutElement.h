#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_EventSystems_UIBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct LayoutElement : UnityEngine_UI::UnityEngine::EventSystems::UIBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_IgnoreLayout;
		float m_MinWidth;
		float m_MinHeight;
		float m_PreferredWidth;
		float m_PreferredHeight;
		float m_FlexibleWidth;
		float m_FlexibleHeight;
		int32_t m_LayoutPriority;
		bool get_ignoreLayout();
		void set_ignoreLayout(bool value);
		void CalculateLayoutInputHorizontal();
		void CalculateLayoutInputVertical();
		float get_minWidth();
		void set_minWidth(float value);
		float get_minHeight();
		void set_minHeight(float value);
		float get_preferredWidth();
		void set_preferredWidth(float value);
		float get_preferredHeight();
		void set_preferredHeight(float value);
		float get_flexibleWidth();
		void set_flexibleWidth(float value);
		float get_flexibleHeight();
		void set_flexibleHeight(float value);
		int32_t get_layoutPriority();
		void set_layoutPriority(int32_t value);
		void _ctor();
		void OnEnable();
		void OnTransformParentChanged();
		void OnDisable();
		void OnDidApplyAnimationProperties();
		void OnBeforeTransformParentChanged();
		void SetDirty();
	};
}

