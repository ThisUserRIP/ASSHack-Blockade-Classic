#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };

namespace UnityEngine_CoreModule::Unity::Jobs
{
	struct JobHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t jobGroup;
		int32_t version;
		static void CompleteAll(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::Unity::Jobs::JobHandle> jobs);
		static void ScheduleBatchedJobs();
		static void ScheduleBatchedJobsAndCompleteAll(void* jobs, int32_t count);
	};
}

