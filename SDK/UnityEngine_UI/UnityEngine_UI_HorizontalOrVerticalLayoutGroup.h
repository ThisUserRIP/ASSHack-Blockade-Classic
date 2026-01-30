#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_UI_LayoutGroup.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct HorizontalOrVerticalLayoutGroup : UnityEngine_UI::UnityEngine::UI::LayoutGroup
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_Spacing;
		bool m_ChildForceExpandWidth;
		bool m_ChildForceExpandHeight;
		bool m_ChildControlWidth;
		bool m_ChildControlHeight;
		bool m_ChildScaleWidth;
		bool m_ChildScaleHeight;
		bool m_ReverseArrangement;
		float get_spacing();
		void set_spacing(float value);
		bool get_childForceExpandWidth();
		void set_childForceExpandWidth(bool value);
		bool get_childForceExpandHeight();
		void set_childForceExpandHeight(bool value);
		bool get_childControlWidth();
		void set_childControlWidth(bool value);
		bool get_childControlHeight();
		void set_childControlHeight(bool value);
		bool get_childScaleWidth();
		void set_childScaleWidth(bool value);
		bool get_childScaleHeight();
		void set_childScaleHeight(bool value);
		bool get_reverseArrangement();
		void set_reverseArrangement(bool value);
		void CalcAlongAxis(int32_t axis, bool isVertical);
		void SetChildrenAlongAxis(int32_t axis, bool isVertical);
		void GetChildSizes(UnityEngine_CoreModule::UnityEngine::RectTransform* child, int32_t axis, bool controlSize, bool childForceExpand, float& min, float& preferred, float& flexible);
		void _ctor();
	};
}

