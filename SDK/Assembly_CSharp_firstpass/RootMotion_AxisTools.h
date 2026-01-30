#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "RootMotion_Axis.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct AxisTools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Vector3 ToVector3(Assembly_CSharp_firstpass::RootMotion::Axis axis);
		static Assembly_CSharp_firstpass::RootMotion::Axis ToAxis(UnityEngine_CoreModule::UnityEngine::Vector3 v);
		static Assembly_CSharp_firstpass::RootMotion::Axis GetAxisToPoint(UnityEngine_CoreModule::UnityEngine::Transform* t, UnityEngine_CoreModule::UnityEngine::Vector3 worldPosition);
		static Assembly_CSharp_firstpass::RootMotion::Axis GetAxisToDirection(UnityEngine_CoreModule::UnityEngine::Transform* t, UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetAxisVectorToPoint(UnityEngine_CoreModule::UnityEngine::Transform* t, UnityEngine_CoreModule::UnityEngine::Vector3 worldPosition);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetAxisVectorToDirection(UnityEngine_CoreModule::UnityEngine::Transform* t, UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		void _ctor();
	};
}

