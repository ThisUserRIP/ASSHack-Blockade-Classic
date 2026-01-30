#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphResourceRegistry; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphObjectPool; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphPass; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RendererListHandle.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RendererListHandle; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphDebugParams; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphLogger; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphDefaultResources; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct ProfilingSampler; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphContext; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_CompiledResourceInfo.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraph_CompiledResourceInfo; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { template <typename T> struct DynamicArray_1; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_CompiledPassInfo.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraph_CompiledPassInfo; };
namespace System::System::Collections::Generic { template <typename T> struct Stack_1; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphDebugData; };
namespace mscorlib::System { struct String; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraph_OnGraphRegisteredDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_TextureHandle.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TextureHandle; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TextureDesc; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TextureDesc; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_TextureDesc.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererListDesc; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererListDesc; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferHandle.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ComputeBufferHandle; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ComputeBufferDesc; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ComputeBufferDesc; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferDesc.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphBuilder.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphBuilder; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphParameters; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphParameters; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphDebugData_ResourceDebugData; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphDebugData_ResourceDebugData; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraph : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* m_RenderGraphPool;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass>* m_RenderPasses;
		mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* m_RendererLists;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_DebugParameters;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* m_DefaultResources;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler>* m_DefaultProfilingSamplers;
		bool m_ExecutionExceptionWasRaised;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* m_RenderGraphContext;
		UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* m_PreviousCommandBuffer;
		int32_t m_CurrentImmediatePassIndex;
		IL2CPP::Array<mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>*>* m_ImmediateModeResourceList;
		IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicArray_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>*>* m_CompiledResourcesInfos;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicArray_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* m_CompiledPassInfos;
		System::System::Collections::Generic::Stack_1<mscorlib::System::Int32>* m_CullingStack;
		int32_t m_ExecutionCount;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData* m_RenderGraphDebugData;
		mscorlib::System::String* _name_k__BackingField;
		struct StaticFields
		{
			int32_t kMaxMRTCount;
			mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph>* s_RegisteredGraphs;
			bool _requireDebugData_k__BackingField;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* onGraphRegistered;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* onGraphUnregistered;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		static bool get_requireDebugData();
		static void set_requireDebugData(bool value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* get_defaultResources();
		void _ctor(mscorlib::System::String* name);
		void Cleanup();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData* GetDebugData();
		void EndFrame();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ImportTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rt);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& desc);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);
		void CreateTextureIfInvalid(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& desc, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& texture);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc GetTextureDesc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc& desc);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle ImportComputeBuffer(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* computeBuffer);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle CreateComputeBuffer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc& desc);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle CreateComputeBuffer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle& computeBuffer);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc GetComputeBufferDesc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle& computeBuffer);
		template <typename PassData> Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder AddRenderPass(mscorlib::System::String* passName, PassData& passData, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* sampler)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRenderPass", std::vector<std::string> { "System.String", GetGenericTypeName<PassData>() + (std::string)"&", "UnityEngine.Rendering.ProfilingSampler" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = PassData::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)passName;
			params[1] = (intptr_t)&passData;
			params[2] = (intptr_t)sampler;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder ret;
				std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder));
				return ret;
			}
			return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder*)il2cpp_object_unbox(returnValue));
		}
		template <typename PassData> Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder AddRenderPass(mscorlib::System::String* passName, PassData& passData)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddRenderPass", std::vector<std::string> { "System.String", GetGenericTypeName<PassData>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = PassData::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)passName;
			params[1] = (intptr_t)&passData;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder ret;
				std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder));
				return ret;
			}
			return static_cast<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder>(*(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder*)il2cpp_object_unbox(returnValue));
		}
		void Begin(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters& parameters);
		void Execute();
		void BeginProfilingSampler(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* sampler);
		void EndProfilingSampler(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* sampler);
		static mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph>* GetRegisteredRenderGraphs();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicArray_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo>* GetCompiledPassInfos();
		void ClearCompiledGraph();
		void InvalidateContext();
		void OnPassAdded(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass);
		static void add_onGraphRegistered(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);
		static void remove_onGraphRegistered(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);
		static void add_onGraphUnregistered(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);
		static void remove_onGraphUnregistered(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_OnGraphRegisteredDelegate* value);
		void InitResourceInfosData(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicArray_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo>* resourceInfos, int32_t count);
		void InitializeCompilationData();
		void CountReferences();
		void CullOutputlessPasses();
		void CullUnusedPasses();
		void UpdatePassSynchronization(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo& currentPassInfo, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo& producerPassInfo, int32_t currentPassIndex, int32_t lastProducer, int32_t& intLastSyncIndex);
		void UpdateResourceSynchronization(int32_t& lastGraphicsPipeSync, int32_t& lastComputePipeSync, int32_t currentPassIndex, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo& resource);
		int32_t GetLatestProducerIndex(int32_t passIndex, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo& info);
		int32_t GetLatestValidReadIndex(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo& info);
		int32_t GetFirstValidWriteIndex(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo& info);
		int32_t GetLatestValidWriteIndex(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledResourceInfo& info);
		void UpdateResourceAllocationAndSynchronization();
		void CompileRenderGraph();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo& CompilePassImmediatly(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass);
		void ExecutePassImmediatly(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass);
		void ExecuteCompiledPass(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo& passInfo, int32_t passIndex);
		void ExecuteRenderGraph();
		void PreRenderPassSetRenderTargets(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo& passInfo, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext);
		void PreRenderPassExecute(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo& passInfo, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext);
		void PostRenderPassExecute(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo& passInfo, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext);
		void ClearRenderPasses();
		void ReleaseImmediateModeResources();
		void LogFrameInformation();
		void LogRendererListsCreation();
		void LogRenderPassBegin(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph_CompiledPassInfo& passInfo);
		void LogCulledPasses();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ProfilingSampler* GetDefaultProfilingSampler(mscorlib::System::String* name);
		void UpdateImportedResourceLifeTime(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData_ResourceDebugData& data, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* passList);
		void GenerateDebugData();
		static void _cctor();
	};
}

