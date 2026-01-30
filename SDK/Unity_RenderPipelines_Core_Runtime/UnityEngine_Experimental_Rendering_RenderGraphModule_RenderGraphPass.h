#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_TextureHandle.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TextureHandle; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_ResourceHandle.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ResourceHandle; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RendererListHandle.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RendererListHandle; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { template <typename PassData> struct RenderFunc_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphContext; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphObjectPool; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_DepthAccess.h"

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraphPass : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name_k__BackingField;
		int32_t _index_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* _customSampler_k__BackingField;
		bool _enableAsyncCompute_k__BackingField;
		bool _allowPassCulling_k__BackingField;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _depthBuffer_k__BackingField;
		IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>* _colorBuffers_k__BackingField;
		int32_t _colorBufferMaxIndex_k__BackingField;
		int32_t _refCount_k__BackingField;
		bool _generateDebugData_k__BackingField;
		IL2CPP::Array<mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>* resourceReadLists;
		IL2CPP::Array<mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>* resourceWriteLists;
		IL2CPP::Array<mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>* transientResourceList;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* usedRendererListList;
		template <typename PassData> Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* GetExecuteDelegate()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExecuteDelegate");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = PassData::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*)returnValue;
		}
		void Execute(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* renderGraphContext);
		void Release(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* pool);
		bool HasRenderFunc();
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		int32_t get_index();
		void set_index(int32_t value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* get_customSampler();
		void set_customSampler(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* value);
		bool get_enableAsyncCompute();
		void set_enableAsyncCompute(bool value);
		bool get_allowPassCulling();
		void set_allowPassCulling(bool value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_depthBuffer();
		void set_depthBuffer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);
		IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>* get_colorBuffers();
		void set_colorBuffers(IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>* value);
		int32_t get_colorBufferMaxIndex();
		void set_colorBufferMaxIndex(int32_t value);
		int32_t get_refCount();
		void set_refCount(int32_t value);
		bool get_generateDebugData();
		void set_generateDebugData(bool value);
		void _ctor();
		void Clear();
		void AddResourceWrite(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& res);
		void AddResourceRead(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& res);
		void AddTransientResource(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& res);
		void UseRendererList(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle rendererList);
		void EnableAsyncCompute(bool value);
		void AllowPassCulling(bool value);
		void GenerateDebugData(bool value);
		void SetColorBuffer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle resource, int32_t index);
		void SetDepthBuffer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle resource, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess flags);
	};
}

