#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModuleUI.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModuleUI; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleUI_Utils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Vector2 SwitchToRectTransform(UnityEngine_CoreModule::UnityEngine::RectTransform* from, UnityEngine_CoreModule::UnityEngine::RectTransform* to);
	};
}

