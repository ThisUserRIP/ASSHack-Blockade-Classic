#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_Proxy.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP::Authentication { struct Credentials; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPProxy : Assembly_CSharp::BestHTTP::Proxy
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _IsTransparent_k__BackingField;
		bool _SendWholeUri_k__BackingField;
		bool _NonTransparentForHTTPS_k__BackingField;
		bool get_IsTransparent();
		void set_IsTransparent(bool value);
		bool get_SendWholeUri();
		void set_SendWholeUri(bool value);
		bool get_NonTransparentForHTTPS();
		void set_NonTransparentForHTTPS(bool value);
		void _ctor(System::System::Uri* address);
		void _ctor(System::System::Uri* address, Assembly_CSharp::BestHTTP::Authentication::Credentials* credentials);
		void _ctor(System::System::Uri* address, Assembly_CSharp::BestHTTP::Authentication::Credentials* credentials, bool isTransparent);
		void _ctor(System::System::Uri* address, Assembly_CSharp::BestHTTP::Authentication::Credentials* credentials, bool isTransparent, bool sendWholeUri);
		void _ctor(System::System::Uri* address, Assembly_CSharp::BestHTTP::Authentication::Credentials* credentials, bool isTransparent, bool sendWholeUri, bool nonTransparentForHTTPS);
		mscorlib::System::String* GetRequestPath(System::System::Uri* uri);
		void Connect(mscorlib::System::IO::Stream* stream, Assembly_CSharp::BestHTTP::HTTPRequest* request);
	};
}

