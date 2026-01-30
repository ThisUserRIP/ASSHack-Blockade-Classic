#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Diagnostics::Tracing { struct PropertyAnalysis; };
namespace mscorlib::System { struct String; };
#include "System_Diagnostics_Tracing_EventKeywords.h"
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventOpcode.h"
#include "System_Diagnostics_Tracing_EventTags.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventDataAttribute; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct TypeAnalysis : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Diagnostics::Tracing::PropertyAnalysis*>* properties;
		mscorlib::System::String* name;
		mscorlib::System::Diagnostics::Tracing::EventKeywords keywords;
		mscorlib::System::Diagnostics::Tracing::EventLevel level;
		mscorlib::System::Diagnostics::Tracing::EventOpcode opcode;
		mscorlib::System::Diagnostics::Tracing::EventTags tags;
		void _ctor(mscorlib::System::Type* dataType, mscorlib::System::Diagnostics::Tracing::EventDataAttribute* eventAttrib, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Type>* recursionCheck);
	};
}

