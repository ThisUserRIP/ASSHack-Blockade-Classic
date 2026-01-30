#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_EventKeywords.h"
#include "System_Diagnostics_Tracing_EventTags.h"
#include "System_Diagnostics_Tracing_EventActivityOptions.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventOpcode.h"

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventSourceOptions
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::EventKeywords keywords;
		mscorlib::System::Diagnostics::Tracing::EventTags tags;
		mscorlib::System::Diagnostics::Tracing::EventActivityOptions activityOptions;
		uint8_t level;
		uint8_t opcode;
		uint8_t valuesSet;
		void set_Level(mscorlib::System::Diagnostics::Tracing::EventLevel value);
		void set_Opcode(mscorlib::System::Diagnostics::Tracing::EventOpcode value);
		void set_Keywords(mscorlib::System::Diagnostics::Tracing::EventKeywords value);
	};
}

