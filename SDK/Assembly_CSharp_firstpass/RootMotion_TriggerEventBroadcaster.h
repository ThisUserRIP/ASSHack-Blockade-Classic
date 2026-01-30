#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct TriggerEventBroadcaster : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* target;
		void OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* collider);
		void OnTriggerStay(UnityEngine_PhysicsModule::UnityEngine::Collider* collider);
		void OnTriggerExit(UnityEngine_PhysicsModule::UnityEngine::Collider* collider);
		void _ctor();
	};
}

