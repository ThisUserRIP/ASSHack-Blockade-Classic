#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Rendering_SupportedRenderingFeatures_ReflectionProbeModes.h"
#include "UnityEngine_Rendering_SupportedRenderingFeatures_LightmapMixedBakeModes.h"
#include "UnityEngine_LightmapBakeType.h"
#include "UnityEngine_LightmapsMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_MixedLightingMode.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct SupportedRenderingFeatures : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_ReflectionProbeModes _reflectionProbeModes_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes _defaultMixedLightingModes_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes _mixedLightingModes_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::LightmapBakeType _lightmapBakeTypes_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::LightmapsMode _lightmapsModes_k__BackingField;
		bool _enlighten_k__BackingField;
		bool _lightProbeProxyVolumes_k__BackingField;
		bool _motionVectors_k__BackingField;
		bool _receiveShadows_k__BackingField;
		bool _reflectionProbes_k__BackingField;
		bool _rendererPriority_k__BackingField;
		bool _terrainDetailUnsupported_k__BackingField;
		bool _rendersUIOverlay_k__BackingField;
		bool _overridesEnvironmentLighting_k__BackingField;
		bool _overridesFog_k__BackingField;
		bool _overridesRealtimeReflectionProbes_k__BackingField;
		bool _overridesOtherLightingSettings_k__BackingField;
		bool _editableMaterialRenderQueue_k__BackingField;
		bool _overridesLODBias_k__BackingField;
		bool _overridesMaximumLODLevel_k__BackingField;
		bool _rendererProbes_k__BackingField;
		bool _particleSystemInstancing_k__BackingField;
		bool _autoAmbientProbeBaking_k__BackingField;
		bool _autoDefaultReflectionProbeBaking_k__BackingField;
		bool _overridesShadowmask_k__BackingField;
		mscorlib::System::String* _overrideShadowmaskMessage_k__BackingField;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures* s_Active;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures* get_active();
		static void set_active(UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures* value);
		UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes get_defaultMixedLightingModes();
		UnityEngine_CoreModule::UnityEngine::Rendering::SupportedRenderingFeatures_LightmapMixedBakeModes get_mixedLightingModes();
		UnityEngine_CoreModule::UnityEngine::LightmapBakeType get_lightmapBakeTypes();
		UnityEngine_CoreModule::UnityEngine::LightmapsMode get_lightmapsModes();
		bool get_enlighten();
		bool get_rendersUIOverlay();
		bool get_autoAmbientProbeBaking();
		bool get_autoDefaultReflectionProbeBaking();
		static void FallbackMixedLightingModeByRef(intptr_t fallbackModePtr);
		static bool IsMixedLightingModeSupported(UnityEngine_CoreModule::UnityEngine::MixedLightingMode mixedMode);
		static void IsMixedLightingModeSupportedByRef(UnityEngine_CoreModule::UnityEngine::MixedLightingMode mixedMode, intptr_t isSupportedPtr);
		static bool IsLightmapBakeTypeSupported(UnityEngine_CoreModule::UnityEngine::LightmapBakeType bakeType);
		static void IsLightmapBakeTypeSupportedByRef(UnityEngine_CoreModule::UnityEngine::LightmapBakeType bakeType, intptr_t isSupportedPtr);
		static void IsLightmapsModeSupportedByRef(UnityEngine_CoreModule::UnityEngine::LightmapsMode mode, intptr_t isSupportedPtr);
		static void IsLightmapperSupportedByRef(int32_t lightmapper, intptr_t isSupportedPtr);
		static void IsUIOverlayRenderedBySRP(intptr_t isSupportedPtr);
		static void IsAutoAmbientProbeBakingSupported(intptr_t isSupportedPtr);
		static void IsAutoDefaultReflectionProbeBakingSupported(intptr_t isSupportedPtr);
		static void FallbackLightmapperByRef(intptr_t lightmapperPtr);
		void _ctor();
		static void _cctor();
	};
}

