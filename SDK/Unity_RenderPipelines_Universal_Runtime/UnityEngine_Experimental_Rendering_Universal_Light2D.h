#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "UnityEngine_Experimental_Rendering_Universal_Light2D_LightType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
#include "..\UnityEngine_CoreModule\UnityEngine_BoundingSphere.h"
namespace UnityEngine_CoreModule::UnityEngine { struct BoundingSphere; };
#include "UnityEngine_Experimental_Rendering_Universal_Light2D_PointLightQuality.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct Light2D : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D_LightType m_LightType;
		int32_t m_BlendStyleIndex;
		float m_FalloffIntensity;
		UnityEngine_CoreModule::UnityEngine::Color m_Color;
		float m_Intensity;
		float m_LightVolumeOpacity;
		IL2CPP::Array<int32_t>* m_ApplyToSortingLayers;
		UnityEngine_CoreModule::UnityEngine::Sprite* m_LightCookieSprite;
		bool m_UseNormalMap;
		int32_t m_LightOrder;
		bool m_AlphaBlendOnOverlap;
		float m_ShadowIntensity;
		float m_ShadowVolumeIntensity;
		int32_t m_PreviousLightCookieSprite;
		UnityEngine_CoreModule::UnityEngine::Mesh* m_Mesh;
		UnityEngine_CoreModule::UnityEngine::Bounds m_LocalBounds;
		UnityEngine_CoreModule::UnityEngine::BoundingSphere _boundingSphere_k__BackingField;
		float m_PointLightInnerAngle;
		float m_PointLightOuterAngle;
		float m_PointLightInnerRadius;
		float m_PointLightOuterRadius;
		float m_PointLightDistance;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D_PointLightQuality m_PointLightQuality;
		int32_t m_ShapeLightParametricSides;
		float m_ShapeLightParametricAngleOffset;
		float m_ShapeLightParametricRadius;
		float m_ShapeLightFalloffSize;
		UnityEngine_CoreModule::UnityEngine::Vector2 m_ShapeLightFalloffOffset;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_ShapePath;
		float m_PreviousShapeLightFalloffSize;
		int32_t m_PreviousShapeLightParametricSides;
		float m_PreviousShapeLightParametricAngleOffset;
		float m_PreviousShapeLightParametricRadius;
		IL2CPP::Array<int32_t>* get_affectedSortingLayers();
		int32_t get_lightCookieSpriteInstanceID();
		UnityEngine_CoreModule::UnityEngine::BoundingSphere get_boundingSphere();
		void set_boundingSphere(UnityEngine_CoreModule::UnityEngine::BoundingSphere value);
		UnityEngine_CoreModule::UnityEngine::Mesh* get_lightMesh();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D_LightType get_lightType();
		void set_lightType(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D_LightType value);
		int32_t get_blendStyleIndex();
		void set_blendStyleIndex(int32_t value);
		float get_shadowIntensity();
		void set_shadowIntensity(float value);
		float get_shadowVolumeIntensity();
		void set_shadowVolumeIntensity(float value);
		UnityEngine_CoreModule::UnityEngine::Color get_color();
		void set_color(UnityEngine_CoreModule::UnityEngine::Color value);
		float get_intensity();
		void set_intensity(float value);
		float get_volumeOpacity();
		UnityEngine_CoreModule::UnityEngine::Sprite* get_lightCookieSprite();
		float get_falloffIntensity();
		bool get_useNormalMap();
		bool get_alphaBlendOnOverlap();
		int32_t get_lightOrder();
		void set_lightOrder(int32_t value);
		int32_t GetTopMostLitLayer();
		void UpdateMesh();
		void UpdateBoundingSphere();
		bool IsLitLayer(int32_t layer);
		void Awake();
		void OnEnable();
		void OnDisable();
		void LateUpdate();
		float get_pointLightInnerAngle();
		void set_pointLightInnerAngle(float value);
		float get_pointLightOuterAngle();
		void set_pointLightOuterAngle(float value);
		float get_pointLightInnerRadius();
		void set_pointLightInnerRadius(float value);
		float get_pointLightOuterRadius();
		void set_pointLightOuterRadius(float value);
		float get_pointLightDistance();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2D_PointLightQuality get_pointLightQuality();
		bool get_isPointLight();
		int32_t get_shapeLightParametricSides();
		float get_shapeLightParametricAngleOffset();
		float get_shapeLightParametricRadius();
		float get_shapeLightFalloffSize();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_shapeLightFalloffOffset();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* get_shapePath();
		void _ctor();
	};
}

