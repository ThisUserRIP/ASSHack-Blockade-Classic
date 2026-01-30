#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModulePhysics.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModulePhysics; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModulePhysics___c__DisplayClass4_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Quaternion _DORotate_b__0();
	};
}

