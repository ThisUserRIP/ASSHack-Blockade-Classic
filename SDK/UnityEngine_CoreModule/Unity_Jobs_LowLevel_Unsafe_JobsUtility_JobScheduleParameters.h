#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Unity_Jobs_LowLevel_Unsafe_JobsUtility.h"
namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe { struct JobsUtility; };
#include "Unity_Jobs_JobHandle.h"
namespace UnityEngine_CoreModule::Unity::Jobs { struct JobHandle; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Unity_Jobs_LowLevel_Unsafe_ScheduleMode.h"

namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe
{
	struct JobsUtility_JobScheduleParameters
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::Unity::Jobs::JobHandle Dependency;
		int32_t ScheduleMode;
		intptr_t ReflectionData;
		intptr_t JobDataPtr;
		void _ctor(void* i_jobData, intptr_t i_reflectionData, UnityEngine_CoreModule::Unity::Jobs::JobHandle i_dependency, UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::ScheduleMode i_scheduleMode);
	};
}

