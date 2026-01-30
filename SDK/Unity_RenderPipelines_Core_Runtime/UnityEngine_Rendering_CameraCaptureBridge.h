#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rendering_RenderTargetIdentifier.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderTargetIdentifier; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CommandBuffer; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
namespace System_Core::System::Collections::Generic { template <typename T> struct HashSet_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };

namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	struct CameraCaptureBridge : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::Dictionary_2<UnityEngine_CoreModule::UnityEngine::Camera, System_Core::System::Collections::Generic::HashSet_1<mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer>>>* actionDict;
			bool _enabled;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_enabled();
		static void set_enabled(bool value);
		static mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer>>* GetCaptureActions(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		static void AddCaptureAction(UnityEngine_CoreModule::UnityEngine::Camera* camera, mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer>* action);
		static void RemoveCaptureAction(UnityEngine_CoreModule::UnityEngine::Camera* camera, mscorlib::System::Action_2<UnityEngine_CoreModule::UnityEngine::Rendering::RenderTargetIdentifier, UnityEngine_CoreModule::UnityEngine::Rendering::CommandBuffer>* action);
		static void _cctor();
	};
}

