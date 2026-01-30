#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_Animation_UIAnimator.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimator; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityAction; };
namespace DOTween::DG::Tweening { struct Sequence; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	struct UIAnimator___c__DisplayClass25_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onCompleteCallback;
		UnityEngine_CoreModule::UnityEngine::Events::UnityAction* onStartCallback;
		DOTween::DG::Tweening::Sequence* loopSequence;
		void _ctor();
		void _ScaleLoop_b__0();
		void _ScaleLoop_b__1();
		void _ScaleLoop_b__2();
		void _ScaleLoop_b__3();
	};
}

