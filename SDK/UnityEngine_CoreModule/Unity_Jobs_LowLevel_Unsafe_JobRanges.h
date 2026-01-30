#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace UnityEngine_CoreModule::Unity::Jobs::LowLevel::Unsafe
{
	struct JobRanges
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t BatchSize;
		int32_t NumJobs;
		int32_t TotalIterationCount;
		int32_t NumPhases;
		intptr_t StartEndIndex;
		intptr_t PhaseData;
	};
}

