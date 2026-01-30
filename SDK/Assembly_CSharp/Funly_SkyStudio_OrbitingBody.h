#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp::Funly::SkyStudio { struct RotateBody; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SpherePoint; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct OrbitingBody : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* m_PositionTransform;
		Assembly_CSharp::Funly::SkyStudio::RotateBody* m_RotateBody;
		Assembly_CSharp::Funly::SkyStudio::SpherePoint* m_SpherePoint;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_CachedWorldDirection;
		UnityEngine_CoreModule::UnityEngine::Light* m_BodyLight;
		UnityEngine_CoreModule::UnityEngine::Transform* get_positionTransform();
		Assembly_CSharp::Funly::SkyStudio::RotateBody* get_rotateBody();
		Assembly_CSharp::Funly::SkyStudio::SpherePoint* get_Point();
		void set_Point(Assembly_CSharp::Funly::SkyStudio::SpherePoint* value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_BodyGlobalDirection();
		UnityEngine_CoreModule::UnityEngine::Light* get_BodyLight();
		void ResetOrbit();
		void LayoutOribit();
		void OnValidate();
		void _ctor();
	};
}

