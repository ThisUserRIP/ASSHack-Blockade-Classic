#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Diagnostics::Tracing { struct EventListener; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Diagnostics::Tracing
{
	struct EventDispatcher : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Diagnostics::Tracing::EventListener* m_Listener;
		IL2CPP::Array<bool>* m_EventEnabled;
		bool m_activityFilteringEnabled;
		mscorlib::System::Diagnostics::Tracing::EventDispatcher* m_Next;
		void _ctor(mscorlib::System::Diagnostics::Tracing::EventDispatcher* next, IL2CPP::Array<bool>* eventEnabled, mscorlib::System::Diagnostics::Tracing::EventListener* listener);
	};
}

