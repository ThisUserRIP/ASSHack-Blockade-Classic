#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev { struct StageRuntimeInterface; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "UnityEngine_Rendering_LookDev_Sky.h"
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev { struct Sky; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev
{
	struct IDataProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void FirstInitScene(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);
		void UpdateSky(UnityEngine_CoreModule::UnityEngine::Camera* camera, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::Sky sky, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* get_supportedDebugModes();
		void UpdateDebugMode(int32_t debugIndex);
		void GetShadowMask(UnityEngine_CoreModule::UnityEngine::RenderTexture& output, Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);
		void OnBeginRendering(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);
		void OnEndRendering(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* stage);
		void Cleanup(Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering::LookDev::StageRuntimeInterface* SRI);
	};
}

