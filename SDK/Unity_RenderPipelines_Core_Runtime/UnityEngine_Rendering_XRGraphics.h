#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_Rendering_XRGraphics_StereoRenderingMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct XRGraphics : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static float get_eyeTextureResolutionScale();
		static void set_eyeTextureResolutionScale(float value);
		static float get_renderViewportScale();
		static bool get_enabled();
		static bool get_isDeviceActive();
		static mscorlib::System::String* get_loadedDeviceName();
		static IL2CPP::Array<mscorlib::System::String*>* get_supportedDevices();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::XRGraphics_StereoRenderingMode get_stereoRenderingMode();
		static UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc();
		static int32_t get_eyeTextureWidth();
		static int32_t get_eyeTextureHeight();
		void _ctor();
	};
}

