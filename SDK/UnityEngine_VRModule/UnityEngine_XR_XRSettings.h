#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_XR_XRSettings_StereoRenderingMode.h"

namespace UnityEngine_VRModule::UnityEngine::XR
{
	struct XRSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool get_enabled();
		static bool get_isDeviceActive();
		static float get_eyeTextureResolutionScale();
		static void set_eyeTextureResolutionScale(float value);
		static int32_t get_eyeTextureWidth();
		static int32_t get_eyeTextureHeight();
		static UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc();
		static float get_renderViewportScale();
		static float get_renderViewportScaleInternal();
		static mscorlib::System::String* get_loadedDeviceName();
		static IL2CPP::Array<mscorlib::System::String*>* get_supportedDevices();
		static UnityEngine_VRModule::UnityEngine::XR::XRSettings_StereoRenderingMode get_stereoRenderingMode();
		static void get_eyeTextureDesc_Injected(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor& ret);
	};
}

