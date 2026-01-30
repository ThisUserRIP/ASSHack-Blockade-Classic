#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_EventSource.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct TplEtwProvider : mscorlib::System::Diagnostics::Tracing::EventSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Diagnostics::Tracing::TplEtwProvider* Log;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_Debug();
		void DebugFacilityMessage(mscorlib::System::String* Facility, mscorlib::System::String* Message);
		void DebugFacilityMessage1(mscorlib::System::String* Facility, mscorlib::System::String* Message, mscorlib::System::String* Arg);
		void SetActivityId(mscorlib::System::Guid Id);
		void _ctor();
		static void _cctor();
	};
}

