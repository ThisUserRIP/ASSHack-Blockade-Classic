#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Remoting::Channels
{
	struct AsyncRequest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* ReplySink;
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* MsgRequest;
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msgRequest, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
	};
}

