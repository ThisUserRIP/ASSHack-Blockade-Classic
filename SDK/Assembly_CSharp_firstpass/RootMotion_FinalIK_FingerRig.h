#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_SolverManager.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Finger; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct FingerRig : Assembly_CSharp_firstpass::RootMotion::SolverManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float weight;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::Finger*>* fingers;
		bool _initiated_k__BackingField;
		bool get_initiated();
		void set_initiated(bool value);
		bool IsValid(mscorlib::System::String& errorMessage);
		void AutoDetect();
		void AddFinger(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, UnityEngine_CoreModule::UnityEngine::Transform* tip, UnityEngine_CoreModule::UnityEngine::Transform* target);
		void RemoveFinger(int32_t index);
		void AddChildrenRecursive(UnityEngine_CoreModule::UnityEngine::Transform* parent, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>& array);
		void InitiateSolver();
		void UpdateFingerSolvers();
		void FixFingerTransforms();
		void StoreDefaultLocalState();
		void UpdateSolver();
		void FixTransforms();
		void _ctor();
	};
}

