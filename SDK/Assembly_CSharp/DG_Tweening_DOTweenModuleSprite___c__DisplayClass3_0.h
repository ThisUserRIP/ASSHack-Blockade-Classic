#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModuleSprite.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModuleSprite; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct SpriteRenderer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleSprite___c__DisplayClass3_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color to;
		UnityEngine_CoreModule::UnityEngine::SpriteRenderer* target;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Color _DOBlendableColor_b__0();
		void _DOBlendableColor_b__1(UnityEngine_CoreModule::UnityEngine::Color x);
	};
}

