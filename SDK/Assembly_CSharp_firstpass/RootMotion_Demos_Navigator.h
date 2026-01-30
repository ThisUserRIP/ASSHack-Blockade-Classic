#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "RootMotion_Demos_Navigator_State.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_AIModule::UnityEngine::AI { struct NavMeshPath; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::Demos
{
	struct Navigator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool activeTargetSeeking;
		float cornerRadius;
		float recalculateOnPathDistance;
		float maxSampleDistance;
		float nextPathInterval;
		UnityEngine_CoreModule::UnityEngine::Vector3 _normalizedDeltaPosition_k__BackingField;
		Assembly_CSharp_firstpass::RootMotion::Demos::Navigator_State _state_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* transform;
		int32_t cornerIndex;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* corners;
		UnityEngine_AIModule::UnityEngine::AI::NavMeshPath* path;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastTargetPosition;
		bool initiated;
		float nextPathTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_normalizedDeltaPosition();
		void set_normalizedDeltaPosition(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		Assembly_CSharp_firstpass::RootMotion::Demos::Navigator_State get_state();
		void set_state(Assembly_CSharp_firstpass::RootMotion::Demos::Navigator_State value);
		void Initiate(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void Update(UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition);
		void CalculatePath(UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition);
		bool Find(UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition);
		void Stop();
		float HorDistance(UnityEngine_CoreModule::UnityEngine::Vector3 p1, UnityEngine_CoreModule::UnityEngine::Vector3 p2);
		void Visualize();
		void _ctor();
	};
}

