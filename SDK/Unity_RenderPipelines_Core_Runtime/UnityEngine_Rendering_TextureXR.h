#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2DArray; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture3D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_TextureDimension.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeShader; };
namespace mscorlib::System { struct String; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct TextureXR : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t m_MaxViews;
			UnityEngine_CoreModule::UnityEngine::Texture* m_BlackUIntTexture2DArray;
			UnityEngine_CoreModule::UnityEngine::Texture* m_BlackUIntTexture;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_BlackUIntTexture2DArrayRTH;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_BlackUIntTextureRTH;
			UnityEngine_CoreModule::UnityEngine::Texture2DArray* m_ClearTexture2DArray;
			UnityEngine_CoreModule::UnityEngine::Texture2D* m_ClearTexture;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_ClearTexture2DArrayRTH;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_ClearTextureRTH;
			UnityEngine_CoreModule::UnityEngine::Texture2DArray* m_MagentaTexture2DArray;
			UnityEngine_CoreModule::UnityEngine::Texture2D* m_MagentaTexture;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_MagentaTexture2DArrayRTH;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_MagentaTextureRTH;
			UnityEngine_CoreModule::UnityEngine::Texture2D* m_BlackTexture;
			UnityEngine_CoreModule::UnityEngine::Texture3D* m_BlackTexture3D;
			UnityEngine_CoreModule::UnityEngine::Texture2DArray* m_BlackTexture2DArray;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_BlackTexture2DArrayRTH;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_BlackTextureRTH;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_BlackTexture3DRTH;
			UnityEngine_CoreModule::UnityEngine::Texture2DArray* m_WhiteTexture2DArray;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_WhiteTexture2DArrayRTH;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_WhiteTextureRTH;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void set_maxViews(int32_t value);
		static int32_t get_slices();
		static bool get_useTexArray();
		static UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension get_dimension();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* GetBlackUIntTexture();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* GetClearTexture();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* GetMagentaTexture();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* GetBlackTexture();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* GetBlackTextureArray();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* GetBlackTexture3D();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* GetWhiteTexture();
		static void Initialize(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::ComputeShader* clearR32_UIntShader);
		static UnityEngine_CoreModule::UnityEngine::Texture2DArray* CreateTexture2DArrayFromTexture2D(UnityEngine_CoreModule::UnityEngine::Texture2D* source, mscorlib::System::String* name);
		static UnityEngine_CoreModule::UnityEngine::Texture* CreateBlackUIntTextureArray(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::ComputeShader* clearR32_UIntShader);
		static UnityEngine_CoreModule::UnityEngine::Texture* CreateBlackUintTexture(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::ComputeShader* clearR32_UIntShader);
		static UnityEngine_CoreModule::UnityEngine::Texture3D* CreateBlackTexture3D(mscorlib::System::String* name);
		static void _cctor();
	};
}

