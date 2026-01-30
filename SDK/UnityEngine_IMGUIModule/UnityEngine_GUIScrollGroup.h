#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_GUILayoutGroup.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUIScrollGroup : UnityEngine_IMGUIModule::UnityEngine::GUILayoutGroup
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float calcMinWidth;
		float calcMaxWidth;
		float calcMinHeight;
		float calcMaxHeight;
		float clientWidth;
		float clientHeight;
		bool allowHorizontalScroll;
		bool allowVerticalScroll;
		bool needsHorizontalScrollbar;
		bool needsVerticalScrollbar;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* horizontalScrollbar;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* verticalScrollbar;
		void _ctor();
		void CalcWidth();
		void SetHorizontal(float x, float width);
		void CalcHeight();
		void SetVertical(float y, float height);
	};
}

