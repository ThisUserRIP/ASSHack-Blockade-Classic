#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };

namespace System::System::Diagnostics
{
	struct Stopwatch : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t elapsed;
		int64_t started;
		bool is_running;
		struct StaticFields
		{
			int64_t Frequency;
			bool IsHighResolution;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int64_t GetTimestamp();
		static System::Diagnostics::Stopwatch* StartNew();
		void _ctor();
		mscorlib::System::TimeSpan get_Elapsed();
		int64_t get_ElapsedMilliseconds();
		int64_t get_ElapsedTicks();
		bool get_IsRunning();
		void Reset();
		void Start();
		void Stop();
		static void _cctor();
	};
}

