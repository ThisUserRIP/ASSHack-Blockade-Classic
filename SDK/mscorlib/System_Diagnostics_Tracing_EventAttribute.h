#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventKeywords.h"
#include "System_Diagnostics_Tracing_EventTask.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventTags.h"
#include "System_Diagnostics_Tracing_EventActivityOptions.h"
#include "System_Diagnostics_Tracing_EventOpcode.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _EventId_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventLevel _Level_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventKeywords _Keywords_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventTask _Task_k__BackingField;
		uint8_t _Version_k__BackingField;
		mscorlib::System::String* _Message_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventTags _Tags_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventActivityOptions _ActivityOptions_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventOpcode m_opcode;
		bool m_opcodeSet;
		void _ctor(int32_t eventId);
		int32_t get_EventId();
		void set_EventId(int32_t value);
		mscorlib::System::Diagnostics::Tracing::EventLevel get_Level();
		void set_Level(mscorlib::System::Diagnostics::Tracing::EventLevel value);
		mscorlib::System::Diagnostics::Tracing::EventKeywords get_Keywords();
		mscorlib::System::Diagnostics::Tracing::EventOpcode get_Opcode();
		void set_Opcode(mscorlib::System::Diagnostics::Tracing::EventOpcode value);
		bool get_IsOpcodeSet();
		mscorlib::System::Diagnostics::Tracing::EventTask get_Task();
		void set_Task(mscorlib::System::Diagnostics::Tracing::EventTask value);
		uint8_t get_Version();
		mscorlib::System::String* get_Message();
		void set_Message(mscorlib::System::String* value);
		mscorlib::System::Diagnostics::Tracing::EventTags get_Tags();
		mscorlib::System::Diagnostics::Tracing::EventActivityOptions get_ActivityOptions();
		void set_ActivityOptions(mscorlib::System::Diagnostics::Tracing::EventActivityOptions value);
	};
}

