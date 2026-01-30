#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_ShortcutExtensions.h"
namespace DOTween::DG::Tweening { struct ShortcutExtensions; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { struct Sequence; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening
{
	struct ShortcutExtensions___c__DisplayClass60_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		bool offsetYSet;
		float offsetY;
		DOTween::DG::Tweening::Sequence* s;
		UnityEngine_CoreModule::UnityEngine::Vector3 endValue;
		float startPosY;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector3 _DOLocalJump_b__0();
		void _DOLocalJump_b__1(UnityEngine_CoreModule::UnityEngine::Vector3 x);
		UnityEngine_CoreModule::UnityEngine::Vector3 _DOLocalJump_b__2();
		void _DOLocalJump_b__3(UnityEngine_CoreModule::UnityEngine::Vector3 x);
		UnityEngine_CoreModule::UnityEngine::Vector3 _DOLocalJump_b__4();
		void _DOLocalJump_b__5(UnityEngine_CoreModule::UnityEngine::Vector3 x);
		void _DOLocalJump_b__6();
	};
}

