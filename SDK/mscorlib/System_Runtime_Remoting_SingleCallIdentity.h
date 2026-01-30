#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_ServerIdentity.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct Context; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageCtrl; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };

namespace mscorlib::System::Runtime::Remoting
{
	struct SingleCallIdentity : mscorlib::System::Runtime::Remoting::ServerIdentity
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::String* objectUri, mscorlib::System::Runtime::Remoting::Contexts::Context* context, mscorlib::System::Type* objectType);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
	};
}

