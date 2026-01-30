#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired
{
	struct Profiler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* SKlihQqFjsKWAuerzUvtuUPBxtV;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void GxgpgcjnYrcDOtKXzhnFtRrxaAV();
		static bool get_enableBinaryLog();
		static void set_enableBinaryLog(bool value);
		static bool get_enabled();
		static void set_enabled(bool value);
		static mscorlib::System::String* get_logFile();
		static void set_logFile(mscorlib::System::String* value);
		static bool get_supported();
		static uint32_t get_usedHeapSize();
		static int64_t get_usedHeapSizeLong();
		static void AddFramesFromFile(mscorlib::System::String* file);
		static void BeginSample(mscorlib::System::String* name);
		static void BeginSample(mscorlib::System::String* name, UnityEngine_CoreModule::UnityEngine::Object* targetObject);
		static void EndSample();
		static uint32_t GetMonoHeapSize();
		static int64_t GetMonoHeapSizeLong();
		static uint32_t GetMonoUsedSize();
		static int64_t GetMonoUsedSizeLong();
		static int32_t GetRuntimeMemorySize(UnityEngine_CoreModule::UnityEngine::Object* o);
		static int64_t GetRuntimeMemorySizeLong(UnityEngine_CoreModule::UnityEngine::Object* o);
		static uint32_t GetTotalAllocatedMemory();
		static int64_t GetTotalAllocatedMemoryLong();
		static uint32_t GetTotalReservedMemory();
		static int64_t GetTotalReservedMemoryLong();
		static uint32_t GetTotalUnusedReservedMemory();
		static int64_t GetTotalUnusedReservedMemoryLong();
	};
}

