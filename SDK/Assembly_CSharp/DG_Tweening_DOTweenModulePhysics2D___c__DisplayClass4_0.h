#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModulePhysics2D.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModulePhysics2D; };
namespace UnityEngine_Physics2DModule::UnityEngine { struct Rigidbody2D; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace DOTween::DG::Tweening { struct Sequence; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace DOTween::DG::Tweening { struct Tween; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModulePhysics2D___c__DisplayClass4_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target;
		float startPosY;
		bool offsetYSet;
		float offsetY;
		DOTween::DG::Tweening::Sequence* s;
		UnityEngine_CoreModule::UnityEngine::Vector2 endValue;
		DOTween::DG::Tweening::Tween* yTween;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector2 _DOJump_b__0();
		void _DOJump_b__1(UnityEngine_CoreModule::UnityEngine::Vector2 x);
		void _DOJump_b__2();
		UnityEngine_CoreModule::UnityEngine::Vector2 _DOJump_b__3();
		void _DOJump_b__4(UnityEngine_CoreModule::UnityEngine::Vector2 x);
		void _DOJump_b__5();
	};
}

