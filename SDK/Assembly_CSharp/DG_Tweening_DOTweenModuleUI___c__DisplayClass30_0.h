#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModuleUI.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModuleUI; };
namespace UnityEngine_UI::UnityEngine::UI { struct ScrollRect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleUI___c__DisplayClass30_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::ScrollRect* target;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector2 _DONormalizedPos_b__0();
		void _DONormalizedPos_b__1(UnityEngine_CoreModule::UnityEngine::Vector2 x);
	};
}

