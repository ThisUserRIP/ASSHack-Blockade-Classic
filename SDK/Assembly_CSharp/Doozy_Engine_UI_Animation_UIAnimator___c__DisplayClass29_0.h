#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_Animation_UIAnimator.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimator; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace DOTween::DG::Tweening { struct TweenCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	struct UIAnimator___c__DisplayClass29_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback;
		UnityEngine_CoreModule::UnityEngine::RectTransform* target;
		UnityEngine_CoreModule::UnityEngine::Vector3 startValue;
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback;
		DOTween::DG::Tweening::TweenCallback* __9__2;
		void _ctor();
		void _ScalePunch_b__0();
		void _ScalePunch_b__1();
		void _ScalePunch_b__2();
	};
}

