#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Profiling
{
	struct Profiler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int64_t GetRuntimeMemorySizeLong(UnityEngine_CoreModule::UnityEngine::Object* o);
		static int64_t GetMonoUsedSizeLong();
		static int64_t GetTotalAllocatedMemoryLong();
		static int64_t GetTotalReservedMemoryLong();
	};
}

