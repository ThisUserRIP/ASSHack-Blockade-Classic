#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_Rendering_CameraProperties__m_ShadowCullPlanes_e__FixedBuffer.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CameraProperties__m_ShadowCullPlanes_e__FixedBuffer; };
#include "UnityEngine_Rendering_CameraProperties__m_CameraCullPlanes_e__FixedBuffer.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CameraProperties__m_CameraCullPlanes_e__FixedBuffer; };
#include "UnityEngine_Rendering_CameraProperties__layerCullDistances_e__FixedBuffer.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CameraProperties__layerCullDistances_e__FixedBuffer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_CoreCameraValues.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CoreCameraValues; };
#include "UnityEngine_Plane.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Plane; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct CameraProperties
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rect screenRect;
		UnityEngine_CoreModule::UnityEngine::Vector3 viewDir;
		float projectionNear;
		float projectionFar;
		float cameraNear;
		float cameraFar;
		float cameraAspect;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 cameraToWorld;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 actualWorldToClip;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 cameraClipToWorld;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 cameraWorldToClip;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 implicitProjection;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 stereoWorldToClipLeft;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 stereoWorldToClipRight;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 worldToCamera;
		UnityEngine_CoreModule::UnityEngine::Vector3 up;
		UnityEngine_CoreModule::UnityEngine::Vector3 right;
		UnityEngine_CoreModule::UnityEngine::Vector3 transformDirection;
		UnityEngine_CoreModule::UnityEngine::Vector3 cameraEuler;
		UnityEngine_CoreModule::UnityEngine::Vector3 velocity;
		float farPlaneWorldSpaceLength;
		uint32_t rendererCount;
		UnityEngine_CoreModule::UnityEngine::Rendering::CameraProperties__m_ShadowCullPlanes_e__FixedBuffer m_ShadowCullPlanes;
		UnityEngine_CoreModule::UnityEngine::Rendering::CameraProperties__m_CameraCullPlanes_e__FixedBuffer m_CameraCullPlanes;
		float baseFarDistance;
		UnityEngine_CoreModule::UnityEngine::Vector3 shadowCullCenter;
		UnityEngine_CoreModule::UnityEngine::Rendering::CameraProperties__layerCullDistances_e__FixedBuffer layerCullDistances;
		int32_t layerCullSpherical;
		UnityEngine_CoreModule::UnityEngine::Rendering::CoreCameraValues coreCameraValues;
		uint32_t cameraType;
		int32_t projectionIsOblique;
		int32_t isImplicitProjectionMatrix;
		UnityEngine_CoreModule::UnityEngine::Plane GetShadowCullingPlane(int32_t index);
		UnityEngine_CoreModule::UnityEngine::Plane GetCameraCullingPlane(int32_t index);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::CameraProperties other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

