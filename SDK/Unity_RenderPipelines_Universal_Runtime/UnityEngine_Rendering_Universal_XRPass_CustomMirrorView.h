#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_Rendering_Universal_XRPass.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct XRPass; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	struct XRPass_CustomMirrorView : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* pass, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::RenderTexture* rt, UnityEngine_CoreModule::UnityEngine::Rect viewport);
		mscorlib::System::IAsyncResult* BeginInvoke(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::XRPass* pass, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer* cmd, UnityEngine_CoreModule::UnityEngine::RenderTexture* rt, UnityEngine_CoreModule::UnityEngine::Rect viewport, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

