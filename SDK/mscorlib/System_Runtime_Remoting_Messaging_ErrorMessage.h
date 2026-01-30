#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct ErrorMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _uri;
		void _ctor();
		int32_t get_ArgCount();
		IL2CPP::Array<mscorlib::System::Object*>* get_Args();
		mscorlib::System::Reflection::MethodBase* get_MethodBase();
		mscorlib::System::String* get_MethodName();
		mscorlib::System::Object* get_MethodSignature();
		mscorlib::System::Collections::IDictionary* get_Properties();
		mscorlib::System::String* get_TypeName();
		mscorlib::System::String* get_Uri();
		mscorlib::System::Object* GetArg(int32_t arg_num);
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
	};
}

