#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityStandardAssets_ImageEffects_PostEffectsBase.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityStandardAssets_ImageEffects_CameraMotionBlur_MotionBlurFilter.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Matrix4x4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects
{
	struct CameraMotionBlur : Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::PostEffectsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::UnityStandardAssets::ImageEffects::CameraMotionBlur_MotionBlurFilter filterType;
		bool preview;
		UnityEngine_CoreModule::UnityEngine::Vector3 previewScale;
		float movementScale;
		float rotationScale;
		float maxVelocity;
		float minVelocity;
		float velocityScale;
		float softZDistance;
		int32_t velocityDownsample;
		UnityEngine_CoreModule::UnityEngine::LayerMask excludeLayers;
		UnityEngine_CoreModule::UnityEngine::GameObject* tmpCam;
		UnityEngine_CoreModule::UnityEngine::Shader* shader;
		UnityEngine_CoreModule::UnityEngine::Shader* dx11MotionBlurShader;
		UnityEngine_CoreModule::UnityEngine::Shader* replacementClear;
		UnityEngine_CoreModule::UnityEngine::Material* motionBlurMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* dx11MotionBlurMaterial;
		UnityEngine_CoreModule::UnityEngine::Texture2D* noiseTexture;
		float jitter;
		bool showVelocity;
		float showVelocityScale;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 currentViewProjMat;
		UnityEngine_CoreModule::UnityEngine::Matrix4x4 prevViewProjMat;
		int32_t prevFrameCount;
		bool wasActive;
		UnityEngine_CoreModule::UnityEngine::Vector3 prevFrameForward;
		UnityEngine_CoreModule::UnityEngine::Vector3 prevFrameUp;
		UnityEngine_CoreModule::UnityEngine::Vector3 prevFramePos;
		UnityEngine_CoreModule::UnityEngine::Camera* _camera;
		struct StaticFields
		{
			float MAX_RADIUS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void CalculateViewProjection();
		void Start();
		void OnEnable();
		void OnDisable();
		bool CheckResources();
		void OnRenderImage(UnityEngine_CoreModule::UnityEngine::RenderTexture* source, UnityEngine_CoreModule::UnityEngine::RenderTexture* destination);
		void Remember();
		UnityEngine_CoreModule::UnityEngine::Camera* GetTmpCam();
		void StartFrame();
		static int32_t divRoundUp(int32_t x, int32_t d);
		void _ctor();
		static void _cctor();
	};
}

