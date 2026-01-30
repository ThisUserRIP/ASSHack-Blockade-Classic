#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_ShortcutExtensions.h"
namespace DOTween::DG::Tweening { struct ShortcutExtensions; };
namespace UnityEngine_CoreModule::UnityEngine { struct TrailRenderer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace DOTween::DG::Tweening
{
	struct ShortcutExtensions___c__DisplayClass31_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::TrailRenderer* target;
		void _ctor();
		float _DOTime_b__0();
		void _DOTime_b__1(float x);
	};
}

