#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct ResourceHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t m_Value;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType _type_k__BackingField;
		int32_t get_index();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType get_type();
		void set_type(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType value);
		int32_t get_iType();
		void _ctor(int32_t value, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type);
		static int32_t op_Implicit(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle handle);
		bool IsValid();
		static void NewFrame(int32_t executionIndex);
		static void _cctor();
	};
}

