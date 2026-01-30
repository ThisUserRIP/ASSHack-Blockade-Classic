#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Concurrent { template <typename TKey, typename TValue> struct ConcurrentDictionary_2; };
namespace mscorlib::System { template <typename T1, typename T2> struct Tuple_2; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Diagnostics_Tracing_EventKeywords.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct ActivityFilter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<mscorlib::System::Guid, mscorlib::System::Int32>* m_activeActivities;
		mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<mscorlib::System::Guid, mscorlib::System::Tuple_2<mscorlib::System::Guid, mscorlib::System::Int32>>* m_rootActiveActivities;
		mscorlib::System::Guid m_providerGuid;
		int32_t m_eventId;
		int32_t m_samplingFreq;
		int32_t m_curSampleCount;
		int32_t m_perEventSourceSessionId;
		mscorlib::System::Diagnostics::Tracing::ActivityFilter* m_next;
		mscorlib::System::Action_1<mscorlib::System::Guid>* m_myActivityDelegate;
		static void DisableFilter(mscorlib::System::Diagnostics::Tracing::ActivityFilter& filterList, mscorlib::System::Diagnostics::Tracing::EventSource* source);
		static void UpdateFilter(mscorlib::System::Diagnostics::Tracing::ActivityFilter& filterList, mscorlib::System::Diagnostics::Tracing::EventSource* source, int32_t perEventSourceSessionId, mscorlib::System::String* startEvents);
		static bool PassesActivityFilter(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList, mscorlib::System::Guid* childActivityID, bool triggeringEvent, mscorlib::System::Diagnostics::Tracing::EventSource* source, int32_t eventId);
		static void FlowActivityIfNeeded(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList, mscorlib::System::Guid* currentActivityId, mscorlib::System::Guid* childActivityID);
		static void UpdateKwdTriggers(mscorlib::System::Diagnostics::Tracing::ActivityFilter* activityFilter, mscorlib::System::Guid sourceGuid, mscorlib::System::Diagnostics::Tracing::EventSource* source, mscorlib::System::Diagnostics::Tracing::EventKeywords sessKeywords);
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Tuple_2<mscorlib::System::Int32, mscorlib::System::Int32>>* GetFilterAsTuple(mscorlib::System::Guid sourceGuid);
		void Dispose();
		void _ctor(mscorlib::System::Diagnostics::Tracing::EventSource* source, int32_t perEventSourceSessionId, int32_t eventId, int32_t samplingFreq, mscorlib::System::Diagnostics::Tracing::ActivityFilter* existingFilter);
		static void EnsureActivityCleanupDelegate(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList);
		static mscorlib::System::Action_1<mscorlib::System::Guid>* GetActivityDyingDelegate(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList);
		static bool EnableFilter(mscorlib::System::Diagnostics::Tracing::ActivityFilter& filterList, mscorlib::System::Diagnostics::Tracing::EventSource* source, int32_t perEventSourceSessionId, int32_t eventId, int32_t samplingFreq);
		static void TrimActiveActivityStore(mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<mscorlib::System::Guid, mscorlib::System::Int32>* activities);
		static mscorlib::System::Collections::Concurrent::ConcurrentDictionary_2<mscorlib::System::Guid, mscorlib::System::Int32>* GetActiveActivities(mscorlib::System::Diagnostics::Tracing::ActivityFilter* filterList);
	};
}

