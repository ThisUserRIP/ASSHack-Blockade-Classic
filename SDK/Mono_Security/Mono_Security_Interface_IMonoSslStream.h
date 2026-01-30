#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
#include "..\System\System_Security_Authentication_SslProtocols.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System::System::Net::Security { struct AuthenticatedStream; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };

namespace Mono_Security::Mono::Security::Interface
{
	struct IMonoSslStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void AuthenticateAsClient(mscorlib::System::String* targetHost);
		void AuthenticateAsClient(mscorlib::System::String* targetHost, System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, System::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
		mscorlib::System::Threading::Tasks::Task* AuthenticateAsClientAsync(mscorlib::System::String* targetHost, System::System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, System::System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		bool get_IsAuthenticated();
		bool get_CanRead();
		bool get_CanWrite();
		int64_t get_Length();
		int64_t get_Position();
		void SetLength(int64_t value);
		System::System::Net::Security::AuthenticatedStream* get_AuthenticatedStream();
		int32_t get_ReadTimeout();
		void set_ReadTimeout(int32_t value);
		int32_t get_WriteTimeout();
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate();
	};
}

