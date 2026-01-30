#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_BipedLimbOrientations.h"
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedLimbOrientations; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct BipedLimbOrientations_LimbOrientation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 upperBoneForwardAxis;
		UnityEngine_CoreModule::UnityEngine::Vector3 lowerBoneForwardAxis;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastBoneLeftAxis;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector3 upperBoneForwardAxis, UnityEngine_CoreModule::UnityEngine::Vector3 lowerBoneForwardAxis, UnityEngine_CoreModule::UnityEngine::Vector3 lastBoneLeftAxis);
	};
}

