#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebRequest.h"
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct ServicePoint; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::IO { struct StreamReader; };
namespace System::System::Net { struct NetworkCredential; };
namespace System::System::Net { struct IPHostEntry; };
namespace System::System::Net { struct IPEndPoint; };
namespace System::System::Net { struct IWebProxy; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Net_FtpWebRequest_RequestState.h"
namespace System::System::Net { struct FtpAsyncResult; };
namespace System::System::Net { struct FtpWebResponse; };
namespace mscorlib::System::Text { struct Encoding; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };
namespace System::System::Net { struct ICredentials; };
namespace System::System::Net { struct WebHeaderCollection; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace System::System::Net { struct WebResponse; };
namespace System::System::Net { struct FtpStatus; };
namespace System::System::Net::Sockets { struct Socket; };
namespace System::System::Net { struct IPAddress; };

namespace System::System::Net
{
	struct FtpWebRequest : System::Net::WebRequest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Uri* requestUri;
		mscorlib::System::String* file_name;
		System::Net::ServicePoint* servicePoint;
		mscorlib::System::IO::Stream* origDataStream;
		mscorlib::System::IO::Stream* dataStream;
		mscorlib::System::IO::Stream* controlStream;
		mscorlib::System::IO::StreamReader* controlReader;
		System::Net::NetworkCredential* credentials;
		System::Net::IPHostEntry* hostEntry;
		System::Net::IPEndPoint* localEndPoint;
		System::Net::IPEndPoint* remoteEndPoint;
		System::Net::IWebProxy* proxy;
		int32_t timeout;
		int32_t rwTimeout;
		int64_t offset;
		bool binary;
		bool enableSsl;
		bool usePassive;
		bool keepAlive;
		mscorlib::System::String* method;
		mscorlib::System::String* renameTo;
		mscorlib::System::Object* locker;
		System::Net::FtpWebRequest_RequestState requestState;
		System::Net::FtpAsyncResult* asyncResult;
		System::Net::FtpWebResponse* ftpResponse;
		mscorlib::System::IO::Stream* requestStream;
		mscorlib::System::String* initial_path;
		mscorlib::System::Text::Encoding* dataEncoding;
		struct StaticFields
		{
			IL2CPP::Array<mscorlib::System::String*>* supportedCommands;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System::Uri* uri);
		static mscorlib::System::Exception* GetMustImplement();
		void set_ContentType(mscorlib::System::String* value);
		int64_t get_ContentLength();
		void set_ContentLength(int64_t value);
		System::Net::ICredentials* get_Credentials();
		void set_Credentials(System::Net::ICredentials* value);
		bool get_EnableSsl();
		System::Net::WebHeaderCollection* get_Headers();
		void set_Headers(System::Net::WebHeaderCollection* value);
		mscorlib::System::String* get_Method();
		void set_Method(mscorlib::System::String* value);
		System::Net::IWebProxy* get_Proxy();
		void set_Proxy(System::Net::IWebProxy* value);
		int32_t get_ReadWriteTimeout();
		System::Uri* get_RequestUri();
		System::Net::ServicePoint* get_ServicePoint();
		bool get_UseDefaultCredentials();
		int32_t get_Timeout();
		mscorlib::System::String* get_DataType();
		System::Net::FtpWebRequest_RequestState get_State();
		void set_State(System::Net::FtpWebRequest_RequestState value);
		void Abort();
		mscorlib::System::IAsyncResult* BeginGetResponse(mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		System::Net::WebResponse* EndGetResponse(mscorlib::System::IAsyncResult* asyncResult);
		System::Net::WebResponse* GetResponse();
		System::Net::ServicePoint* GetServicePoint();
		void ResolveHost();
		void ProcessRequest();
		void SetType();
		mscorlib::System::String* GetRemoteFolderPath(System::Uri* uri);
		void CWDAndSetFileName(System::Uri* uri);
		void ProcessMethod();
		void CloseControlConnection();
		void CloseDataConnection();
		void CloseConnection();
		void ProcessSimpleMethod();
		void UploadData();
		void DownloadData();
		void CheckRequestStarted();
		void OpenControlConnection();
		static mscorlib::System::String* GetInitialPath(System::Net::FtpStatus* status);
		System::Net::Sockets::Socket* SetupPassiveConnection(mscorlib::System::String* statusDescription, bool ipv6);
		int32_t GetPortV4(mscorlib::System::String* responseString);
		int32_t GetPortV6(mscorlib::System::String* responseString);
		mscorlib::System::String* FormatAddress(System::Net::IPAddress* address, int32_t Port);
		mscorlib::System::String* FormatAddressV6(System::Net::IPAddress* address, int32_t port);
		mscorlib::System::Exception* CreateExceptionFromResponse(System::Net::FtpStatus* status);
		void SetTransferCompleted();
		void OperationCompleted();
		void SetCompleteWithError(mscorlib::System::Exception* exc);
		System::Net::Sockets::Socket* InitDataConnection();
		void OpenDataConnection();
		void Authenticate();
		System::Net::FtpStatus* SendCommand(mscorlib::System::String* command, IL2CPP::Array<mscorlib::System::String*>* parameters);
		System::Net::FtpStatus* SendCommand(bool waitResponse, mscorlib::System::String* command, IL2CPP::Array<mscorlib::System::String*>* parameters);
		static System::Net::FtpStatus* ServiceNotAvailable();
		System::Net::FtpStatus* GetResponseStatus();
		void InitiateSecureConnection(mscorlib::System::IO::Stream& stream);
		bool ChangeToSSLSocket(mscorlib::System::IO::Stream& stream);
		bool InFinalState();
		bool InProgress();
		void CheckIfAborted();
		void CheckFinalState();
		static void _cctor();
	};
}

