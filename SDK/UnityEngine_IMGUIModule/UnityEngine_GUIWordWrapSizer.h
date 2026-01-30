#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_GUILayoutEntry.h"
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutOption; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUIWordWrapSizer : UnityEngine_IMGUIModule::UnityEngine::GUILayoutEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_IMGUIModule::UnityEngine::GUIContent* m_Content;
		float m_ForcedMinHeight;
		float m_ForcedMaxHeight;
		void _ctor(UnityEngine_IMGUIModule::UnityEngine::GUIStyle* style, UnityEngine_IMGUIModule::UnityEngine::GUIContent* content, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		void CalcWidth();
		void CalcHeight();
	};
}

