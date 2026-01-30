#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_Constraint.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct ConstraintPositionOffset : Assembly_CSharp_firstpass::RootMotion::FinalIK::Constraint
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		UnityEngine_CoreModule::UnityEngine::Vector3 defaultLocalPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastLocalPosition;
		bool initiated;
		void UpdateConstraint();
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		bool get_positionChanged();
	};
}

