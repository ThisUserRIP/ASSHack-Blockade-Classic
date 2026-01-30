#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_GUILayoutEntry.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUILayoutOption; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct GUIAspectSizer : UnityEngine_IMGUIModule::UnityEngine::GUILayoutEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float aspect;
		void _ctor(float aspect, IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUILayoutOption*>* options);
		void CalcHeight();
	};
}

