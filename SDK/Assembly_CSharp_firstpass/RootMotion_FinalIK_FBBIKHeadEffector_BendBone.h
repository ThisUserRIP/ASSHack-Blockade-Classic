#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_FBBIKHeadEffector.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FBBIKHeadEffector; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct FBBIKHeadEffector_BendBone : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* transform;
		float weight;
		UnityEngine_CoreModule::UnityEngine::Quaternion defaultLocalRotation;
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* transform, float weight);
		void StoreDefaultLocalState();
		void FixTransforms();
	};
}

