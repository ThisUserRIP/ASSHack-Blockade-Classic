#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
namespace mscorlib::System::Threading { struct Timer_Scheduler; };
namespace mscorlib::System::Threading { struct TimerCallback; };
namespace mscorlib::System { struct Object; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };

namespace mscorlib::System::Threading
{
	struct Timer : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::TimerCallback* callback;
		mscorlib::System::Object* state;
		int64_t due_time_ms;
		int64_t period_ms;
		int64_t next_run;
		bool disposed;
		struct StaticFields
		{
			mscorlib::System::Threading::Timer_Scheduler* scheduler;
			int64_t MaxValue;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Threading::TimerCallback* callback, mscorlib::System::Object* state, int32_t dueTime, int32_t period);
		void _ctor(mscorlib::System::Threading::TimerCallback* callback, mscorlib::System::Object* state, mscorlib::System::TimeSpan dueTime, mscorlib::System::TimeSpan period);
		void Init(mscorlib::System::Threading::TimerCallback* callback, mscorlib::System::Object* state, int64_t dueTime, int64_t period);
		bool Change(int32_t dueTime, int32_t period);
		bool Change(mscorlib::System::TimeSpan dueTime, mscorlib::System::TimeSpan period);
		void Dispose();
		bool Change(int64_t dueTime, int64_t period, bool first);
		void KeepRootedWhileScheduled();
		static int64_t GetTimeMonotonic();
		static void _cctor();
	};
}

