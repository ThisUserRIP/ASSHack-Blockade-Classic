#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct VolumeParameter; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct FieldInfo; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct VolumeComponent : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool active;
		mscorlib::System::String* _displayName_k__BackingField;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeParameter>* _parameters_k__BackingField;
		bool m_AdvancedMode;
		mscorlib::System::String* get_displayName();
		void set_displayName(mscorlib::System::String* value);
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeParameter>* get_parameters();
		void set_parameters(mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeParameter>* value);
		void OnEnable();
		void OnDisable();
		void Override(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent* state, float interpFactor);
		void SetAllOverridesTo(bool state);
		void SetAllOverridesTo(mscorlib::System::Collections::Generic::IEnumerable_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeParameter>* enumerable, bool state);
		int32_t GetHashCode();
		void OnDestroy();
		void Release();
		void _ctor();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeParameter* _OnEnable_b__10_2(mscorlib::System::Reflection::FieldInfo* t);
	};
}

