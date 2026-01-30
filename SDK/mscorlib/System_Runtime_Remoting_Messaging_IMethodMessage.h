#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct IMethodMessage
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_ArgCount();
		IL2CPP::Array<mscorlib::System::Object*>* get_Args();
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
		mscorlib::System::Reflection::MethodBase* get_MethodBase();
		mscorlib::System::String* get_MethodName();
		mscorlib::System::Object* get_MethodSignature();
		mscorlib::System::String* get_TypeName();
		mscorlib::System::String* get_Uri();
		mscorlib::System::Object* GetArg(int32_t argNum);
	};
}

