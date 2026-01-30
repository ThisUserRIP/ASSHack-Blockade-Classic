#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_MSAASamples.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandle; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
#include "UnityEngine_Rendering_RTHandleProperties.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandleProperties; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_RTHandleSystem_ResizeMode.h"
#include "UnityEngine_Rendering_DepthBits.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "..\UnityEngine_CoreModule\UnityEngine_FilterMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_TextureWrapMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_TextureDimension.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureMemoryless.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ScaleFunc; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct RTHandleSystem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_HardwareDynamicResRequested;
		bool m_ScaledRTSupportsMSAA;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples m_ScaledRTCurrentMSAASamples;
		System_Core::System::Collections::Generic::HashSet_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle>* m_AutoSizedRTs;
		IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*>* m_AutoSizedRTsArray;
		System_Core::System::Collections::Generic::HashSet_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle>* m_ResizeOnDemandRTs;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties m_RTHandleProperties;
		int32_t m_MaxWidths;
		int32_t m_MaxHeights;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();
		void _ctor();
		void Dispose();
		void Initialize(int32_t width, int32_t height, bool scaledRTsupportsMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples scaledRTMSAASamples);
		void Release(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rth);
		void Remove(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rth);
		void ResetReferenceSize(int32_t width, int32_t height);
		void SetReferenceSize(int32_t width, int32_t height, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples);
		void SetReferenceSize(int32_t width, int32_t height, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool reset);
		void SetHardwareDynamicResolutionState(bool enableHWDynamicRes);
		void SwitchResizeMode(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rth, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem_ResizeMode mode);
		void DemandResize(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rth);
		int32_t GetMaxWidth();
		int32_t GetMaxHeight();
		void Dispose(bool disposing);
		void Resize(int32_t width, int32_t height, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool sizeChanged, bool msaaSampleChanged);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(int32_t width, int32_t height, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::Vector2 scaleFactor, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ScaleFunc* scaleFunc, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* AllocAutoSizedRenderTexture(int32_t width, int32_t height, int32_t slices, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, UnityEngine_CoreModule::UnityEngine::FilterMode filterMode, UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension, bool enableRandomWrite, bool useMipMap, bool autoGenerateMips, bool isShadowMap, int32_t anisoLevel, float mipMapBias, bool enableMSAA, bool bindTextureMS, bool useDynamicScale, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless, mscorlib::System::String* name);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::RenderTexture* texture);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::Texture* texture);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier texture);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier texture, mscorlib::System::String* name);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* Alloc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* tex);
		mscorlib::System::String* DumpRTInfo();
	};
}

