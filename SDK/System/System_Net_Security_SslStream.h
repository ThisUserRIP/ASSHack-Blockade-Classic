#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_Security_AuthenticatedStream.h"
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsProvider; };
namespace Mono_Security::Mono::Security::Interface { struct IMonoSslStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net::Security { struct RemoteCertificateValidationCallback; };
namespace System::System::Net::Security { struct LocalCertificateSelectionCallback; };
namespace Mono_Security::Mono::Security::Interface { struct MonoTlsSettings; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net::Security
{
	struct SslStream : System::Net::Security::AuthenticatedStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider;
		Mono_Security::Mono::Security::Interface::IMonoSslStream* impl;
		Mono_Security::Mono::Security::Interface::IMonoSslStream* get_Impl();
		static Mono_Security::Mono::Security::Interface::MonoTlsProvider* GetProvider();
		void _ctor(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback* userCertificateValidationCallback);
		void _ctor(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, System::Net::Security::RemoteCertificateValidationCallback* userCertificateValidationCallback, System::Net::Security::LocalCertificateSelectionCallback* userCertificateSelectionCallback);
		void _ctor(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings);
		static Mono_Security::Mono::Security::Interface::IMonoSslStream* CreateMonoSslStream(mscorlib::System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono_Security::Mono::Security::Interface::MonoTlsProvider* provider, Mono_Security::Mono::Security::Interface::MonoTlsSettings* settings);
		void AuthenticateAsClient(mscorlib::System::String* targetHost);
		bool get_IsAuthenticated();
		bool get_CanSeek();
		bool get_CanRead();
		bool get_CanWrite();
		int32_t get_ReadTimeout();
		void set_ReadTimeout(int32_t value);
		int32_t get_WriteTimeout();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		void SetLength(int64_t value);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		mscorlib::System::Threading::Tasks::Task* FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		void Flush();
		void CheckDisposed();
		void Dispose(bool disposing);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* asyncCallback, mscorlib::System::Object* asyncState);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
	};
}

