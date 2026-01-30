#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_EventArgs.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventSourceCreatedEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::EventSource* _EventSource_k__BackingField;
		void set_EventSource(mscorlib::System::Diagnostics::Tracing::EventSource* value);
		void _ctor();
	};
}

