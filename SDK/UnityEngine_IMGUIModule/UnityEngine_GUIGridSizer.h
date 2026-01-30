#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_GUILayoutEntry.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutOption; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUIGridSizer : UnityEngine_IMGUIModule::UnityEngine::GUILayoutEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Count;
		int32_t m_XCount;
		float m_MinButtonWidth;
		float m_MaxButtonWidth;
		float m_MinButtonHeight;
		float m_MaxButtonHeight;
		static UnityEngine_CoreModule::UnityEngine::Rect GetRect(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		void _ctor(IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* contents, int32_t xCount, UnityEngine_IMGUIModule::UnityEngine::GUIStyle* buttonStyle, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		int32_t get_rows();
	};
}

