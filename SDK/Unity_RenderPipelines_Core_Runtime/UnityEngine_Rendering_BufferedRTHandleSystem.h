#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandle; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandleSystem; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_RTHandleProperties.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering { struct RTHandleProperties; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { template <typename T1, typename T2, typename TResult> struct Func_3; };
#include "UnityEngine_Rendering_MSAASamples.h"

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct BufferedRTHandleSystem : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, IL2CPP::Array<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle*>>* m_RTHandles;
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem* m_RTHandleSystem;
		bool m_DisposedValue;
		int32_t get_maxWidth();
		int32_t get_maxHeight();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();
		Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle* GetFrameRT(int32_t bufferId, int32_t frameIndex);
		void AllocBuffer(int32_t bufferId, mscorlib::System::Func_3<Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandleSystem, mscorlib::System::Int32, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::RTHandle>* allocator, int32_t bufferCount);
		void ReleaseBuffer(int32_t bufferId);
		void SwapAndSetReferenceSize(int32_t width, int32_t height, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::MSAASamples msaaSamples);
		void ResetReferenceSize(int32_t width, int32_t height);
		void Swap();
		void Dispose(bool disposing);
		void Dispose();
		void ReleaseAll();
		void _ctor();
	};
}

