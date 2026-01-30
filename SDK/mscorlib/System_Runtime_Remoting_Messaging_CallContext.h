#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct CallContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static mscorlib::System::Object* SetCurrentCallContext(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx);
		static mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* SetLogicalCallContext(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx);
	};
}

