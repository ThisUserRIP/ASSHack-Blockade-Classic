#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "vp_Spring_UpdateMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct vp_Spring_UpdateDelegate; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_Spring : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_Spring_UpdateMode Mode;
		bool m_AutoUpdate;
		Assembly_CSharp::vp_Spring_UpdateDelegate* m_UpdateFunc;
		UnityEngine_CoreModule::UnityEngine::Vector3 State;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Velocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 RestState;
		UnityEngine_CoreModule::UnityEngine::Vector3 Stiffness;
		UnityEngine_CoreModule::UnityEngine::Vector3 Damping;
		float m_VelocityFadeInCap;
		float m_VelocityFadeInEndTime;
		float m_VelocityFadeInLength;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_SoftForceFrame;
		float MaxVelocity;
		float MinVelocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 MaxState;
		UnityEngine_CoreModule::UnityEngine::Vector3 MinState;
		UnityEngine_CoreModule::UnityEngine::Transform* m_Transform;
		void set_Transform(UnityEngine_CoreModule::UnityEngine::Transform* value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* transform, Assembly_CSharp::vp_Spring_UpdateMode mode, bool autoUpdate);
		void FixedUpdate();
		void Position();
		void Rotation();
		void Scale();
		void PositionAdditive();
		void RotationAdditive();
		void ScaleAdditive();
		void None();
		void RefreshUpdateMode();
		void Calculate();
		void AddForceInternal(UnityEngine_CoreModule::UnityEngine::Vector3 force);
		void AddForce(UnityEngine_CoreModule::UnityEngine::Vector3 force);
		void AddSoftForce(UnityEngine_CoreModule::UnityEngine::Vector3 force, float frames);
		void Move();
		void Reset();
		void Stop(bool includeSoftForce);
		void StopSoftForce();
		void ForceVelocityFadeIn(float seconds);
	};
}

