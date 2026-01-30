#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct MonoMethod; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct LogicalCallContext; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct AsyncResult; };
#include "System_Runtime_Remoting_Messaging_CallType.h"
namespace mscorlib::System::Runtime::Remoting::Messaging { struct MCMDictionary; };
namespace mscorlib::System::Runtime::Remoting { struct Identity; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct MethodBase; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct MonoMethodMessage : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::MonoMethod* method;
		IL2CPP::Array<mscorlib::System::Object*>* args;
		IL2CPP::Array<mscorlib::System::String*>* names;
		IL2CPP::Array<uint8_t>* arg_types;
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* ctx;
		mscorlib::System::Object* rval;
		mscorlib::System::Exception* exc;
		mscorlib::System::Runtime::Remoting::Messaging::AsyncResult* asyncResult;
		mscorlib::System::Runtime::Remoting::Messaging::CallType call_type;
		mscorlib::System::String* uri;
		mscorlib::System::Runtime::Remoting::Messaging::MCMDictionary* properties;
		IL2CPP::Array<mscorlib::System::Type*>* methodSignature;
		mscorlib::System::Runtime::Remoting::Identity* identity;
		struct StaticFields
		{
			mscorlib::System::String* CallContextKey;
			mscorlib::System::String* UriKey;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void InitMessage(mscorlib::System::Reflection::MonoMethod* method, IL2CPP::Array<mscorlib::System::Object*>* out_args);
		void _ctor(mscorlib::System::Reflection::MethodBase* method, IL2CPP::Array<mscorlib::System::Object*>* out_args);
		void _ctor(mscorlib::System::Reflection::MethodInfo* minfo, IL2CPP::Array<mscorlib::System::Object*>* in_args, IL2CPP::Array<mscorlib::System::Object*>* out_args);
		static mscorlib::System::Reflection::MethodInfo* GetMethodInfo(mscorlib::System::Type* type, mscorlib::System::String* methodName);
		void _ctor(mscorlib::System::Type* type, mscorlib::System::String* methodName, IL2CPP::Array<mscorlib::System::Object*>* in_args);
		mscorlib::System::Collections::IDictionary* get_Properties();
		int32_t get_ArgCount();
		IL2CPP::Array<mscorlib::System::Object*>* get_Args();
		mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
		void set_LogicalCallContext(mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext* value);
		mscorlib::System::Reflection::MethodBase* get_MethodBase();
		mscorlib::System::String* get_MethodName();
		mscorlib::System::Object* get_MethodSignature();
		mscorlib::System::String* get_TypeName();
		mscorlib::System::String* get_Uri();
		void set_Uri(mscorlib::System::String* value);
		mscorlib::System::Object* GetArg(int32_t arg_num);
		mscorlib::System::Exception* get_Exception();
		int32_t get_OutArgCount();
		IL2CPP::Array<mscorlib::System::Object*>* get_OutArgs();
		mscorlib::System::Object* get_ReturnValue();
		mscorlib::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
		void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(mscorlib::System::Runtime::Remoting::Identity* value);
		mscorlib::System::Runtime::Remoting::Messaging::AsyncResult* get_AsyncResult();
		mscorlib::System::Runtime::Remoting::Messaging::CallType get_CallType();
		bool NeedsOutProcessing(int32_t& outCount);
		static void _cctor();
	};
}

