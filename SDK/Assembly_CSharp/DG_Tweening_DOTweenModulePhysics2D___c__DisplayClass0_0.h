#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModulePhysics2D.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModulePhysics2D; };
namespace UnityEngine_Physics2DModule::UnityEngine { struct Rigidbody2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModulePhysics2D___c__DisplayClass0_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D* target;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector2 _DOMove_b__0();
	};
}

