#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FBIKChain; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKEffector; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMappingSpine; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMappingBone; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMappingLimb; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_UpdateDelegate; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_IterationDelegate; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Node; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Point; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverFullBody : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t iterations;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain*>* chain;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector*>* effectors;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine* spineMapping;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingBone*>* boneMappings;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb*>* limbMappings;
		bool FABRIKPass;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreRead;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreSolve;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPreIteration;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPostIteration;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreBend;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostSolve;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnStoreDefaultLocalState;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnFixTransforms;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* GetEffector(UnityEngine_CoreModule::UnityEngine::Transform* t);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain* GetChain(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		int32_t GetChainIndex(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Node* GetNode(int32_t chainIndex, int32_t nodeIndex);
		void GetChainAndNodeIndexes(UnityEngine_CoreModule::UnityEngine::Transform* transform, int32_t& chainIndex, int32_t& nodeIndex);
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>* GetPoints();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* GetPoint(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		bool IsValid(mscorlib::System::String& message);
		void StoreDefaultLocalState();
		void FixTransforms();
		void OnInitiate();
		void OnUpdate();
		void ReadPose();
		void Solve();
		void ApplyBendConstraints();
		void WritePose();
		void _ctor();
	};
}

