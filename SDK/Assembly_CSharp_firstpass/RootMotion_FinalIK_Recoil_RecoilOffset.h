#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_Recoil.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Recoil; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Recoil_RecoilOffset_EffectorLink; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBodyBiped; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Recoil_RecoilOffset : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		float additivity;
		float maxAdditiveOffsetMag;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::Recoil_RecoilOffset_EffectorLink*>* effectorLinks;
		UnityEngine_CoreModule::UnityEngine::Vector3 additiveOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastOffset;
		void Start();
		void Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, UnityEngine_CoreModule::UnityEngine::Quaternion rotation, float masterWeight, float length, float timeLeft);
		void _ctor();
	};
}

