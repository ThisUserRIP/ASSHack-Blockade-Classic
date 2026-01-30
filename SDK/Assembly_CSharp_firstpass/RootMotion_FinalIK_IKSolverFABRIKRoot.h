#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FABRIKChain; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Point; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverFABRIKRoot : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t iterations;
		float rootPin;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::FABRIKChain*>* chains;
		bool zeroWeightApplied;
		IL2CPP::Array<bool>* isRoot;
		UnityEngine_CoreModule::UnityEngine::Vector3 rootDefaultPosition;
		bool IsValid(mscorlib::System::String& message);
		void StoreDefaultLocalState();
		void FixTransforms();
		void OnInitiate();
		bool IsRoot(int32_t index);
		void OnUpdate();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>* GetPoints();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* GetPoint(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void AddPointsToArray(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>& array, Assembly_CSharp_firstpass::RootMotion::FinalIK::FABRIKChain* chain);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetCentroid();
		void _ctor();
	};
}

