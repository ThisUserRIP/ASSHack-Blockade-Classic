#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_Physics2DModule::UnityEngine
{
	struct ContactPoint2D
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 m_Point;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_Normal;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_RelativeVelocity;
		float m_Separation;
		float m_NormalImpulse;
		float m_TangentImpulse;
		int32_t m_Collider;
		int32_t m_OtherCollider;
		int32_t m_Rigidbody;
		int32_t m_OtherRigidbody;
		int32_t m_Enabled;
	};
}

