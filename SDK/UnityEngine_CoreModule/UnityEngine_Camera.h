#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Behaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera_CameraCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_OpaqueSortMode.h"
#include "UnityEngine_TransparencySortMode.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_CameraType.h"
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_CameraClearFlags.h"
#include "UnityEngine_DepthTextureMode.h"
#include "UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_Camera_MonoOrStereoscopicEye.h"
#include "UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_StereoTargetEyeMask.h"
#include "UnityEngine_Camera_StereoscopicEye.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Camera : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Camera_CameraCallback* onPreCull;
			UnityEngine_CoreModule::UnityEngine::Camera_CameraCallback* onPreRender;
			UnityEngine_CoreModule::UnityEngine::Camera_CameraCallback* onPostRender;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		float get_nearClipPlane();
		void set_nearClipPlane(float value);
		float get_farClipPlane();
		void set_farClipPlane(float value);
		float get_fieldOfView();
		void set_fieldOfView(float value);
		bool get_allowHDR();
		bool get_allowMSAA();
		bool get_allowDynamicResolution();
		float get_orthographicSize();
		void set_orthographicSize(float value);
		bool get_orthographic();
		void set_orthographic(bool value);
		UnityEngine_CoreModule::UnityEngine::Rendering::OpaqueSortMode get_opaqueSortMode();
		UnityEngine_CoreModule::UnityEngine::TransparencySortMode get_transparencySortMode();
		float get_depth();
		void set_depth(float value);
		float get_aspect();
		void set_aspect(float value);
		int32_t get_cullingMask();
		void set_cullingMask(int32_t value);
		int32_t get_eventMask();
		UnityEngine_CoreModule::UnityEngine::CameraType get_cameraType();
		void SetLayerCullDistances(IL2CPP::Array<float>* d);
		void set_layerCullDistances(IL2CPP::Array<float>* value);
		UnityEngine_CoreModule::UnityEngine::Color get_backgroundColor();
		void set_backgroundColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::CameraClearFlags get_clearFlags();
		void set_clearFlags(UnityEngine_CoreModule::UnityEngine::CameraClearFlags value);
		UnityEngine_CoreModule::UnityEngine::DepthTextureMode get_depthTextureMode();
		void set_depthTextureMode(UnityEngine_CoreModule::UnityEngine::DepthTextureMode value);
		bool get_usePhysicalProperties();
		UnityEngine_CoreModule::UnityEngine::Rect get_rect();
		void set_rect(UnityEngine_CoreModule::UnityEngine::Rect value);
		UnityEngine_CoreModule::UnityEngine::Rect get_pixelRect();
		void set_pixelRect(UnityEngine_CoreModule::UnityEngine::Rect value);
		int32_t get_pixelWidth();
		int32_t get_pixelHeight();
		UnityEngine_CoreModule::UnityEngine::RenderTexture* get_targetTexture();
		void set_targetTexture(UnityEngine_CoreModule::UnityEngine::RenderTexture* value);
		int32_t get_targetDisplay();
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_worldToCameraMatrix();
		void set_worldToCameraMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 get_projectionMatrix();
		void set_projectionMatrix(UnityEngine_CoreModule::UnityEngine::Matrix4x4 value);
		void ResetWorldToCameraMatrix();
		void ResetProjectionMatrix();
		UnityEngine_CoreModule::UnityEngine::Vector3 WorldToScreenPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye);
		UnityEngine_CoreModule::UnityEngine::Vector3 WorldToViewportPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye);
		UnityEngine_CoreModule::UnityEngine::Vector3 ViewportToWorldPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye);
		UnityEngine_CoreModule::UnityEngine::Vector3 ScreenToWorldPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye);
		UnityEngine_CoreModule::UnityEngine::Vector3 WorldToScreenPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		UnityEngine_CoreModule::UnityEngine::Vector3 WorldToViewportPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		UnityEngine_CoreModule::UnityEngine::Vector3 ViewportToWorldPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		UnityEngine_CoreModule::UnityEngine::Vector3 ScreenToWorldPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		UnityEngine_CoreModule::UnityEngine::Vector3 ScreenToViewportPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		UnityEngine_CoreModule::UnityEngine::Ray ScreenPointToRay(UnityEngine_CoreModule::UnityEngine::Vector2 pos, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye);
		UnityEngine_CoreModule::UnityEngine::Ray ScreenPointToRay(UnityEngine_CoreModule::UnityEngine::Vector3 pos, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye);
		UnityEngine_CoreModule::UnityEngine::Ray ScreenPointToRay(UnityEngine_CoreModule::UnityEngine::Vector3 pos);
		static UnityEngine_CoreModule::UnityEngine::Camera* get_main();
		static UnityEngine_CoreModule::UnityEngine::Camera* get_current();
		bool get_stereoEnabled();
		UnityEngine_CoreModule::UnityEngine::StereoTargetEyeMask get_stereoTargetEye();
		void SetStereoProjectionMatrix(UnityEngine_CoreModule::UnityEngine::Camera_StereoscopicEye eye, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix);
		void ResetStereoProjectionMatrices();
		void SetStereoViewMatrix(UnityEngine_CoreModule::UnityEngine::Camera_StereoscopicEye eye, UnityEngine_CoreModule::UnityEngine::Matrix4x4 matrix);
		void ResetStereoViewMatrices();
		static int32_t GetAllCamerasCount();
		static int32_t GetAllCamerasImpl(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cam);
		static int32_t get_allCamerasCount();
		static int32_t GetAllCameras(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* cameras);
		void Render();
		void RenderWithShader(UnityEngine_CoreModule::UnityEngine::Shader* shader, mscorlib::System::String* replacementTag);
		void CopyFrom(UnityEngine_CoreModule::UnityEngine::Camera* other);
		static void FireOnPreCull(UnityEngine_CoreModule::UnityEngine::Camera* cam);
		static void FireOnPreRender(UnityEngine_CoreModule::UnityEngine::Camera* cam);
		static void FireOnPostRender(UnityEngine_CoreModule::UnityEngine::Camera* cam);
		bool TryGetCullingParameters(bool stereoAware, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters);
		static bool GetCullingParameters_Internal(UnityEngine_CoreModule::UnityEngine::Camera* camera, bool stereoAware, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, int32_t managedCullingParametersSize);
		void get_backgroundColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& ret);
		void set_backgroundColor_Injected(UnityEngine_CoreModule::UnityEngine::Color& value);
		void get_rect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret);
		void set_rect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& value);
		void get_pixelRect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& ret);
		void set_pixelRect_Injected(UnityEngine_CoreModule::UnityEngine::Rect& value);
		void get_worldToCameraMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
		void set_worldToCameraMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& value);
		void get_projectionMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& ret);
		void set_projectionMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Matrix4x4& value);
		void WorldToScreenPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void WorldToViewportPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void ViewportToWorldPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void ScreenToWorldPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void ScreenToViewportPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void ScreenPointToRay_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& pos, UnityEngine_CoreModule::UnityEngine::Camera_MonoOrStereoscopicEye eye, UnityEngine_CoreModule::UnityEngine::Ray& ret);
		void SetStereoProjectionMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Camera_StereoscopicEye eye, UnityEngine_CoreModule::UnityEngine::Matrix4x4& matrix);
		void SetStereoViewMatrix_Injected(UnityEngine_CoreModule::UnityEngine::Camera_StereoscopicEye eye, UnityEngine_CoreModule::UnityEngine::Matrix4x4& matrix);
	};
}

