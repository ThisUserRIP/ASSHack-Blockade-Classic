#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "RootMotion_FinalIK_Finger_DOF.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverLimb; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Finger : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float weight;
		float rotationWeight;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Finger_DOF rotationDOF;
		UnityEngine_CoreModule::UnityEngine::Transform* bone1;
		UnityEngine_CoreModule::UnityEngine::Transform* bone2;
		UnityEngine_CoreModule::UnityEngine::Transform* bone3;
		UnityEngine_CoreModule::UnityEngine::Transform* tip;
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		bool _initiated_k__BackingField;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb* solver;
		UnityEngine_CoreModule::UnityEngine::Quaternion bone3RelativeToTarget;
		UnityEngine_CoreModule::UnityEngine::Vector3 bone3DefaultLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion bone3DefaultLocalRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 bone1Axis;
		UnityEngine_CoreModule::UnityEngine::Vector3 tipAxis;
		bool get_initiated();
		void set_initiated(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_IKPosition();
		void set_IKPosition(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Quaternion get_IKRotation();
		void set_IKRotation(UnityEngine_CoreModule::UnityEngine::Quaternion value);
		bool IsValid(mscorlib::System::String& errorMessage);
		void Initiate(UnityEngine_CoreModule::UnityEngine::Transform* hand, int32_t index);
		void FixTransforms();
		void StoreDefaultLocalState();
		void Update(float masterWeight);
		void _ctor();
	};
}

