#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderer.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer; };
#include "UnityEngine_Rendering_Universal_RenderPassEvent.h"
#include "..\UnityEngine_CoreModule\Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderPass; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "UnityEngine_Rendering_Universal_ScriptableRenderer_RenderBlocks_BlockRange.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct ScriptableRenderer_RenderBlocks_BlockRange; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct ScriptableRenderer_RenderBlocks
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderPassEvent> m_BlockEventLimits;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> m_BlockRanges;
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> m_BlockRangeLengths;
		void _ctor(mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass>* activeRenderPassQueue);
		void Dispose();
		void FillBlockRanges(mscorlib::System::Collections::Generic::List_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderPass>* activeRenderPassQueue);
		int32_t GetLength(int32_t index);
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks_BlockRange GetRange(int32_t index);
	};
}

