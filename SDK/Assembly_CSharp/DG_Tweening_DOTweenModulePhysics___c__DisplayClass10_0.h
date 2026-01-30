#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModulePhysics.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModulePhysics; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModulePhysics___c__DisplayClass10_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* trans;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* target;
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Vector3 _DOLocalPath_b__0();
		void _DOLocalPath_b__1(UnityEngine_CoreModule::UnityEngine::Vector3 x);
	};
}

