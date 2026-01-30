#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_TextureSizeMode.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ScaleFunc; };
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
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_FastMemoryDesc.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct FastMemoryDesc; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct TextureDesc
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode sizeMode;
		int32_t width;
		int32_t height;
		int32_t slices;
		UnityEngine_CoreModule::UnityEngine::Vector2 scale;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ScaleFunc* func;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DepthBits depthBufferBits;
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat;
		UnityEngine_CoreModule::UnityEngine::FilterMode filterMode;
		UnityEngine_CoreModule::UnityEngine::TextureWrapMode wrapMode;
		UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dimension;
		bool enableRandomWrite;
		bool useMipMap;
		bool autoGenerateMips;
		bool isShadowMap;
		int32_t anisoLevel;
		float mipMapBias;
		bool enableMSAA;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples;
		bool bindTextureMS;
		bool useDynamicScale;
		UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memoryless;
		mscorlib::System::String* name;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc fastMemoryDesc;
		bool fallBackToBlackTexture;
		bool clearBuffer;
		UnityEngine_CoreModule::UnityEngine::Color clearColor;
		void InitDefaultValues(bool dynamicResolution, bool xrReady);
		void _ctor(int32_t width, int32_t height, bool dynamicResolution, bool xrReady);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector2 scale, bool dynamicResolution, bool xrReady);
		void _ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ScaleFunc* func, bool dynamicResolution, bool xrReady);
		void _ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc input);
		int32_t GetHashCode();
	};
}

