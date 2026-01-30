#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_HTTPManager.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPManager; };
namespace Assembly_CSharp::BestHTTP { struct ConnectionBase; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPManager___c__DisplayClass95_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::ConnectionBase* conn;
		void _ctor();
		bool _SendRequestImpl_b__0(Assembly_CSharp::BestHTTP::ConnectionBase* c);
	};
}

