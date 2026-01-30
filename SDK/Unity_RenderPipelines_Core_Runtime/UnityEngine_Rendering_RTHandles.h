#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandleSystem; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_RTHandleProperties.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandleProperties; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandle; };
#include "UnityEngine_Rendering_DepthBits.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "..\UnityEngine_CoreModule\UnityEngine_FilterMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_TextureWrapMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_TextureDimension.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Rendering_MSAASamples.h"
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureMemoryless.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ScaleFunc; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct RTHandles : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem* s_DefaultInstance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_maxWidth();
		static int32_t get_maxHeight();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::Vector2 scaleFactor, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ScaleFunc* scaleFunc, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::Texture* tex);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::RenderTexture* tex);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier tex);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier tex, mscorlib::System::String* name);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* tex);
		static void Initialize(int32_t width, int32_t height, bool scaledRTsupportsMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples scaledRTMSAASamples);
		static void Release(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rth);
		static void SetHardwareDynamicResolutionState(bool hwDynamicResRequested);
		static void SetReferenceSize(int32_t width, int32_t height, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples);
		static void ResetReferenceSize(int32_t width, int32_t height);
		static void _cctor();
	};
}

