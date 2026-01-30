#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SocketIO_Events_EventTable.h"
namespace Assembly_CSharp::BestHTTP::SocketIO::Events { struct EventTable; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SocketIO::Events { struct EventDescriptor; };

namespace Assembly_CSharp::BestHTTP::SocketIO::Events
{
	struct EventTable___c__DisplayClass6_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool onlyOnce;
		bool autoDecodePayload;
		void _ctor();
		bool _Register_b__0(Assembly_CSharp::BestHTTP::SocketIO::Events::EventDescriptor* d);
	};
}

