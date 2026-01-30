#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Diagnostics::Tracing { struct ActivityTracker_ActivityInfo; };
namespace mscorlib::System::Threading { template <typename T> struct AsyncLocal_1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct Guid; };
#include "System_Diagnostics_Tracing_EventActivityOptions.h"
#include "System_Threading_AsyncLocalValueChangedArgs_1.h"
namespace mscorlib::System::Threading { template <typename T> struct AsyncLocalValueChangedArgs_1; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct ActivityTracker : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::AsyncLocal_1<mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo>* m_current;
		bool m_checkedForEnable;
		struct StaticFields
		{
			mscorlib::System::Diagnostics::Tracing::ActivityTracker* s_activityTrackerInstance;
			int64_t m_nextId;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void OnStart(mscorlib::System::String* providerName, mscorlib::System::String* activityName, int32_t task, mscorlib::System::Guid& activityId, mscorlib::System::Guid& relatedActivityId, mscorlib::System::Diagnostics::Tracing::EventActivityOptions options);
		void OnStop(mscorlib::System::String* providerName, mscorlib::System::String* activityName, int32_t task, mscorlib::System::Guid& activityId);
		void Enable();
		static mscorlib::System::Diagnostics::Tracing::ActivityTracker* get_Instance();
		mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* FindActiveActivity(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* startLocation);
		mscorlib::System::String* NormalizeActivityName(mscorlib::System::String* providerName, mscorlib::System::String* activityName, int32_t task);
		void ActivityChanging(mscorlib::System::Threading::AsyncLocalValueChangedArgs_1<mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo> args);
		void _ctor();
		static void _cctor();
	};
}

