#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphResourceRegistry_IRenderGraphResource; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { template <typename T> struct DynamicArray_1; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TexturePool; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ComputeBufferPool; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceRegistry_RendererListResource.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphResourceRegistry_RendererListResource; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphDebugParams; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphLogger; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TextureHandle; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TextureHandle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Experimental_Rendering_RendererList.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererList; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RendererListHandle; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RendererListHandle; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ComputeBufferHandle; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ComputeBufferHandle; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ResourceHandle; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ResourceHandle; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraphResourceType.h"
namespace mscorlib::System { struct String; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_TextureHandle.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TextureDesc; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct TextureDesc; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphResourceRegistry_TextureResource; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_TextureDesc.h"
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_RendererListHandle.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererListDesc; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererListDesc; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferHandle.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ComputeBufferDesc; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct ComputeBufferDesc; };
#include "UnityEngine_Experimental_Rendering_RenderGraphModule_ComputeBufferDesc.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphResourceRegistry_ComputeBufferResource; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule { struct RenderGraphContext; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	struct RenderGraphResourceRegistry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicArray_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_IRenderGraphResource>*>* m_Resources;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TexturePool* m_TexturePool;
		int32_t m_TextureCreationIndex;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferPool* m_ComputeBufferPool;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicArray_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_RendererListResource>* m_RendererListResources;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_RenderGraphDebug;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger;
		int32_t m_CurrentFrameIndex;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* m_CurrentBackbuffer;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId s_EmptyName;
			Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_CurrentRegistry;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* get_current();
		static void set_current(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* GetTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& handle);
		bool TextureNeedsFallback(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& handle);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererList GetRendererList(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle& handle);
		UnityEngine_CoreModule::UnityEngine::ComputeBuffer* GetComputeBuffer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle& handle);
		void _ctor();
		void _ctor(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);
		void BeginRender(int32_t currentFrameIndex, int32_t executionCount);
		void EndRender();
		void CheckHandleValidity(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& res);
		void CheckHandleValidity(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);
		void IncrementWriteCount(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& res);
		mscorlib::System::String* GetResourceName(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& res);
		mscorlib::System::String* GetResourceName(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);
		bool IsResourceImported(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& res);
		bool IsResourceCreated(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& res);
		bool IsRendererListCreated(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle& res);
		bool IsResourceImported(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);
		int32_t GetResourceTransientIndex(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& res);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ImportTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* rt);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier rt);
		template <typename ResType> int32_t AddNewResource(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::DynamicArray_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_IRenderGraphResource>* resourceArray, ResType& outRes)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddNewResource", std::vector<std::string> { "UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/IRenderGraphResource>", GetGenericTypeName<ResType>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = ResType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)resourceArray;
			params[1] = (intptr_t)&outRes;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& desc, int32_t transientPassIndex);
		int32_t GetTextureResourceCount();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource* GetTextureResource(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& handle);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc GetTextureResourceDesc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& handle);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc& desc);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle ImportComputeBuffer(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* computeBuffer);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle CreateComputeBuffer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc& desc, int32_t transientPassIndex);
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc GetComputeBufferResourceDesc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& handle);
		int32_t GetComputeBufferResourceCount();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ComputeBufferResource* GetComputeBufferResource(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle& handle);
		void CreateAndClearTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext, int32_t index);
		void CreateComputeBuffer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext, int32_t index);
		void ReleaseTexture(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext, int32_t index);
		void ReleaseComputeBuffer(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext, int32_t index);
		void ValidateTextureDesc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc& desc);
		void ValidateRendererListDesc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererListDesc& desc);
		void ValidateComputeBufferDesc(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc& desc);
		void CreateRendererLists(mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* rendererLists);
		void Clear(bool onException);
		void PurgeUnusedResources();
		void Cleanup();
		void LogTextureCreation(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource* rt);
		void LogTextureRelease(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_TextureResource* rt);
		void LogComputeBufferCreation(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ComputeBufferResource* buffer);
		void LogComputeBufferRelease(Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry_ComputeBufferResource* buffer);
		void LogResources();
		static void _cctor();
	};
}

