#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModuleUI.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModuleUI; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleUI___c__DisplayClass27_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* target;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector3 _DOShakeAnchorPos_b__0();
		void _DOShakeAnchorPos_b__1(UnityEngine_CoreModule::UnityEngine::Vector3 x);
	};
}

