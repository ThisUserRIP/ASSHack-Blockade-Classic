#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_EventSource.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource; };
#include "System_Diagnostics_Tracing_EventDescriptor.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventDescriptor; };
#include "System_Diagnostics_Tracing_EventTags.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
namespace mscorlib::System::Diagnostics::Tracing { struct TraceLoggingEventTypes; };
#include "System_Diagnostics_Tracing_EventActivityOptions.h"

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventSource_EventMetadata
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::EventDescriptor Descriptor;
		mscorlib::System::Diagnostics::Tracing::EventTags Tags;
		bool EnabledForAnyListener;
		bool EnabledForETW;
		bool HasRelatedActivityID;
		uint8_t TriggersActivityTracking;
		mscorlib::System::String* Name;
		mscorlib::System::String* Message;
		IL2CPP::Array<mscorlib::System::Reflection::ParameterInfo*>* Parameters;
		mscorlib::System::Diagnostics::Tracing::TraceLoggingEventTypes* TraceLoggingEventTypes;
		mscorlib::System::Diagnostics::Tracing::EventActivityOptions ActivityOptions;
	};
}

