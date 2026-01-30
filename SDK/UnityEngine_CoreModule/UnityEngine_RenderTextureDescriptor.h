#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "UnityEngine_Rendering_TextureDimension.h"
#include "UnityEngine_Rendering_ShadowSamplingMode.h"
#include "UnityEngine_VRTextureUsage.h"
#include "UnityEngine_RenderTextureCreationFlags.h"
#include "UnityEngine_RenderTextureMemoryless.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_RenderTextureFormat.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct RenderTextureDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _width_k__BackingField;
		int32_t _height_k__BackingField;
		int32_t _msaaSamples_k__BackingField;
		int32_t _volumeDepth_k__BackingField;
		int32_t _mipCount_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat _graphicsFormat;
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat _stencilFormat_k__BackingField;
		int32_t _depthBufferBits;
		UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension _dimension_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSamplingMode _shadowSamplingMode_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::VRTextureUsage _vrUsage_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::RenderTextureCreationFlags _flags;
		UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless _memoryless_k__BackingField;
		int32_t get_width();
		void set_width(int32_t value);
		int32_t get_height();
		void set_height(int32_t value);
		int32_t get_msaaSamples();
		void set_msaaSamples(int32_t value);
		int32_t get_volumeDepth();
		void set_volumeDepth(int32_t value);
		int32_t get_mipCount();
		void set_mipCount(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();
		void set_graphicsFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat value);
		void set_stencilFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat value);
		UnityEngine_CoreModule::UnityEngine::RenderTextureFormat get_colorFormat();
		void set_colorFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat value);
		bool get_sRGB();
		void set_sRGB(bool value);
		int32_t get_depthBufferBits();
		void set_depthBufferBits(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension get_dimension();
		void set_dimension(UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension value);
		void set_shadowSamplingMode(UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSamplingMode value);
		UnityEngine_CoreModule::UnityEngine::VRTextureUsage get_vrUsage();
		void set_vrUsage(UnityEngine_CoreModule::UnityEngine::VRTextureUsage value);
		void set_memoryless(UnityEngine_CoreModule::UnityEngine::RenderTextureMemoryless value);
		void _ctor(int32_t width, int32_t height);
		void _ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t depthBufferBits);
		void _ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat colorFormat, int32_t depthBufferBits, int32_t mipCount);
		void _ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t depthBufferBits, int32_t mipCount);
		void SetOrClearRenderTextureCreationFlag(bool value, UnityEngine_CoreModule::UnityEngine::RenderTextureCreationFlags flag);
		void set_useMipMap(bool value);
		void set_autoGenerateMips(bool value);
		void set_enableRandomWrite(bool value);
		void set_bindMS(bool value);
		void set_createdFromScript(bool value);
		bool get_useDynamicScale();
		void set_useDynamicScale(bool value);
		static void _cctor();
	};
}

