#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_Poser.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct HandPoser : Assembly_CSharp_firstpass::RootMotion::FinalIK::Poser
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* children;
		UnityEngine_CoreModule::UnityEngine::Transform* _poseRoot;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* poseChildren;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* defaultLocalPositions;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* defaultLocalRotations;
		void AutoMapping();
		void InitiatePoser();
		void FixPoserTransforms();
		void UpdatePoser();
		void StoreDefaultState();
		void _ctor();
	};
}

