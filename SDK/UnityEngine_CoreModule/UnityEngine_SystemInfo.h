#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "UnityEngine_OperatingSystemFamily.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_DeviceType.h"
#include "UnityEngine_Rendering_GraphicsDeviceType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_CopyTextureSupport.h"
namespace mscorlib::System { struct Enum; };
#include "UnityEngine_RenderTextureFormat.h"
#include "UnityEngine_TextureFormat.h"
#include "UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "UnityEngine_Experimental_Rendering_FormatUsage.h"
#include "UnityEngine_Experimental_Rendering_DefaultFormat.h"
#include "UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct SystemInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* get_operatingSystem();
		static UnityEngine_CoreModule::UnityEngine::OperatingSystemFamily get_operatingSystemFamily();
		static mscorlib::System::String* get_processorType();
		static int32_t get_processorCount();
		static int32_t get_systemMemorySize();
		static mscorlib::System::String* get_deviceUniqueIdentifier();
		static mscorlib::System::String* get_deviceName();
		static mscorlib::System::String* get_deviceModel();
		static UnityEngine_CoreModule::UnityEngine::DeviceType get_deviceType();
		static int32_t get_graphicsMemorySize();
		static mscorlib::System::String* get_graphicsDeviceName();
		static mscorlib::System::String* get_graphicsDeviceVendor();
		static UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsDeviceType get_graphicsDeviceType();
		static bool get_graphicsUVStartsAtTop();
		static mscorlib::System::String* get_graphicsDeviceVersion();
		static int32_t get_graphicsShaderLevel();
		static bool get_hasHiddenSurfaceRemovalOnGPU();
		static bool get_supportsShadows();
		static bool get_supportsRenderTextures();
		static bool get_supportsImageEffects();
		static bool get_supports3DTextures();
		static UnityEngine_CoreModule::UnityEngine::Rendering::CopyTextureSupport get_copyTextureSupport();
		static bool get_supportsComputeShaders();
		static bool get_supportsRenderTargetArrayIndexFromVertexShader();
		static bool get_supportsInstancing();
		static int32_t get_supportedRenderTargetCount();
		static int32_t get_supportedRandomWriteTargetCount();
		static int32_t get_supportsMultisampledTextures();
		static bool get_supportsMultisampleAutoResolve();
		static bool get_usesReversedZBuffer();
		static bool IsValidEnumValue(mscorlib::System::Enum* value);
		static bool SupportsRenderTextureFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format);
		static bool SupportsTextureFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format);
		static int32_t get_maxTextureSize();
		static bool get_supportsGraphicsFence();
		static bool get_supportsMultiview();
		static bool get_supportsStoreAndResolveAction();
		static mscorlib::System::String* GetOperatingSystem();
		static UnityEngine_CoreModule::UnityEngine::OperatingSystemFamily GetOperatingSystemFamily();
		static mscorlib::System::String* GetProcessorType();
		static int32_t GetProcessorCount();
		static int32_t GetPhysicalMemoryMB();
		static mscorlib::System::String* GetDeviceUniqueIdentifier();
		static mscorlib::System::String* GetDeviceName();
		static mscorlib::System::String* GetDeviceModel();
		static UnityEngine_CoreModule::UnityEngine::DeviceType GetDeviceType();
		static int32_t GetGraphicsMemorySize();
		static mscorlib::System::String* GetGraphicsDeviceName();
		static mscorlib::System::String* GetGraphicsDeviceVendor();
		static UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsDeviceType GetGraphicsDeviceType();
		static bool GetGraphicsUVStartsAtTop();
		static mscorlib::System::String* GetGraphicsDeviceVersion();
		static int32_t GetGraphicsShaderLevel();
		static bool HasHiddenSurfaceRemovalOnGPU();
		static bool SupportsShadows();
		static bool Supports3DTextures();
		static UnityEngine_CoreModule::UnityEngine::Rendering::CopyTextureSupport GetCopyTextureSupport();
		static bool SupportsComputeShaders();
		static bool SupportsRenderTargetArrayIndexFromVertexShader();
		static bool SupportsInstancing();
		static int32_t SupportedRenderTargetCount();
		static int32_t SupportedRandomWriteTargetCount();
		static int32_t SupportsMultisampledTextures();
		static bool SupportsMultisampleAutoResolve();
		static bool UsesReversedZBuffer();
		static bool HasRenderTextureNative(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format);
		static bool SupportsTextureFormatNative(UnityEngine_CoreModule::UnityEngine::TextureFormat format);
		static int32_t GetMaxTextureSize();
		static bool SupportsGPUFence();
		static bool IsFormatSupported(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::FormatUsage usage);
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::FormatUsage usage);
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::DefaultFormat format);
		static int32_t GetRenderTextureSupportedMSAASampleCount(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc);
		static bool SupportsMultiview();
		static bool SupportsStoreAndResolveAction();
		static int32_t GetRenderTextureSupportedMSAASampleCount_Injected(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor& desc);
	};
}

