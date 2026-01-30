#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { template <typename T> struct Lazy_1; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct VolumeStack; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct Volume; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct VolumeComponent; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct VolumeManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* _stack_k__BackingField;
		IL2CPP::Array<mscorlib::System::Type*>* _baseComponentTypeArray_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume>>* m_SortedVolumes;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume>* m_Volumes;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Boolean>* m_SortNeeded;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent>* m_ComponentsDefaultState;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_PhysicsModule::UnityEngine::Collider>* m_TempColliders;
		struct StaticFields
		{
			mscorlib::System::Lazy_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager>* s_Instance;
			int32_t k_MaxLayerCount;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeManager* get_instance();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* get_stack();
		void set_stack(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* value);
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>* get_baseComponentTypes();
		void set_baseComponentTypes(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>* value);
		IL2CPP::Array<mscorlib::System::Type*>* get_baseComponentTypeArray();
		void set_baseComponentTypeArray(IL2CPP::Array<mscorlib::System::Type*>* value);
		void _ctor();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* CreateStack();
		void DestroyStack(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack);
		void ReloadBaseTypes();
		void Register(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume* volume, int32_t layer);
		void Unregister(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume* volume, int32_t layer);
		template <typename T> bool IsComponentActiveInMask(UnityEngine_CoreModule::UnityEngine::LayerMask layerMask)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsComponentActiveInMask", std::vector<std::string> { "UnityEngine.LayerMask" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&layerMask;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		void SetLayerDirty(int32_t layer);
		void UpdateVolumeLayer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume* volume, int32_t prevLayer, int32_t newLayer);
		void OverrideData(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent>* components, float interpFactor);
		void ReplaceData(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack, mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeComponent>* components);
		void CheckBaseTypes();
		void CheckStack(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack);
		void Update(UnityEngine_CoreModule::UnityEngine::Transform* trigger, UnityEngine_CoreModule::UnityEngine::LayerMask layerMask);
		void Update(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::VolumeStack* stack, UnityEngine_CoreModule::UnityEngine::Transform* trigger, UnityEngine_CoreModule::UnityEngine::LayerMask layerMask);
		IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume*>* GetVolumes(UnityEngine_CoreModule::UnityEngine::LayerMask layerMask);
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume>* GrabVolumes(UnityEngine_CoreModule::UnityEngine::LayerMask mask);
		static void SortByPriority(mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume>* volumes);
		static bool IsVolumeRenderedByCamera(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::Volume* volume, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void _cctor();
	};
}

