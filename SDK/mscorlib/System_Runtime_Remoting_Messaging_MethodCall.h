#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };
namespace mscorlib::System::Runtime::Remoting { struct Identity; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CADMethodCallMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodMessage; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct MethodCall : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _uri;
		mscorlib::System::String* _typeName;
		mscorlib::System::String* _methodName;
		IL2CPP::Array<mscorlib::System::Object*>* _args;
		IL2CPP::Array<mscorlib::System::Type*>* _methodSignature;
		mscorlib::System::Reflection::MethodBase* _methodBase;
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* _callContext;
		mscorlib::System::Runtime::Remoting::Identity* _targetIdentity;
		IL2CPP::Array<mscorlib::System::Type*>* _genericArguments;
		mscorlib::System::Collections::IDictionary* ExternalProperties;
		mscorlib::System::Collections::IDictionary* InternalProperties;
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg);
		void _ctor();
		void CopyFrom(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* call);
		void InitMethodProperty(mscorlib::System::String* key, mscorlib::System::Object* value);
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		int32_t get_ArgCount();
		IL2CPP::Array<mscorlib::System::Object*>* get_Args();
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
		mscorlib::System::Reflection::MethodBase* get_MethodBase();
		mscorlib::System::String* get_MethodName();
		mscorlib::System::Object* get_MethodSignature();
		mscorlib::System::Collections::IDictionary* get_Properties();
		void InitDictionary();
		mscorlib::System::String* get_TypeName();
		mscorlib::System::String* get_Uri();
		void set_Uri(mscorlib::System::String* value);
		mscorlib::System::String* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
		void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(mscorlib::System::String* value);
		mscorlib::System::Object* GetArg(int32_t argNum);
		void Init();
		void ResolveMethod();
		mscorlib::System::Type* CastTo(mscorlib::System::String* clientType, mscorlib::System::Type* serverType);
		static mscorlib::System::String* GetTypeNameFromAssemblyQualifiedName(mscorlib::System::String* aqname);
		mscorlib::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
		void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(mscorlib::System::Runtime::Remoting::Identity* value);
		IL2CPP::Array<mscorlib::System::Type*>* get_GenericArguments();
	};
}

