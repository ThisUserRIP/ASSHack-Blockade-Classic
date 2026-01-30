#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
#include "System_Diagnostics_Tracing_EventFieldTags.h"
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventFieldFormat.h"

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventFieldAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::EventFieldTags _Tags_k__BackingField;
		mscorlib::System::String* _Name_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventFieldFormat _Format_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventFieldTags get_Tags();
		mscorlib::System::String* get_Name();
		mscorlib::System::Diagnostics::Tracing::EventFieldFormat get_Format();
	};
}

