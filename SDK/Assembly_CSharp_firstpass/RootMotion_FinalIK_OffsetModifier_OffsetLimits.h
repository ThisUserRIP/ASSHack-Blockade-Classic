#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_OffsetModifier.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct OffsetModifier; };
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKEffector; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct OffsetModifier_OffsetLimits : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector;
		float spring;
		bool x;
		bool y;
		bool z;
		float minX;
		float maxX;
		float minY;
		float maxY;
		float minZ;
		float maxZ;
		void Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* e, UnityEngine_CoreModule::UnityEngine::Quaternion rootRotation);
		float SpringAxis(float value, float min, float max);
		float Spring(float value, float limit, bool negative);
		void _ctor();
	};
}

