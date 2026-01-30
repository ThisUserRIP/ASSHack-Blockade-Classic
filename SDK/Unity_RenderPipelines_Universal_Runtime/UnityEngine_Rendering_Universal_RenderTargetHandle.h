#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRPass; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct RenderTargetHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier _rtid_k__BackingField;
		void set_id(int32_t value);
		int32_t get_id();
		void set_rtid(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier value);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_rtid();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier);
		static Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle GetCameraTarget(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* xr);
		void Init(mscorlib::System::String* shaderProperty);
		void Init(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier Identifier();
		bool HasInternalRenderTargetId();
		bool Equals(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static bool op_Equality(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle c1, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle c2);
		static bool op_Inequality(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle c1, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle c2);
		static void _cctor();
	};
	bool operator==(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& c1, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& c2);
	bool operator!=(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& c1, Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle& c2);
}

