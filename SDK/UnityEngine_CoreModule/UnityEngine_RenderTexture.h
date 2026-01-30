#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Texture.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_TextureDimension.h"
#include "UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_RenderTextureMemoryless.h"
#include "UnityEngine_RenderTextureFormat.h"
#include "UnityEngine_RenderBuffer.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderBuffer; };
#include "UnityEngine_RenderTextureDescriptor.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTextureDescriptor; };
#include "UnityEngine_Experimental_Rendering_DefaultFormat.h"
#include "UnityEngine_RenderTextureReadWrite.h"
#include "UnityEngine_VRTextureUsage.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct RenderTexture : UnityEngine_CoreModule::UnityEngine::Texture
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_width();
		void set_width(int32_t value);
		int32_t get_height();
		void set_height(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension get_dimension();
		void set_dimension(UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension value);
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();
		void set_graphicsFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat value);
		bool get_useMipMap();
		void set_useMipMap(bool value);
		bool get_sRGB();
		void set_memorylessMode(UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless value);
		UnityEngine_CoreModule::UnityEngine::RenderTextureFormat get_format();
		void set_stencilFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat value);
		void set_autoGenerateMips(bool value);
		int32_t get_volumeDepth();
		void set_volumeDepth(int32_t value);
		int32_t get_antiAliasing();
		void set_antiAliasing(int32_t value);
		void set_bindTextureMS(bool value);
		void set_enableRandomWrite(bool value);
		bool get_useDynamicScale();
		void set_useDynamicScale(bool value);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetActive();
		static void SetActive(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* get_active();
		static void set_active(UnityEngine_CoreModule::UnityEngine::RenderTexture* value);
		UnityEngine_CoreModule::UnityEngine::RenderBuffer GetColorBuffer();
		UnityEngine_CoreModule::UnityEngine::RenderBuffer GetDepthBuffer();
		UnityEngine_CoreModule::UnityEngine::RenderBuffer get_colorBuffer();
		UnityEngine_CoreModule::UnityEngine::RenderBuffer get_depthBuffer();
		void DiscardContents(bool discardColor, bool discardDepth);
		void MarkRestoreExpected();
		void DiscardContents();
		bool Create();
		void Release();
		bool IsCreated();
		void SetSRGBReadWrite(bool srgb);
		static void Internal_Create(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt);
		void SetRenderTextureDescriptor(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc);
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor GetDescriptor();
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetTemporary_Internal(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc);
		static void ReleaseTemporary(UnityEngine_CoreModule::UnityEngine::RenderTexture* temp);
		void set_depth(int32_t value);
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc);
		void _ctor(UnityEngine_CoreModule::UnityEngine::RenderTexture* textureToCopy);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::DefaultFormat format);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t mipCount);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, UnityEngine_CoreModule::UnityEngine::RenderTextureReadWrite readWrite);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format);
		void _ctor(int32_t width, int32_t height, int32_t depth);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, int32_t mipCount);
		UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor get_descriptor();
		void set_descriptor(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor value);
		static void ValidateRenderTextureDesc(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc);
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat renderTextureFormat, UnityEngine_CoreModule::UnityEngine::RenderTextureReadWrite readWrite);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetTemporary(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor desc);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetTemporaryImpl(int32_t width, int32_t height, int32_t depthBuffer, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t antiAliasing, UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless memorylessMode, UnityEngine_CoreModule::UnityEngine::VRTextureUsage vrUsage, bool useDynamicScale);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, UnityEngine_CoreModule::UnityEngine::RenderTextureReadWrite readWrite);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height, int32_t depthBuffer, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height, int32_t depthBuffer);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetTemporary(int32_t width, int32_t height);
		void GetColorBuffer_Injected(UnityEngine_CoreModule::UnityEngine::RenderBuffer& ret);
		void GetDepthBuffer_Injected(UnityEngine_CoreModule::UnityEngine::RenderBuffer& ret);
		void SetRenderTextureDescriptor_Injected(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor& desc);
		void GetDescriptor_Injected(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor& ret);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* GetTemporary_Internal_Injected(UnityEngine_CoreModule::UnityEngine::RenderTextureDescriptor& desc);
	};
}

