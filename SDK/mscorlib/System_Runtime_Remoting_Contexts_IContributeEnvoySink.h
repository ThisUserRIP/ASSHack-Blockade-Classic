#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System { struct MarshalByRefObject; };

namespace mscorlib::System::Runtime::Remoting::Contexts
{
	struct IContributeEnvoySink
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* GetEnvoySink(mscorlib::System::MarshalByRefObject* obj, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
	};
}

