#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_ShortcutExtensions.h"
namespace DOTween::DG::Tweening { struct ShortcutExtensions; };
#include "DG_Tweening_Color2.h"
namespace DOTween::DG::Tweening { struct Color2; };
namespace UnityEngine_CoreModule::UnityEngine { struct LineRenderer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening
{
	struct ShortcutExtensions___c__DisplayClass15_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		DOTween::DG::Tweening::Color2 startValue;
		UnityEngine_CoreModule::UnityEngine::LineRenderer* target;
		void _ctor();
		DOTween::DG::Tweening::Color2 _DOColor_b__0();
		void _DOColor_b__1(DOTween::DG::Tweening::Color2 x);
	};
}

