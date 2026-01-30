#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Unity_Jobs_JobHandle.h"
namespace UnityEngine_CoreModule::Unity::Jobs { struct JobHandle; };
namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe { struct JobsUtility_JobScheduleParameters; };
namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe { struct JobsUtility_JobScheduleParameters; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe
{
	struct JobsUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::Unity::Jobs::JobHandle Schedule(UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters);
		static intptr_t CreateJobReflectionData(mscorlib::System::Type* wrapperJobType, mscorlib::System::Type* userJobType, mscorlib::System::Object* managedJobFunction0, mscorlib::System::Object* managedJobFunction1, mscorlib::System::Object* managedJobFunction2);
		static intptr_t CreateJobReflectionData(mscorlib::System::Type* type, mscorlib::System::Object* managedJobFunction0, mscorlib::System::Object* managedJobFunction1, mscorlib::System::Object* managedJobFunction2);
		static void Schedule_Injected(UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, UnityEngine_CoreModule::Unity::Jobs::JobHandle& ret);
	};
}

