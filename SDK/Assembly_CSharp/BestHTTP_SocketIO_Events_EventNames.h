#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "BestHTTP_SocketIO_SocketIOEventTypes.h"
#include "BestHTTP_SocketIO_TransportEventTypes.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SocketIO::Events
{
	struct EventNames : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* Connect;
			mscorlib::System::String* Disconnect;
			mscorlib::System::String* Event;
			mscorlib::System::String* Ack;
			mscorlib::System::String* Error;
			mscorlib::System::String* BinaryEvent;
			mscorlib::System::String* BinaryAck;
			IL2CPP::Array<mscorlib::System::String*>* SocketIONames;
			IL2CPP::Array<mscorlib::System::String*>* TransportNames;
			IL2CPP::Array<mscorlib::System::String*>* BlacklistedEvents;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* GetNameFor(Assembly_CSharp::BestHTTP::SocketIO::SocketIOEventTypes type);
		static mscorlib::System::String* GetNameFor(Assembly_CSharp::BestHTTP::SocketIO::TransportEventTypes transEvent);
		static bool IsBlacklisted(mscorlib::System::String* eventName);
		static void _cctor();
	};
}

