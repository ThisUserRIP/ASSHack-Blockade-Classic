#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::UI { struct ILayoutElement; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct LayoutUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static float GetMinSize(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis);
		static float GetPreferredSize(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis);
		static float GetFlexibleSize(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, int32_t axis);
		static float GetMinWidth(UnityEngine_CoreModule::UnityEngine::RectTransform* rect);
		static float GetPreferredWidth(UnityEngine_CoreModule::UnityEngine::RectTransform* rect);
		static float GetFlexibleWidth(UnityEngine_CoreModule::UnityEngine::RectTransform* rect);
		static float GetMinHeight(UnityEngine_CoreModule::UnityEngine::RectTransform* rect);
		static float GetPreferredHeight(UnityEngine_CoreModule::UnityEngine::RectTransform* rect);
		static float GetFlexibleHeight(UnityEngine_CoreModule::UnityEngine::RectTransform* rect);
		static float GetLayoutProperty(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* property, float defaultValue);
		static float GetLayoutProperty(UnityEngine_CoreModule::UnityEngine::RectTransform* rect, mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* property, float defaultValue, UnityEngine_UI::UnityEngine::UI::ILayoutElement& source);
	};
}

