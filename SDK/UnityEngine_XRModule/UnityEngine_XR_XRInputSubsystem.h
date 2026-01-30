#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRInputSubsystemDescriptor; };
#include "..\UnityEngine_SubsystemsModule\UnityEngine_IntegratedSubsystem_1.h"
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct XRInputSubsystem : UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem_1<UnityEngine_XRModule::UnityEngine::XR::XRInputSubsystemDescriptor>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::XRInputSubsystem>* trackingOriginUpdated;
		mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::XRInputSubsystem>* boundaryChanged;
		static void InvokeTrackingOriginUpdatedEvent(intptr_t internalPtr);
		static void InvokeBoundaryChangedEvent(intptr_t internalPtr);
		void _ctor();
	};
}

