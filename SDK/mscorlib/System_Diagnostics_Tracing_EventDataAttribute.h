#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventOpcode.h"
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventKeywords.h"
#include "System_Diagnostics_Tracing_EventTags.h"

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventDataAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::EventLevel level;
		mscorlib::System::Diagnostics::Tracing::EventOpcode opcode;
		mscorlib::System::String* _Name_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventKeywords _Keywords_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventTags _Tags_k__BackingField;
		mscorlib::System::String* get_Name();
		mscorlib::System::Diagnostics::Tracing::EventLevel get_Level();
		mscorlib::System::Diagnostics::Tracing::EventOpcode get_Opcode();
		mscorlib::System::Diagnostics::Tracing::EventKeywords get_Keywords();
		mscorlib::System::Diagnostics::Tracing::EventTags get_Tags();
	};
}

