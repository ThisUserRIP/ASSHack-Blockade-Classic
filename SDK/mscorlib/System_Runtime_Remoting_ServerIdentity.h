#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Identity.h"
namespace mscorlib::System { struct MarshalByRefObject; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct Context; };
namespace mscorlib::System::Runtime::Remoting::Lifetime { struct Lease; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting::Lifetime { struct ILease; };
namespace mscorlib::System::Runtime::Remoting { struct ObjRef; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageCtrl; };

namespace mscorlib::System::Runtime::Remoting
{
	struct ServerIdentity : mscorlib::System::Runtime::Remoting::Identity
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* _objectType;
		mscorlib::System::MarshalByRefObject* _serverObject;
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* _serverSink;
		mscorlib::System::Runtime::Remoting::Contexts::Context* _context;
		mscorlib::System::Runtime::Remoting::Lifetime::Lease* _lease;
		void _ctor(mscorlib::System::String* objectUri, mscorlib::System::Runtime::Remoting::Contexts::Context* context, mscorlib::System::Type* objectType);
		mscorlib::System::Type* get_ObjectType();
		void StartTrackingLifetime(mscorlib::System::Runtime::Remoting::Lifetime::ILease* lease);
		void OnLifetimeExpired();
		mscorlib::System::Runtime::Remoting::ObjRef* CreateObjRef(mscorlib::System::Type* requestedType);
		void AttachServerObject(mscorlib::System::MarshalByRefObject* serverObject, mscorlib::System::Runtime::Remoting::Contexts::Context* context);
		mscorlib::System::Runtime::Remoting::Lifetime::Lease* get_Lease();
		mscorlib::System::Runtime::Remoting::Contexts::Context* get_Context();
		void set_Context(mscorlib::System::Runtime::Remoting::Contexts::Context* value);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
		void DisposeServerObject();
	};
}

