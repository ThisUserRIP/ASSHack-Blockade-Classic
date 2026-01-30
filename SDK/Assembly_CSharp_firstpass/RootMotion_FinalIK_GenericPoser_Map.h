#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_GenericPoser.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct GenericPoser; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct GenericPoser_Map : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* bone;
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		UnityEngine_CoreModule::UnityEngine::Vector3 defaultLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion defaultLocalRotation;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* bone, UnityEngine_CoreModule::UnityEngine::Transform* target);
		void StoreDefaultState();
		void FixTransform();
		void Update(float localRotationWeight, float localPositionWeight);
	};
}

