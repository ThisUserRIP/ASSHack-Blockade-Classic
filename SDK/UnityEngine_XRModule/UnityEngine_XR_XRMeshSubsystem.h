#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRMeshSubsystemDescriptor; };
#include "..\UnityEngine_SubsystemsModule\UnityEngine_IntegratedSubsystem_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_XR_MeshGenerationResult.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct MeshGenerationResult; };
namespace mscorlib::System { template <typename T> struct Action_1; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct XRMeshSubsystem : UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem_1<UnityEngine_XRModule::UnityEngine::XR::XRMeshSubsystemDescriptor>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void InvokeMeshReadyDelegate(UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult result, mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::MeshGenerationResult>* onMeshGenerationComplete);
		void _ctor();
	};
}

