#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct MethodReturnDictionary; };
namespace mscorlib::System::Runtime::Remoting { struct Identity; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct ArgInfo; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodCallMessage; };
namespace mscorlib::System::Collections { struct IDictionary; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct ReturnMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Object*>* _outArgs;
		IL2CPP::Array<mscorlib::System::Object*>* _args;
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* _callCtx;
		mscorlib::System::Object* _returnValue;
		mscorlib::System::String* _uri;
		mscorlib::System::Exception* _exception;
		mscorlib::System::Reflection::MethodBase* _methodBase;
		mscorlib::System::String* _methodName;
		IL2CPP::Array<mscorlib::System::Type*>* _methodSignature;
		mscorlib::System::String* _typeName;
		mscorlib::System::Runtime::Remoting::Messaging::MethodReturnDictionary* _properties;
		mscorlib::System::Runtime::Remoting::Identity* _targetIdentity;
		mscorlib::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo;
		void _ctor(mscorlib::System::Object* ret, IL2CPP::Array<mscorlib::System::Object*>* outArgs, int32_t outArgsCount, mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm);
		void _ctor(mscorlib::System::Exception* e, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm);
		int32_t get_ArgCount();
		IL2CPP::Array<mscorlib::System::Object*>* get_Args();
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
		mscorlib::System::Reflection::MethodBase* get_MethodBase();
		mscorlib::System::String* get_MethodName();
		mscorlib::System::Object* get_MethodSignature();
		mscorlib::System::Collections::IDictionary* get_Properties();
		mscorlib::System::String* get_TypeName();
		mscorlib::System::String* get_Uri();
		void set_Uri(mscorlib::System::String* value);
		mscorlib::System::String* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
		void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(mscorlib::System::String* value);
		mscorlib::System::Object* GetArg(int32_t argNum);
		mscorlib::System::Exception* get_Exception();
		IL2CPP::Array<mscorlib::System::Object*>* get_OutArgs();
		mscorlib::System::Object* get_ReturnValue();
		mscorlib::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
		void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(mscorlib::System::Runtime::Remoting::Identity* value);
	};
}

