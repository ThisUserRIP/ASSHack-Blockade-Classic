#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_ShortcutExtensions.h"
namespace DOTween::DG::Tweening { struct ShortcutExtensions; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening
{
	struct ShortcutExtensions___c__DisplayClass73_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Quaternion to;
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Quaternion _DOBlendableLocalRotateBy_b__0();
		void _DOBlendableLocalRotateBy_b__1(UnityEngine_CoreModule::UnityEngine::Quaternion x);
	};
}

