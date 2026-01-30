#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Socket; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SocketIO::Events { struct EventDescriptor; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SocketIO::Events { struct SocketIOCallback; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SocketIO::Events
{
	struct EventTable : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SocketIO::Socket* _Socket_k__BackingField;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Events::EventDescriptor>>* Table;
		Assembly_CSharp::BestHTTP::SocketIO::Socket* get_Socket();
		void set_Socket(Assembly_CSharp::BestHTTP::SocketIO::Socket* value);
		void _ctor(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket);
		void Register(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback, bool onlyOnce, bool autoDecodePayload);
		void Unregister(mscorlib::System::String* eventName);
		void Unregister(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback);
		void Call(mscorlib::System::String* eventName, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
		void Call(Assembly_CSharp::BestHTTP::SocketIO::Packet* packet);
		void Clear();
		bool ShouldDecodePayload(mscorlib::System::String* eventName);
		bool HasSubsciber(mscorlib::System::String* eventName);
	};
}

