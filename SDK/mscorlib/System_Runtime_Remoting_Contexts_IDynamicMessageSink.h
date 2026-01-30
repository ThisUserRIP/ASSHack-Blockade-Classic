#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Remoting::Contexts
{
	struct IDynamicMessageSink
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void ProcessMessageFinish(mscorlib::System::Runtime::Remoting::Messaging::IMessage* replyMsg, bool bCliSide, bool bAsync);
		void ProcessMessageStart(mscorlib::System::Runtime::Remoting::Messaging::IMessage* reqMsg, bool bCliSide, bool bAsync);
	};
}

