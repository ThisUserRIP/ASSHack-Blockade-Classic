#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSourceCreatedEventArgs; };
namespace mscorlib::System { template <typename TEventArgs> struct EventHandler_1; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventWrittenEventArgs; };
namespace mscorlib::System::Diagnostics::Tracing { struct ActivityFilter; };
namespace mscorlib::System { struct WeakReference; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Diagnostics::Tracing { struct EventSource; };
namespace mscorlib::System { struct EventArgs; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventListener : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::EventHandler_1<mscorlib::System::Diagnostics::Tracing::EventSourceCreatedEventArgs>* _EventSourceCreated;
		mscorlib::System::EventHandler_1<mscorlib::System::Diagnostics::Tracing::EventWrittenEventArgs>* EventWritten;
		mscorlib::System::Diagnostics::Tracing::EventListener* m_Next;
		mscorlib::System::Diagnostics::Tracing::ActivityFilter* m_activityFilter;
		struct StaticFields
		{
			mscorlib::System::Object* s_EventSourceCreatedLock;
			mscorlib::System::Diagnostics::Tracing::EventListener* s_Listeners;
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::WeakReference>* s_EventSources;
			bool s_CreatingListener;
			bool s_EventSourceShutdownRegistered;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void OnEventSourceCreated(mscorlib::System::Diagnostics::Tracing::EventSource* eventSource);
		void OnEventWritten(mscorlib::System::Diagnostics::Tracing::EventWrittenEventArgs* eventData);
		static void AddEventSource(mscorlib::System::Diagnostics::Tracing::EventSource* newEventSource);
		static void DisposeOnShutdown(mscorlib::System::Object* sender, mscorlib::System::EventArgs* e);
		static mscorlib::System::Object* get_EventListenersLock();
		static void _cctor();
	};
}

