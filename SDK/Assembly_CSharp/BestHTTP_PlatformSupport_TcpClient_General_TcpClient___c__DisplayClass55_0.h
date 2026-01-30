#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_PlatformSupport_TcpClient_General_TcpClient.h"
namespace Assembly_CSharp::BestHTTP::PlatformSupport::TcpClient::General { struct TcpClient; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct IAsyncResult; };

namespace Assembly_CSharp::BestHTTP::PlatformSupport::TcpClient::General
{
	struct TcpClient___c__DisplayClass55_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::ManualResetEvent* mre;
		void _ctor();
		void _Connect_b__0(mscorlib::System::IAsyncResult* res);
	};
}

