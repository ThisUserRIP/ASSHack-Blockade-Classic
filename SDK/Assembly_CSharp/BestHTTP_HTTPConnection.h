#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_ConnectionBase.h"
namespace Assembly_CSharp::BestHTTP::PlatformSupport::TcpClient::General { struct TcpClient; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP { struct KeepAliveHeader; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System::System { struct Uri; };
#include "BestHTTP_HTTPConnectionStates.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Chain; };
#include "..\System\System_Net_Security_SslPolicyErrors.h"

namespace Assembly_CSharp::BestHTTP
{
	struct HTTPConnection : Assembly_CSharp::BestHTTP::ConnectionBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::PlatformSupport::TcpClient::General::TcpClient* Client;
		mscorlib::System::IO::Stream* Stream;
		Assembly_CSharp::BestHTTP::KeepAliveHeader* KeepAlive;
		bool get_IsRemovable();
		void _ctor(mscorlib::System::String* serverAddress);
		void ThreadFunc();
		void Connect();
		bool Receive();
		bool LoadFromCache(System::System::Uri* uri);
		bool TryLoadAllFromCache();
		void TryStoreInCache();
		System::System::Uri* GetRedirectUri(mscorlib::System::String* location);
		void Abort(Assembly_CSharp::BestHTTP::HTTPConnectionStates newState);
		void Close();
		void Dispose(bool disposing);
		bool _Connect_b__7_0(mscorlib::System::Object* sender, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* cert, System::System::Security::Cryptography::X509Certificates::X509Chain* chain, System::System::Net::Security::SslPolicyErrors errors);
	};
}

