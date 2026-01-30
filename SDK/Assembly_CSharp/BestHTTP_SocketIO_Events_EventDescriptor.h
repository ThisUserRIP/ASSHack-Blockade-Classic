#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SocketIO::Events { struct SocketIOCallback; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Socket; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SocketIO::Events
{
	struct EventDescriptor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback>* _Callbacks_k__BackingField;
		bool _OnlyOnce_k__BackingField;
		bool _AutoDecodePayload_k__BackingField;
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback*>* CallbackArray;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback>* get_Callbacks();
		void set_Callbacks(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback>* value);
		bool get_OnlyOnce();
		void set_OnlyOnce(bool value);
		bool get_AutoDecodePayload();
		void set_AutoDecodePayload(bool value);
		void _ctor(bool onlyOnce, bool autoDecodePayload, Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* callback);
		void Call(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

