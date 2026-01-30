#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRendererFeature; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ScriptableRendererData : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _isInvalidated_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererFeature>* m_RendererFeatures;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int64>* m_RendererFeatureMap;
		bool get_isInvalidated();
		void set_isInvalidated(bool value);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* Create();
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRendererFeature>* get_rendererFeatures();
		void SetDirty();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer* InternalCreateRenderer();
		void OnValidate();
		void OnEnable();
		void _ctor();
	};
}

