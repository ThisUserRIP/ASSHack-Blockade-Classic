#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandleSystem; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ScaleFunc; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2Int; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_RTHandleProperties.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandleProperties; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_FastMemoryFlags.h"

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct RTHandle : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem* m_Owner;
		UnityEngine_CoreModule::UnityEngine::RenderTexture* m_RT;
		UnityEngine_CoreModule::UnityEngine::Texture* m_ExternalTexture;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier m_NameID;
		bool m_EnableMSAA;
		bool m_EnableRandomWrite;
		bool m_EnableHWDynamicScale;
		mscorlib::System::String* m_Name;
		UnityEngine_CoreModule::UnityEngine::Vector2 _scaleFactor_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ScaleFunc* scaleFunc;
		bool _useScaling_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2Int _referenceSize_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2 get_scaleFactor();
		void set_scaleFactor(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		bool get_useScaling();
		void set_useScaling(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector2Int get_referenceSize();
		void set_referenceSize(UnityEngine_CoreModule::UnityEngine::Vector2Int value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();
		UnityEngine_CoreModule::UnityEngine::RenderTexture* get_rt();
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier get_nameID();
		mscorlib::System::String* get_name();
		bool get_isMSAAEnabled();
		void _ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem* owner);
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* op_Implicit(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* handle);
		static UnityEngine_CoreModule::UnityEngine::Texture* op_Implicit(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* handle);
		static UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* handle);
		void SetRenderTexture(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt);
		void SetTexture(UnityEngine_CoreModule::UnityEngine::Texture* tex);
		void SetTexture(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier tex);
		void Release();
		UnityEngine_CoreModule::UnityEngine::Vector2Int GetScaledSize(UnityEngine_CoreModule::UnityEngine::Vector2Int refSize);
		void SwitchToFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, float residencyFraction, UnityEngine_CoreModule::UnityEngine::Rendering::FastMemoryFlags flags, bool copyContents);
		void CopyToFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, float residencyFraction, UnityEngine_CoreModule::UnityEngine::Rendering::FastMemoryFlags flags);
		void SwitchOutFastMemory(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, bool copyContents);
	};
}

