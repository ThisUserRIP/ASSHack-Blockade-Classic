#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct NetworkCredential; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::IO { struct Stream; };
namespace System::System::Net::Sockets { struct Socket; };
namespace System::Mono::Net::Security { struct MonoTlsStream; };
namespace System::System::Net { struct WebConnectionTunnel; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct ServicePoint; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace System::System::Net { struct WebOperation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace System::System::Net { struct WebRequestStream; };
namespace System::System::Net { struct WebException; };
#include "System_Net_WebExceptionStatus.h"
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };

namespace System::System::Net
{
	struct WebConnection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::NetworkCredential* ntlm_credentials;
		bool ntlm_authenticated;
		bool unsafe_sharing;
		mscorlib::System::IO::Stream* networkStream;
		System::Net::Sockets::Socket* socket;
		System::Mono::Net::Security::MonoTlsStream* monoTlsStream;
		System::Net::WebConnectionTunnel* tunnel;
		int32_t disposed;
		System::Net::ServicePoint* _ServicePoint_k__BackingField;
		mscorlib::System::DateTime idleSince;
		System::Net::WebOperation* currentOperation;
		System::Net::ServicePoint* get_ServicePoint();
		void _ctor(System::Net::ServicePoint* sPoint);
		bool CanReuse();
		bool CheckReusable();
		mscorlib::System::Threading::Tasks::Task* Connect(System::Net::WebOperation* operation, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Boolean>* CreateStream(System::Net::WebOperation* operation, bool reused, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<System::Net::WebRequestStream>* InitConnection(System::Net::WebOperation* operation, mscorlib::System::Threading::CancellationToken cancellationToken);
		static System::Net::WebException* GetException(System::Net::WebExceptionStatus status, mscorlib::System::Exception* error);
		static bool ReadLine(IL2CPP::Array<uint8_t>* buffer, int32_t& start, int32_t max, mscorlib::System::String& output);
		bool CanReuseConnection(System::Net::WebOperation* operation);
		bool PrepareSharingNtlm(System::Net::WebOperation* operation);
		void Reset();
		void Close(bool reset);
		void CloseSocket();
		bool get_Closed();
		mscorlib::System::DateTime get_IdleSince();
		bool StartOperation(System::Net::WebOperation* operation, bool reused);
		bool Continue(System::Net::WebOperation* next);
		void Dispose(bool disposing);
		void Dispose();
		void ResetNtlm();
		bool get_NtlmAuthenticated();
		void set_NtlmAuthenticated(bool value);
		System::Net::NetworkCredential* get_NtlmCredential();
		void set_NtlmCredential(System::Net::NetworkCredential* value);
		bool get_UnsafeAuthenticatedConnectionSharing();
		void set_UnsafeAuthenticatedConnectionSharing(bool value);
	};
}

