#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine::Profiling
{
	struct Recorder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Profiling::Recorder* s_InvalidRecorder;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(intptr_t ptr);
		void Finalize();
		bool get_isValid();
		static void DisposeNative(intptr_t ptr);
		bool get_enabled();
		void set_enabled(bool value);
		bool IsEnabled();
		void SetEnabled(bool enabled);
		int64_t get_elapsedNanoseconds();
		int64_t get_gpuElapsedNanoseconds();
		int64_t GetElapsedNanoseconds();
		int64_t GetGpuElapsedNanoseconds();
		int32_t get_sampleBlockCount();
		int32_t get_gpuSampleBlockCount();
		int32_t GetSampleBlockCount();
		int32_t GetGpuSampleBlockCount();
		static void _cctor();
	};
}

