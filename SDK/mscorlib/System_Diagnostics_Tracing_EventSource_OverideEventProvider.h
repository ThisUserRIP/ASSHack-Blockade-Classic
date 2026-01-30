#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Diagnostics_Tracing_EventProvider.h"
#include "System_Diagnostics_Tracing_EventSource.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Diagnostics_Tracing_ControllerCommand.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventSource_OverideEventProvider : mscorlib::System::Diagnostics::Tracing::EventProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::EventSource* m_eventSource;
		void _ctor(mscorlib::System::Diagnostics::Tracing::EventSource* eventSource);
		void OnControllerCommand(mscorlib::System::Diagnostics::Tracing::ControllerCommand command, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* arguments, int32_t perEventSourceSessionId, int32_t etwSessionId);
	};
}

