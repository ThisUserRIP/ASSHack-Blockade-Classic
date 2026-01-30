#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_EventArgs.h"
#include "System_Diagnostics_Tracing_EventCommand.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventDispatcher; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventListener; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Diagnostics_Tracing_EventLevel.h"
#include "System_Diagnostics_Tracing_EventKeywords.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventCommandEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::EventCommand _Command_k__BackingField;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* _Arguments_k__BackingField;
		mscorlib::System::Diagnostics::Tracing::EventSource* eventSource;
		mscorlib::System::Diagnostics::Tracing::EventDispatcher* dispatcher;
		mscorlib::System::Diagnostics::Tracing::EventListener* listener;
		int32_t perEventSourceSessionId;
		int32_t etwSessionId;
		bool enable;
		mscorlib::System::Diagnostics::Tracing::EventLevel level;
		mscorlib::System::Diagnostics::Tracing::EventKeywords matchAnyKeyword;
		mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs* nextCommand;
		mscorlib::System::Diagnostics::Tracing::EventCommand get_Command();
		void set_Command(mscorlib::System::Diagnostics::Tracing::EventCommand value);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* get_Arguments();
		void set_Arguments(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* value);
		void _ctor(mscorlib::System::Diagnostics::Tracing::EventCommand command, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* arguments, mscorlib::System::Diagnostics::Tracing::EventSource* eventSource, mscorlib::System::Diagnostics::Tracing::EventListener* listener, int32_t perEventSourceSessionId, int32_t etwSessionId, bool enable, mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventKeywords matchAnyKeyword);
	};
}

