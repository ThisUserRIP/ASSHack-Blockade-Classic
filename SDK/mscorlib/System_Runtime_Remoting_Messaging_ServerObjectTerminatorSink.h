#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageCtrl; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct ServerObjectTerminatorSink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* _nextSink;
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
	};
}

