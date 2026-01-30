#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IK; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct TwistRelaxer : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IK* ik;
		UnityEngine_CoreModule::UnityEngine::Transform* parent;
		UnityEngine_CoreModule::UnityEngine::Transform* child;
		float weight;
		float parentChildCrossfade;
		float twistAngleOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 twistAxis;
		UnityEngine_CoreModule::UnityEngine::Vector3 axis;
		UnityEngine_CoreModule::UnityEngine::Vector3 axisRelativeToParentDefault;
		UnityEngine_CoreModule::UnityEngine::Vector3 axisRelativeToChildDefault;
		void Relax();
		void Start();
		void OnPostUpdate();
		void LateUpdate();
		void OnDestroy();
		void _ctor();
	};
}

