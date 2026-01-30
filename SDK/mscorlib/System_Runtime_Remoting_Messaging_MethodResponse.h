#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct ArgInfo; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodCallMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };
namespace mscorlib::System::Runtime::Remoting { struct Identity; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CADMethodReturnMessage; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct MethodResponse : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _methodName;
		mscorlib::System::String* _uri;
		mscorlib::System::String* _typeName;
		mscorlib::System::Reflection::MethodBase* _methodBase;
		mscorlib::System::Object* _returnValue;
		mscorlib::System::Exception* _exception;
		IL2CPP::Array<mscorlib::System::Type*>* _methodSignature;
		mscorlib::System::Runtime::Remoting::Messaging::ArgInfo* _inArgInfo;
		IL2CPP::Array<mscorlib::System::Object*>* _args;
		IL2CPP::Array<mscorlib::System::Object*>* _outArgs;
		mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* _callMsg;
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext;
		mscorlib::System::Runtime::Remoting::Identity* _targetIdentity;
		mscorlib::System::Collections::IDictionary* ExternalProperties;
		mscorlib::System::Collections::IDictionary* InternalProperties;
		void _ctor(mscorlib::System::Exception* e, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
		void _ctor(mscorlib::System::Object* returnValue, IL2CPP::Array<mscorlib::System::Object*>* outArgs, mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg, mscorlib::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* retmsg);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void InitMethodProperty(mscorlib::System::String* key, mscorlib::System::Object* value);
		int32_t get_ArgCount();
		IL2CPP::Array<mscorlib::System::Object*>* get_Args();
		mscorlib::System::Exception* get_Exception();
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
		mscorlib::System::Reflection::MethodBase* get_MethodBase();
		mscorlib::System::String* get_MethodName();
		mscorlib::System::Object* get_MethodSignature();
		IL2CPP::Array<mscorlib::System::Object*>* get_OutArgs();
		mscorlib::System::Collections::IDictionary* get_Properties();
		mscorlib::System::Object* get_ReturnValue();
		mscorlib::System::String* get_TypeName();
		mscorlib::System::String* get_Uri();
		void set_Uri(mscorlib::System::String* value);
		mscorlib::System::String* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
		void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(mscorlib::System::String* value);
		mscorlib::System::Object* GetArg(int32_t argNum);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
		void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(mscorlib::System::Runtime::Remoting::Identity* value);
	};
}

