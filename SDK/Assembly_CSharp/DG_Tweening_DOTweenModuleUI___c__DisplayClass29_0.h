#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModuleUI.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModuleUI; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace DOTween::DG::Tweening { struct Sequence; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleUI___c__DisplayClass29_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::RectTransform* target;
		float startPosY;
		bool offsetYSet;
		float offsetY;
		DOTween::DG::Tweening::Sequence* s;
		UnityEngine_CoreModule::UnityEngine::Vector2 endValue;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector2 _DOJumpAnchorPos_b__0();
		void _DOJumpAnchorPos_b__1(UnityEngine_CoreModule::UnityEngine::Vector2 x);
		void _DOJumpAnchorPos_b__2();
		UnityEngine_CoreModule::UnityEngine::Vector2 _DOJumpAnchorPos_b__3();
		void _DOJumpAnchorPos_b__4(UnityEngine_CoreModule::UnityEngine::Vector2 x);
		void _DOJumpAnchorPos_b__5();
	};
}

