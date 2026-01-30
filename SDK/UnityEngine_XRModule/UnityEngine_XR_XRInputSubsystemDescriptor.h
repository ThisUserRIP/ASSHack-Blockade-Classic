#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRInputSubsystem; };
#include "..\UnityEngine_SubsystemsModule\UnityEngine_IntegratedSubsystemDescriptor_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct XRInputSubsystemDescriptor : UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine_XRModule::UnityEngine::XR::XRInputSubsystem>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

