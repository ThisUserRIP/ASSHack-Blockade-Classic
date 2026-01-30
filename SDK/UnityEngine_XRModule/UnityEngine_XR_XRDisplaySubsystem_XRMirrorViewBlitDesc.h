#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_XR_XRDisplaySubsystem.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRBlitParams; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRDisplaySubsystem_XRBlitParams; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct XRDisplaySubsystem_XRMirrorViewBlitDesc
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t displaySubsystemInstance;
		bool nativeBlitAvailable;
		bool nativeBlitInvalidStates;
		int32_t blitParamsCount;
		void GetBlitParameter(int32_t blitParameterIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams& blitParameter);
		static void GetBlitParameter_Injected(UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc& _unity_self, int32_t blitParameterIndex, UnityEngine_XRModule::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams& blitParameter);
	};
}

