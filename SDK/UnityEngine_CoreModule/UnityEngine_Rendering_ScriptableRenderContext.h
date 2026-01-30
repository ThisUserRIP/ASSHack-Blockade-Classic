#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_ShaderTagId.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShaderTagId; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ScriptableCullingParameters; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct SortingSettings; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct SortingSettings; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct DrawingSettings; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct DrawingSettings; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct FilteringSettings; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct FilteringSettings; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
#include "UnityEngine_Rendering_ComputeQueueType.h"
#include "UnityEngine_Rendering_CullingResults.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingResults; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderStateBlock; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderStateBlock; };
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "UnityEngine_Rendering_RenderStateBlock.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShadowDrawingSettings; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShadowDrawingSettings; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct ScriptableRenderContext
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		static void Internal_Cull(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& parameters, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext renderLoop, intptr_t results);
		static void InitializeSortSettings(UnityEngine_CoreModule::UnityEngine::Camera* camera, UnityEngine_CoreModule::UnityEngine::Rendering::SortingSettings& sortingSettings);
		void Submit_Internal();
		int32_t GetNumberOfCameras_Internal();
		UnityEngine_CoreModule::UnityEngine::Camera* GetCamera_Internal(int32_t index);
		void DrawRenderers_Internal(intptr_t cullResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId tagName, bool isPassTagName, intptr_t tagValues, intptr_t stateBlocks, int32_t stateCount);
		void DrawShadows_Internal(intptr_t shadowDrawingSettings);
		void ExecuteCommandBuffer_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer);
		void ExecuteCommandBufferAsync_Internal(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::ComputeQueueType queueType);
		void SetupCameraProperties_Internal(UnityEngine_CoreModule::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye);
		void DrawSkybox_Internal(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void InvokeOnRenderObjectCallback_Internal();
		void DrawWireOverlay_Impl(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void _ctor(intptr_t ptr);
		void Submit();
		int32_t GetNumberOfCameras();
		UnityEngine_CoreModule::UnityEngine::Camera* GetCamera(int32_t index);
		void DrawRenderers(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings);
		void DrawRenderers(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings, UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock& stateBlock);
		void DrawRenderers(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults cullingResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId tagName, bool isPassTagName, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId> tagValues, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock> stateBlocks);
		void DrawShadows(UnityEngine_CoreModule::UnityEngine::Rendering::ShadowDrawingSettings& settings);
		void ExecuteCommandBuffer(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer);
		void ExecuteCommandBufferAsync(UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::ComputeQueueType queueType);
		void SetupCameraProperties(UnityEngine_CoreModule::UnityEngine::Camera* camera, bool stereoSetup);
		void SetupCameraProperties(UnityEngine_CoreModule::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye);
		void DrawSkybox(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		void InvokeOnRenderObjectCallback();
		void DrawWireOverlay(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults Cull(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& parameters);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static void _cctor();
		static void Internal_Cull_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableCullingParameters& parameters, UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& renderLoop, intptr_t results);
		static void Submit_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self);
		static int32_t GetNumberOfCameras_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self);
		static UnityEngine_CoreModule::UnityEngine::Camera* GetCamera_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, int32_t index);
		static void DrawRenderers_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, intptr_t cullResults, UnityEngine_CoreModule::UnityEngine::Rendering::DrawingSettings& drawingSettings, UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings& filteringSettings, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId& tagName, bool isPassTagName, intptr_t tagValues, intptr_t stateBlocks, int32_t stateCount);
		static void DrawShadows_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, intptr_t shadowDrawingSettings);
		static void ExecuteCommandBuffer_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer);
		static void ExecuteCommandBufferAsync_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* commandBuffer, UnityEngine_CoreModule::UnityEngine::Rendering::ComputeQueueType queueType);
		static void SetupCameraProperties_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye);
		static void DrawSkybox_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void InvokeOnRenderObjectCallback_Internal_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self);
		static void DrawWireOverlay_Impl_Injected(UnityEngine_CoreModule::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, UnityEngine_CoreModule::UnityEngine::Camera* camera);
	};
}

