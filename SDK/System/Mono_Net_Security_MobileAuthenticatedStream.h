#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_Security_AuthenticatedStream.h"
namespace System::Mono::Net::Security { struct MobileTlsContext; };
namespace mscorlib::System::Runtime::ExceptionServices { struct ExceptionDispatchInfo; };
namespace System::Mono::Net::Security { struct AsyncProtocolRequest; };
namespace System::Mono::Net::Security { struct BufferOffsetSize2; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net::Security { struct SslStream; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsProvider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct String; };
#include "System_Security_Authentication_SslProtocols.h"
namespace System::System::Security::Cryptography::X509Certificates { struct X509CertificateCollection; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace System::System::Net::Security { struct AuthenticatedStream; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509Certificate; };
namespace mscorlib::System { struct IAsyncResult; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "Mono_Net_Security_MobileAuthenticatedStream_OperationType.h"
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };
namespace System::Mono::Net::Security { struct BufferOffsetSize; };
#include "Mono_Net_Security_AsyncOperationStatus.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace System::Mono::Net::Security
{
	struct MobileAuthenticatedStream : System::Net::Security::AuthenticatedStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Mono::Net::Security::MobileTlsContext* xobileTlsContext;
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* lastException;
		System::Mono::Net::Security::AsyncProtocolRequest* asyncHandshakeRequest;
		System::Mono::Net::Security::AsyncProtocolRequest* asyncReadRequest;
		System::Mono::Net::Security::AsyncProtocolRequest* asyncWriteRequest;
		System::Mono::Net::Security::BufferOffsetSize2* readBuffer;
		System::Mono::Net::Security::BufferOffsetSize2* writeBuffer;
		mscorlib::System::Object* ioLock;
		int32_t closeRequested;
		bool shutdown;
		System::Net::Security::SslStream* _SslStream_k__BackingField;
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* _Settings_k__BackingField;
		Mono_Security::Mono::Security::Interface::MonoTlsProvider* _Provider_k__BackingField;
		int32_t ID;
		struct StaticFields
		{
			int32_t uniqueNameInteger;
			int32_t nextId;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream* owner, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings, Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider);
		Mono_Security::Mono::Security::Interface::MonoTlsSettings* get_Settings();
		Mono_Security::Mono::Security::Interface::MonoTlsProvider* get_Provider();
		void CheckThrow(bool authSuccessCheck, bool shutdownCheck);
		static mscorlib::System::Exception* GetSSPIException(mscorlib::System::Exception* e);
		static mscorlib::System::Exception* GetIOException(mscorlib::System::Exception* e, mscorlib::System::String* message);
		mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo* SetException(mscorlib::System::Exception* e);
		System::Security::Authentication::SslProtocols get_DefaultProtocols();
		void AuthenticateAsClient(mscorlib::System::String* targetHost);
		void AuthenticateAsClient(mscorlib::System::String* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
		mscorlib::System::Threading::Tasks::Task* AuthenticateAsClientAsync(mscorlib::System::String* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
		System::Net::Security::AuthenticatedStream* get_AuthenticatedStream();
		mscorlib::System::Threading::Tasks::Task* ProcessAuthentication(bool runSynchronously, bool serverMode, mscorlib::System::String* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool clientCertRequired);
		System::Mono::Net::Security::MobileTlsContext* CreateContext(bool serverMode, mscorlib::System::String* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert);
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* StartOperation(System::Mono::Net::Security::MobileAuthenticatedStream_OperationType type, System::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, mscorlib::System::Threading::CancellationToken cancellationToken);
		int32_t InternalRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, bool& outWantMore);
		mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> InternalRead(System::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, System::Mono::Net::Security::BufferOffsetSize* internalBuffer, IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		bool InternalWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		bool InternalWrite(System::Mono::Net::Security::AsyncProtocolRequest* asyncRequest, System::Mono::Net::Security::BufferOffsetSize2* internalBuffer, IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* InnerRead(bool sync, int32_t requestedSize, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* InnerWrite(bool sync, mscorlib::System::Threading::CancellationToken cancellationToken);
		System::Mono::Net::Security::AsyncOperationStatus ProcessHandshake(System::Mono::Net::Security::AsyncOperationStatus status);
		mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> ProcessRead(System::Mono::Net::Security::BufferOffsetSize* userBuffer);
		mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Boolean> ProcessWrite(System::Mono::Net::Security::BufferOffsetSize* userBuffer);
		bool get_IsAuthenticated();
		void Dispose(bool disposing);
		void Flush();
		mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		bool get_CanRead();
		bool get_CanWrite();
		bool get_CanSeek();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		int32_t get_ReadTimeout();
		void set_ReadTimeout(int32_t value);
		int32_t get_WriteTimeout();
		static void _cctor();
		void _InnerWrite_b__67_0();
	};
}

