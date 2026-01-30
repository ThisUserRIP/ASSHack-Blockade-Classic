#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Experimental_Rendering_Universal_ShadowCasterGroup2D.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct ShadowCasterGroup2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct ShadowCaster2D : Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_HasRenderer;
		bool m_UseRendererSilhouette;
		bool m_CastsShadows;
		bool m_SelfShadows;
		IL2CPP::Array<int32_t>* m_ApplyToSortingLayers;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_ShapePath;
		int32_t m_ShapePathHash;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_Mesh;
		int32_t m_InstanceId;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D* m_ShadowCasterGroup;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::ShadowCasterGroup2D* m_PreviousShadowCasterGroup;
		int32_t m_PreviousShadowGroup;
		bool m_PreviousCastsShadows;
		int32_t m_PreviousPathHash;
		UnityEngine_CoreModule::UnityEngine::Mesh* get_mesh();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* get_shapePath();
		int32_t get_shapePathHash();
		void set_shapePathHash(int32_t value);
		void set_useRendererSilhouette(bool value);
		bool get_useRendererSilhouette();
		void set_selfShadows(bool value);
		bool get_selfShadows();
		void set_castsShadows(bool value);
		bool get_castsShadows();
		static IL2CPP::Array<int32_t>* SetDefaultSortingLayers();
		bool IsShadowedLayer(int32_t layer);
		void Awake();
		void OnEnable();
		void OnDisable();
		void Update();
		void _ctor();
	};
}

