#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_UpdateDelegate; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Point; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Bone; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolver : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition;
		float IKPositionWeight;
		bool _initiated_k__BackingField;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreInitiate;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostInitiate;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPreUpdate;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_UpdateDelegate* OnPostUpdate;
		bool firstInitiation;
		UnityEngine_CoreModule::UnityEngine::Transform* root;
		bool IsValid();
		bool IsValid(mscorlib::System::String& message);
		void Initiate(UnityEngine_CoreModule::UnityEngine::Transform* root);
		void Update();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetIKPosition();
		void SetIKPosition(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		float GetIKPositionWeight();
		void SetIKPositionWeight(float weight);
		UnityEngine_CoreModule::UnityEngine::Transform* GetRoot();
		bool get_initiated();
		void set_initiated(bool value);
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>* GetPoints();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* GetPoint(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void FixTransforms();
		void StoreDefaultLocalState();
		void OnInitiate();
		void OnUpdate();
		void LogWarning(mscorlib::System::String* message);
		static UnityEngine_CoreModule::UnityEngine::Transform* ContainsDuplicateBone(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Bone*>* bones);
		static bool HierarchyIsValid(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Bone*>* bones);
		static float PreSolveBones(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Bone*>& bones);
		void _ctor();
	};
}

