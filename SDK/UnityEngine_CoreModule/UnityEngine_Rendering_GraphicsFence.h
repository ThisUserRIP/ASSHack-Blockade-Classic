#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_GraphicsFenceType.h"
#include "UnityEngine_Rendering_SynchronisationStageFlags.h"
#include "UnityEngine_Rendering_SynchronisationStage.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct GraphicsFence
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		int32_t m_Version;
		UnityEngine_CoreModule::UnityEngine::Rendering::GraphicsFenceType m_FenceType;
		static UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStageFlags TranslateSynchronizationStageToFlags(UnityEngine_CoreModule::UnityEngine::Rendering::SynchronisationStage s);
		void InitPostAllocation();
		bool IsFencePending();
		void Validate();
		int32_t GetPlatformNotSupportedVersion();
		static int32_t GetVersionNumber(intptr_t fencePtr);
	};
}

