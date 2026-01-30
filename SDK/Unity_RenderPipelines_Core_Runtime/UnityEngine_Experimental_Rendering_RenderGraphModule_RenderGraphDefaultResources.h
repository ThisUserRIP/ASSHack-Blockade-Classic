#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandle; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_TextureHandle.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TextureHandle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraph; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraphDefaultResources : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_IsValid;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_BlackTexture2D;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_WhiteTexture2D;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _blackTexture_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _whiteTexture_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _clearTextureXR_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _magentaTextureXR_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _blackTextureXR_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _blackTextureArrayXR_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _blackUIntTextureXR_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _blackTexture3DXR_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _whiteTextureXR_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_blackTexture();
		void set_blackTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_whiteTexture();
		void set_whiteTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_clearTextureXR();
		void set_clearTextureXR(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_magentaTextureXR();
		void set_magentaTextureXR(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_blackTextureXR();
		void set_blackTextureXR(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_blackTextureArrayXR();
		void set_blackTextureArrayXR(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_blackUIntTextureXR();
		void set_blackUIntTextureXR(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_blackTexture3DXR();
		void set_blackTexture3DXR(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_whiteTextureXR();
		void set_whiteTextureXR(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		void _ctor();
		void Cleanup();
		void InitializeForRendering(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* renderGraph);
	};
}

