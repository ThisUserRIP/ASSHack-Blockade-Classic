#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_ShortcutExtensions.h"
namespace DOTween::DG::Tweening { struct ShortcutExtensions; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace DOTween::DG::Tweening
{
	struct ShortcutExtensions___c__DisplayClass27_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Material* target;
		mscorlib::System::String* property;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector2 _DOTiling_b__0();
		void _DOTiling_b__1(UnityEngine_CoreModule::UnityEngine::Vector2 x);
	};
}

