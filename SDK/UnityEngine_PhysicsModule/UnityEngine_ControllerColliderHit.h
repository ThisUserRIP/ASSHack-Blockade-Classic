#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct CharacterController; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct ControllerColliderHit : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_PhysicsModule::UnityEngine::CharacterController* m_Controller;
		UnityEngine_PhysicsModule::UnityEngine::Collider* m_Collider;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Point;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Normal;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_MoveDirection;
		float m_MoveLength;
		int32_t m_Push;
		UnityEngine_PhysicsModule::UnityEngine::Collider* get_collider();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_moveDirection();
	};
}

