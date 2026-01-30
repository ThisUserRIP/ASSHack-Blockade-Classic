#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Diagnostics_Tracing_ActivityTracker.h"
namespace mscorlib::System::Diagnostics::Tracing { struct ActivityTracker; };
namespace mscorlib::System { struct String; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Diagnostics_Tracing_EventActivityOptions.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct ActivityTracker_ActivityInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_name;
		int64_t m_uniqueId;
		mscorlib::System::Guid m_guid;
		int32_t m_activityPathGuidOffset;
		int32_t m_level;
		mscorlib::System::Diagnostics::Tracing::EventActivityOptions m_eventOptions;
		int64_t m_lastChildID;
		int32_t m_stopped;
		mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* m_creator;
		mscorlib::System::Guid m_activityIdToRestore;
		void _ctor(mscorlib::System::String* name, int64_t uniqueId, mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* creator, mscorlib::System::Guid activityIDToRestore, mscorlib::System::Diagnostics::Tracing::EventActivityOptions options);
		mscorlib::System::Guid get_ActivityId();
		static mscorlib::System::String* Path(mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* activityInfo);
		mscorlib::System::String* ToString();
		static mscorlib::System::String* LiveActivities(mscorlib::System::Diagnostics::Tracing::ActivityTracker_ActivityInfo* list);
		bool CanBeOrphan();
		void CreateActivityPathGuid(mscorlib::System::Guid& idRet, int32_t& activityPathGuidOffset);
		void CreateOverflowGuid(mscorlib::System::Guid* outPtr);
		static int32_t AddIdToGuid(mscorlib::System::Guid* outPtr, int32_t whereToAddId, uint32_t id, bool overflow);
		static void WriteNibble(uint8_t& ptr, uint8_t* endPtr, uint32_t value);
	};
}

