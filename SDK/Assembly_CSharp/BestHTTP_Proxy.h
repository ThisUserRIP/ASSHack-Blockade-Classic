#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::Authentication { struct Credentials; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP
{
	struct Proxy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* _Address_k__BackingField;
		Assembly_CSharp::BestHTTP::Authentication::Credentials* _Credentials_k__BackingField;
		System::System::Uri* get_Address();
		void set_Address(System::System::Uri* value);
		Assembly_CSharp::BestHTTP::Authentication::Credentials* get_Credentials();
		void set_Credentials(Assembly_CSharp::BestHTTP::Authentication::Credentials* value);
		void _ctor(System::System::Uri* address, Assembly_CSharp::BestHTTP::Authentication::Credentials* credentials);
		void Connect(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::HTTPRequest* request);
		mscorlib::System::String* GetRequestPath(System::System::Uri* uri);
	};
}

