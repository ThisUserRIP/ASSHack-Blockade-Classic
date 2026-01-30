#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Cubemap; };
namespace UnityEngine_CoreModule::UnityEngine { struct CubemapArray; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture3D; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "UnityEngine_Rendering_ClearFlag.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandle; };
#include "..\UnityEngine_CoreModule\UnityEngine_CubemapFace.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderBufferLoadAction.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderBufferStoreAction.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureFormat.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_MSAASamples.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_TextureDimension.h"
#include "..\UnityEngine_CoreModule\UnityEngine_TextureFormat.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct MaterialPropertyBlock; };
namespace UnityEngine_CoreModule::UnityEngine { struct Shader; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeShader; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_ScriptableRenderContext.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableRenderContext; };
#include "UnityEngine_Experimental_Rendering_RendererList.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering { struct RendererList; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct CoreUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* lookAtList;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* upVectorList;
			int32_t editMenuPriority1;
			int32_t editMenuPriority2;
			int32_t editMenuPriority3;
			int32_t editMenuPriority4;
			int32_t assetCreateMenuPriority1;
			int32_t assetCreateMenuPriority2;
			int32_t assetCreateMenuPriority3;
			int32_t gameObjectMenuPriority;
			UnityEngine_CoreModule::UnityEngine::Cubemap* m_BlackCubeTexture;
			UnityEngine_CoreModule::UnityEngine::Cubemap* m_MagentaCubeTexture;
			UnityEngine_CoreModule::UnityEngine::CubemapArray* m_MagentaCubeTextureArray;
			UnityEngine_CoreModule::UnityEngine::Cubemap* m_WhiteCubeTexture;
			UnityEngine_CoreModule::UnityEngine::RenderTexture* m_EmptyUAV;
			UnityEngine_CoreModule::UnityEngine::Texture3D* m_BlackVolumeTexture;
			mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>* m_AssemblyTypes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Cubemap* get_blackCubeTexture();
		static UnityEngine_CoreModule::UnityEngine::Cubemap* get_magentaCubeTexture();
		static UnityEngine_CoreModule::UnityEngine::CubemapArray* get_magentaCubeTextureArray();
		static UnityEngine_CoreModule::UnityEngine::Cubemap* get_whiteCubeTexture();
		static UnityEngine_CoreModule::UnityEngine::RenderTexture* get_emptyUAV();
		static UnityEngine_CoreModule::UnityEngine::Texture3D* get_blackVolumeTexture();
		static void ClearRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		static int32_t FixupDepthSlice(int32_t depthSlice, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* buffer);
		static int32_t FixupDepthSlice(int32_t depthSlice, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier buffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction loadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction storeAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier buffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction loadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction storeAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine_CoreModule::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag);
		static void SetViewportAndClear(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* buffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* colorBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* colorBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* colorBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor, int32_t miplevel, UnityEngine_CoreModule::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag);
		static void SetRenderTarget(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* depthBuffer, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::ClearFlag clearFlag, UnityEngine_CoreModule::UnityEngine::Color clearColor);
		static void SetViewport(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* target);
		static mscorlib::System::String* GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, mscorlib::System::String* name, bool mips, bool enableMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples);
		static mscorlib::System::String* GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, mscorlib::System::String* name, bool mips, bool enableMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples);
		static mscorlib::System::String* GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, bool enableMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes);
		static mscorlib::System::String* GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, mscorlib::System::String* format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, bool enableMSAA, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes);
		static mscorlib::System::String* GetTextureAutoName(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, int32_t depth);
		static mscorlib::System::String* GetTextureAutoName(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, int32_t depth);
		static mscorlib::System::String* GetTextureAutoName(int32_t width, int32_t height, mscorlib::System::String* format, UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension dim, mscorlib::System::String* name, bool mips, int32_t depth);
		static void ClearCubemap(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::RenderTexture* renderTexture, UnityEngine_CoreModule::UnityEngine::Color clearColor, bool clearMips);
		static void DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);
		static void DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);
		static void DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);
		static void DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);
		static void DrawFullScreen(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Material* material, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier>* colorBuffers, UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);
		static UnityEngine_CoreModule::UnityEngine::Color ConvertSRGBToActiveColorSpace(UnityEngine_CoreModule::UnityEngine::Color color);
		static UnityEngine_CoreModule::UnityEngine::Color ConvertLinearToActiveColorSpace(UnityEngine_CoreModule::UnityEngine::Color color);
		static UnityEngine_CoreModule::UnityEngine::Material* CreateEngineMaterial(mscorlib::System::String* shaderPath);
		static UnityEngine_CoreModule::UnityEngine::Material* CreateEngineMaterial(UnityEngine_CoreModule::UnityEngine::Shader* shader);
		template <typename T> static bool HasFlag(T* mask, T* flag)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasFlag", std::vector<std::string> { GetGenericTypeName<T>(), GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)mask;
			params[1] = (intptr_t)flag;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
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
		template <typename T> static void Swap(T& a, T& b)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Swap", std::vector<std::string> { GetGenericTypeName<T>() + (std::string)"&", GetGenericTypeName<T>() + (std::string)"&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&a;
			params[1] = (intptr_t)&b;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void SetKeyword(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, mscorlib::System::String* keyword, bool state);
		static void SetKeyword(UnityEngine_CoreModule::UnityEngine::Material* material, mscorlib::System::String* keyword, bool state);
		static void SetKeyword(UnityEngine_CoreModule::UnityEngine::ComputeShader* cs, mscorlib::System::String* keyword, bool state);
		static void Destroy(UnityEngine_CoreModule::UnityEngine::Object* obj);
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>* GetAllAssemblyTypes();
		template <typename T> static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>* GetAllTypesDerivedFrom()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllTypesDerivedFrom");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Type>*)returnValue;
		}
		static void SafeRelease(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* buffer);
		static UnityEngine_CoreModule::UnityEngine::Mesh* CreateCubeMesh(UnityEngine_CoreModule::UnityEngine::Vector3 min, UnityEngine_CoreModule::UnityEngine::Vector3 max);
		static bool ArePostProcessesEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static bool AreAnimatedMaterialsEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static bool IsSceneLightingDisabled(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static bool IsLightOverlapDebugEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static bool IsSceneViewFogEnabled(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void DrawRendererList(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext renderContext, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RendererList rendererList);
		static void _cctor();
	};
}

