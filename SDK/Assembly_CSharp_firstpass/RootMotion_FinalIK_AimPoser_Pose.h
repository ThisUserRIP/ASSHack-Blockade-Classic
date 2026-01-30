#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_AimPoser.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct AimPoser; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct AimPoser_Pose : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool visualize;
		mscorlib::System::String* name;
		UnityEngine_CoreModule::UnityEngine::Vector3 direction;
		float yaw;
		float pitch;
		float angleBuffer;
		bool IsInDirection(UnityEngine_CoreModule::UnityEngine::Vector3 d);
		void SetAngleBuffer(float value);
		void _ctor();
	};
}

