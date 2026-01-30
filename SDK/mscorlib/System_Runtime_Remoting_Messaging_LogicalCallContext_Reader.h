#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Messaging_LogicalCallContext.h"
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct LogicalCallContext_Reader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* m_ctx;
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx);
		bool get_IsNull();
		bool get_HasInfo();
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* Clone();
	};
}

