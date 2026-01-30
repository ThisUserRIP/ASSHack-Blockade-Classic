#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct ContactPoint
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Point;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Normal;
		int32_t m_ThisColliderInstanceID;
		int32_t m_OtherColliderInstanceID;
		float m_Separation;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_point();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_normal();
		UnityEngine_PhysicsModule::UnityEngine::Collider* get_otherCollider();
		static UnityEngine_PhysicsModule::UnityEngine::Collider* GetColliderByInstanceID(int32_t instanceID);
	};
}

