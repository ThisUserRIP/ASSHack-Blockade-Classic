#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_EventArgs.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventWrittenEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _EventId_k__BackingField;
		mscorlib::System::Guid _RelatedActivityId_k__BackingField;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::Object>* _Payload_k__BackingField;
		mscorlib::System::String* m_message;
		mscorlib::System::String* m_eventName;
		mscorlib::System::Diagnostics::Tracing::EventSource* m_eventSource;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::String>* m_payloadNames;
		void set_EventName(mscorlib::System::String* value);
		void set_EventId(int32_t value);
		void set_RelatedActivityId(mscorlib::System::Guid value);
		void set_Payload(mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::Object>* value);
		void set_PayloadNames(mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<mscorlib::System::String>* value);
		void set_Message(mscorlib::System::String* value);
		void _ctor(mscorlib::System::Diagnostics::Tracing::EventSource* eventSource);
	};
}

