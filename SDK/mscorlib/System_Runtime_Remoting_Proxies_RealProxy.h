#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Remoting::Contexts { struct Context; };
namespace mscorlib::System { struct MarshalByRefObject; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting { struct Identity; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting { struct ClientIdentity; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodReturnMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct MonoMethodMessage; };

namespace mscorlib::System::Runtime::Remoting::Proxies
{
	struct RealProxy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* class_to_proxy;
		mscorlib::System::Runtime::Remoting::Contexts::Context* _targetContext;
		mscorlib::System::MarshalByRefObject* _server;
		int32_t _targetDomainId;
		mscorlib::System::String* _targetUri;
		mscorlib::System::Runtime::Remoting::Identity* _objectIdentity;
		mscorlib::System::Object* _objTP;
		mscorlib::System::Object* _stubData;
		void _ctor();
		void _ctor(mscorlib::System::Type* classToProxy);
		void _ctor(mscorlib::System::Type* classToProxy, mscorlib::System::Runtime::Remoting::ClientIdentity* identity);
		void _ctor(mscorlib::System::Type* classToProxy, intptr_t stub, mscorlib::System::Object* stubData);
		static mscorlib::System::Type* InternalGetProxyType(mscorlib::System::Object* transparentProxy);
		mscorlib::System::Type* GetProxiedType();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		mscorlib::System::Runtime::Remoting::Identity* get_ObjectIdentity();
		void set_ObjectIdentity(mscorlib::System::Runtime::Remoting::Identity* value);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* Invoke(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		static mscorlib::System::Object* PrivateInvoke(mscorlib::System::Runtime::Remoting::Proxies::RealProxy* rp, mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Exception& exc, IL2CPP::Array<mscorlib::System::Object*>& out_args);
		mscorlib::System::Object* InternalGetTransparentProxy(mscorlib::System::String* className);
		mscorlib::System::Object* GetTransparentProxy();
		void AttachServer(mscorlib::System::MarshalByRefObject* s);
		void SetTargetDomain(int32_t domainId);
		mscorlib::System::Object* GetAppDomainTarget();
		static IL2CPP::Array<mscorlib::System::Object*>* ProcessResponse(mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage* mrm, mscorlib::System::Runtime::Remoting::Messaging::MonoMethodMessage* call);
	};
}

