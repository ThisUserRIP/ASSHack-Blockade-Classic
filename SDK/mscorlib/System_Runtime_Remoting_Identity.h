#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct DynamicPropertyCollection; };
namespace mscorlib::System::Runtime::Remoting { struct ObjRef; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };

namespace mscorlib::System::Runtime::Remoting
{
	struct Identity : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _objectUri;
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* _channelSink;
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* _envoySink;
		mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _clientDynamicProperties;
		mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _serverDynamicProperties;
		mscorlib::System::Runtime::Remoting::ObjRef* _objRef;
		bool _disposed;
		void _ctor(mscorlib::System::String* objectUri);
		mscorlib::System::Runtime::Remoting::ObjRef* CreateObjRef(mscorlib::System::Type* requestedType);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* get_ChannelSink();
		void set_ChannelSink(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* value);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySink();
		mscorlib::System::String* get_ObjectUri();
		void set_ObjectUri(mscorlib::System::String* value);
		bool get_IsConnected();
		bool get_Disposed();
		void set_Disposed(bool value);
		mscorlib::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* get_ClientDynamicProperties();
		bool get_HasServerDynamicSinks();
		void NotifyClientDynamicSinks(bool start, mscorlib::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
		void NotifyServerDynamicSinks(bool start, mscorlib::System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
	};
}

