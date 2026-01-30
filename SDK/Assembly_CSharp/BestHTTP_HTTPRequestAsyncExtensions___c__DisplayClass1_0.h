#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_HTTPRequestAsyncExtensions.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPRequestAsyncExtensions; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct TaskCompletionSource_1; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPRequestAsyncExtensions___c__DisplayClass1_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::HTTPRequest* request;
		void _ctor();
		void _GetAsStringAsync_b__0(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp, mscorlib::System::Threading::Tasks::TaskCompletionSource_1<mscorlib::System::String>* tcs);
	};
}

