#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_GUILayout.h"
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayout; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUI_WindowFunction; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutOption; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUILayout_LayoutedWindow : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* m_Func;
		UnityEngine_CoreModule::UnityEngine::Rect m_ScreenRect;
		IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* m_Options;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* m_Style;
		void _ctor(UnityEngine_IMGUIModule::UnityEngine::GUI_WindowFunction* f, UnityEngine_CoreModule::UnityEngine::Rect screenRect, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style);
		void DoWindow(int32_t windowID);
	};
}

