#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Channels_CrossAppDomainSink.h"
namespace mscorlib::System::Runtime::Remoting::Channels { struct CrossAppDomainSink; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CADMethodReturnMessage; };

namespace mscorlib::System::Runtime::Remoting::Channels
{
	struct CrossAppDomainSink_ProcessMessageRes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* arrResponse;
		mscorlib::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm;
	};
}

