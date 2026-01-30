#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System { struct Uri; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System { struct Version; };
namespace System::System::Net { struct IPHostEntry; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace System::System::Net { struct BindIPEndPoint; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct ServicePointScheduler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net::Sockets { struct Socket; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace System::System::Net { struct WebOperation; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace System::System::Net { struct IPEndPoint; };

namespace System::System::Net
{
	struct ServicePoint : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Uri* uri;
		mscorlib::System::DateTime lastDnsResolve;
		mscorlib::System::Version* protocolVersion;
		System::Net::IPHostEntry* host;
		bool usesProxy;
		bool sendContinue;
		bool useConnect;
		mscorlib::System::Object* hostE;
		bool useNagle;
		System::Net::BindIPEndPoint* endPointCallback;
		bool tcp_keepalive;
		int32_t tcp_keepalive_time;
		int32_t tcp_keepalive_interval;
		System::Net::ServicePointScheduler* _Scheduler_k__BackingField;
		mscorlib::System::Object* m_ServerCertificateOrBytes;
		mscorlib::System::Object* m_ClientCertificateOrBytes;
		void _ctor(System::Uri* uri, int32_t connectionLimit, int32_t maxIdleTime);
		System::Net::ServicePointScheduler* get_Scheduler();
		System::Uri* get_Address();
		int32_t get_ConnectionLimit();
		mscorlib::System::Version* get_ProtocolVersion();
		void set_Expect100Continue(bool value);
		bool get_UseNagleAlgorithm();
		void set_UseNagleAlgorithm(bool value);
		bool get_SendContinue();
		void set_SendContinue(bool value);
		void SetTcpKeepAlive(bool enabled, int32_t keepAliveTime, int32_t keepAliveInterval);
		void KeepAliveSetup(System::Net::Sockets::Socket* socket);
		static void PutBytes(IL2CPP::Array<uint8_t>* bytes, uint32_t v, int32_t offset);
		bool get_UsesProxy();
		void set_UsesProxy(bool value);
		bool get_UseConnect();
		void set_UseConnect(bool value);
		bool get_HasTimedOut();
		System::Net::IPHostEntry* get_HostEntry();
		void SetVersion(mscorlib::System::Version* version);
		void SendRequest(System::Net::WebOperation* operation, mscorlib::System::String* groupName);
		void UpdateServerCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);
		void UpdateClientCertificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);
		bool CallEndPointDelegate(System::Net::Sockets::Socket* sock, System::Net::IPEndPoint* remote);
	};
}

