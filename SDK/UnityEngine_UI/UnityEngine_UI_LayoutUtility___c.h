#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_UI_LayoutUtility.h"
namespace UnityEngine_UI::UnityEngine::UI { struct LayoutUtility; };
namespace UnityEngine_UI::UnityEngine::UI { struct ILayoutElement; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct LayoutUtility___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::LayoutUtility___c* __9;
			mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* __9__3_0;
			mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* __9__4_0;
			mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* __9__4_1;
			mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* __9__5_0;
			mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* __9__6_0;
			mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* __9__7_0;
			mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* __9__7_1;
			mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::ILayoutElement, mscorlib::System::Single>* __9__8_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		float _GetMinWidth_b__3_0(UnityEngine_UI::UnityEngine::UI::ILayoutElement* e);
		float _GetPreferredWidth_b__4_0(UnityEngine_UI::UnityEngine::UI::ILayoutElement* e);
		float _GetPreferredWidth_b__4_1(UnityEngine_UI::UnityEngine::UI::ILayoutElement* e);
		float _GetFlexibleWidth_b__5_0(UnityEngine_UI::UnityEngine::UI::ILayoutElement* e);
		float _GetMinHeight_b__6_0(UnityEngine_UI::UnityEngine::UI::ILayoutElement* e);
		float _GetPreferredHeight_b__7_0(UnityEngine_UI::UnityEngine::UI::ILayoutElement* e);
		float _GetPreferredHeight_b__7_1(UnityEngine_UI::UnityEngine::UI::ILayoutElement* e);
		float _GetFlexibleHeight_b__8_0(UnityEngine_UI::UnityEngine::UI::ILayoutElement* e);
	};
}

