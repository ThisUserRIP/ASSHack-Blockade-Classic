#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
#include "BestHTTP_SupportedProtocols.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System { struct Uri; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPProtocolFactory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Assembly_CSharp::BestHTTP::HTTPResponse* Get(Assembly_CSharp::BestHTTP::SupportedProtocols protocol, Assembly_CSharp::BestHTTP::HTTPRequest* request, mscorlib::System::IO::Stream* stream, bool isStreamed, bool isFromCache);
		static Assembly_CSharp::BestHTTP::SupportedProtocols GetProtocolFromUri(System::System::Uri* uri);
		static bool IsSecureProtocol(System::System::Uri* uri);
	};
}

