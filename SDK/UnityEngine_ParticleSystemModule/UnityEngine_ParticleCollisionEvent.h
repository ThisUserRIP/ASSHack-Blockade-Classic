#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_ParticleSystemModule::UnityEngine
{
	struct ParticleCollisionEvent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Intersection;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Normal;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Velocity;
		int32_t m_ColliderInstanceID;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_intersection();
	};
}

