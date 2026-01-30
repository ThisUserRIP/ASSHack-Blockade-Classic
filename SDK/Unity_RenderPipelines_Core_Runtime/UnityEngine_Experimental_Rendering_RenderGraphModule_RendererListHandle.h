#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Experimental_Rendering_RendererList.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererList; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RendererListHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_IsValid;
		int32_t _handle_k__BackingField;
		int32_t get_handle();
		void set_handle(int32_t value);
		void _ctor(int32_t handle);
		static int32_t op_Implicit(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle handle);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererList op_Implicit(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle rendererList);
		bool IsValid();
	};
}

