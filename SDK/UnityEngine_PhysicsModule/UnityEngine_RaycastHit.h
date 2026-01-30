#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct RaycastHit
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Point;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Normal;
		uint32_t m_FaceID;
		float m_Distance;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_UV;
		int32_t m_Collider;
		UnityEngine_PhysicsModule::UnityEngine::Collider* get_collider();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_point();
		void set_point(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_normal();
		void set_normal(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void set_barycentricCoordinate(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		float get_distance();
		void set_distance(float value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_transform();
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* get_rigidbody();
	};
}

