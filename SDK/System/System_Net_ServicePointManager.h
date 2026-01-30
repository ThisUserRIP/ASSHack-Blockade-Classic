#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Collections::Specialized { struct HybridDictionary; };
namespace System::System::Net { struct ICertificatePolicy; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Net_SecurityProtocolType.h"
namespace System::System::Net { struct ServerCertValidationCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct ServicePoint; };
namespace System::System { struct Uri; };
namespace System::System::Net { struct IWebProxy; };

namespace System::System::Net
{
	struct ServicePointManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::Collections::Specialized::HybridDictionary* servicePoints;
			System::Net::ICertificatePolicy* policy;
			int32_t defaultConnectionLimit;
			int32_t maxServicePointIdleTime;
			int32_t maxServicePoints;
			int32_t dnsRefreshTimeout;
			bool _checkCRL;
			System::Net::SecurityProtocolType _securityProtocol;
			bool expectContinue;
			bool useNagle;
			System::Net::ServerCertValidationCallback* server_cert_cb;
			bool tcp_keepalive;
			int32_t tcp_keepalive_time;
			int32_t tcp_keepalive_interval;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static System::Net::ICertificatePolicy* GetLegacyCertificatePolicy();
		static bool get_CheckCertificateRevocationList();
		static int32_t get_DnsRefreshTimeout();
		static System::Net::SecurityProtocolType get_SecurityProtocol();
		static System::Net::ServerCertValidationCallback* get_ServerCertValidationCallback();
		static System::Net::ServicePoint* FindServicePoint(System::Uri* address, System::Net::IWebProxy* proxy);
	};
}

