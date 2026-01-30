#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2Int.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2Int; };
#include "UnityEngine_Rendering_DynamicResScalePolicyType.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct PerformDynamicRes; };
#include "UnityEngine_Rendering_DynamicResUpscaleFilter.h"
#include "UnityEngine_Rendering_DynamicResolutionType.h"
#include "UnityEngine_Rendering_GlobalDynamicResolutionSettings.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct GlobalDynamicResolutionSettings; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct WeakReference; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace mscorlib::System { struct Action; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct DynamicResolutionHandler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_Enabled;
		float m_MinScreenFraction;
		float m_MaxScreenFraction;
		float m_CurrentFraction;
		bool m_ForcingRes;
		bool m_CurrentCameraRequest;
		float m_PrevFraction;
		bool m_ForceSoftwareFallback;
		float m_PrevHWScaleWidth;
		float m_PrevHWScaleHeight;
		UnityEngine_CoreModule::UnityEngine::Vector2Int m_LastScaledSize;
		UnityEngine_CoreModule::UnityEngine::Vector2Int cachedOriginalSize;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter _filter_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector2Int _finalViewport_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionType type;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings m_CachedSettings;
		mscorlib::System::WeakReference* m_OwnerCameraWeakRef;
		struct StaticFields
		{
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResScalePolicyType s_ScalerType;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PerformDynamicRes* s_DynamicResMethod;
			int32_t CameraDictionaryMaxcCapacity;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler>* s_CameraInstances;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler* s_DefaultInstance;
			int32_t s_ActiveCameraId;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler* s_ActiveInstance;
			bool s_ActiveInstanceDirty;
			float s_GlobalHwFraction;
			bool s_GlobalHwUpresActive;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Reset();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter get_filter();
		void set_filter(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResUpscaleFilter value);
		UnityEngine_CoreModule::UnityEngine::Vector2Int get_finalViewport();
		void set_finalViewport(UnityEngine_CoreModule::UnityEngine::Vector2Int value);
		bool FlushScalableBufferManagerState();
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler* GetOrCreateDrsInstanceHandler(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResolutionHandler* get_instance();
		void _ctor();
		static float DefaultDynamicResMethod();
		void ProcessSettings(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings);
		UnityEngine_CoreModule::UnityEngine::Vector2 GetResolvedScale();
		static void SetDynamicResScaler(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::PerformDynamicRes* scaler, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicResScalePolicyType scalerType);
		static void ClearSelectedCamera();
		void SetCurrentCameraRequest(bool cameraRequest);
		static void UpdateAndUseCamera(UnityEngine_CoreModule::UnityEngine::Camera* camera, mscorlib::System::Nullable_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings> settings, mscorlib::System::Action* OnResolutionChange);
		void Update(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::GlobalDynamicResolutionSettings settings, mscorlib::System::Action* OnResolutionChange);
		bool SoftwareDynamicResIsEnabled();
		bool HardwareDynamicResIsEnabled();
		bool RequestsHardwareDynamicResolution();
		bool DynamicResolutionEnabled();
		void ForceSoftwareFallback();
		UnityEngine_CoreModule::UnityEngine::Vector2Int GetScaledSize(UnityEngine_CoreModule::UnityEngine::Vector2Int size);
		UnityEngine_CoreModule::UnityEngine::Vector2Int ApplyScalesOnSize(UnityEngine_CoreModule::UnityEngine::Vector2Int size);
		float GetCurrentScale();
		UnityEngine_CoreModule::UnityEngine::Vector2Int GetLastScaledSize();
		static void _cctor();
	};
}

