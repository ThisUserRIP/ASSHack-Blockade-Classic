#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_Examples_SocketIOChatSample.h"
namespace Assembly_CSharp::BestHTTP::Examples { struct SocketIOChatSample; };
namespace Assembly_CSharp::BestHTTP::SocketIO::Events { struct SocketIOCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Socket; };
namespace Assembly_CSharp::BestHTTP::SocketIO { struct Packet; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct SocketIOChatSample___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::Examples::SocketIOChatSample___c* __9;
			Assembly_CSharp::BestHTTP::SocketIO::Events::SocketIOCallback* __9__11_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _Start_b__11_0(Assembly_CSharp::BestHTTP::SocketIO::Socket* socket, Assembly_CSharp::BestHTTP::SocketIO::Packet* packet, IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

