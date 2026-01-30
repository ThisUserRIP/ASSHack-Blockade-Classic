#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_LODParameters.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct LODParameters; };
#include "UnityEngine_Rendering_ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "UnityEngine_Rendering_ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Rendering_CullingOptions.h"
#include "UnityEngine_Rendering_ReflectionProbeSortingCriteria.h"
#include "UnityEngine_Rendering_CameraProperties.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CameraProperties; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Plane.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Plane; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct ScriptableCullingParameters
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_IsOrthographic;
		UnityEngine_CoreModule::UnityEngine::Rendering::LODParameters m_LODParameters;
		UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer m_CullingPlanes;
		int32_t m_CullingPlaneCount;
		uint32_t m_CullingMask;
		uint64_t m_SceneMask;
		UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer m_LayerFarCullDistances;
		int32_t m_LayerCull;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_CullingMatrix;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Origin;
		float m_ShadowDistance;
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingOptions m_CullingOptions;
		UnityEngine_CoreModule::UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria;
		UnityEngine_CoreModule::UnityEngine::Rendering::CameraProperties m_CameraProperties;
		float m_AccurateOcclusionThreshold;
		int32_t m_MaximumPortalCullingJobs;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_StereoViewMatrix;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 m_StereoProjectionMatrix;
		float m_StereoSeparationDistance;
		int32_t m_maximumVisibleLights;
		void set_maximumVisibleLights(int32_t value);
		int32_t get_cullingPlaneCount();
		void set_isOrthographic(bool value);
		void set_shadowDistance(float value);
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingOptions get_cullingOptions();
		void set_cullingOptions(UnityEngine_CoreModule::UnityEngine::Rendering::CullingOptions value);
		void set_stereoViewMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_stereoProjectionMatrix();
		void set_stereoProjectionMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		float GetLayerCullingDistance(int32_t layerIndex);
		UnityEngine_CoreModule::UnityEngine::Plane GetCullingPlane(int32_t index);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static void _cctor();
	};
}

