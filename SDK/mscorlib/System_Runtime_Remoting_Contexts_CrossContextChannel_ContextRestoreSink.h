#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_Remoting_Contexts_CrossContextChannel.h"
namespace mscorlib::System::Runtime::Remoting::Contexts { struct CrossContextChannel; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct Context; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageCtrl; };

namespace mscorlib::System::Runtime::Remoting::Contexts
{
	struct CrossContextChannel_ContextRestoreSink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* _next;
		mscorlib::System::Runtime::Remoting::Contexts::Context* _context;
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* _call;
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* next, mscorlib::System::Runtime::Remoting::Contexts::Context* context, mscorlib::System::Runtime::Remoting::Messaging::IMessage* call);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
	};
}

