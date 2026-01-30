#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebResponse.h"
namespace mscorlib::System::IO { struct Stream; };
namespace System::System { struct Uri; };
#include "System_Net_FtpStatusCode.h"
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct FtpWebRequest; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct FtpStatus; };
namespace System::System::Net { struct WebHeaderCollection; };

namespace System::System::Net
{
	struct FtpWebResponse : System::Net::WebResponse
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* stream;
		System::Uri* uri;
		System::Net::FtpStatusCode statusCode;
		mscorlib::System::DateTime lastModified;
		mscorlib::System::String* bannerMessage;
		mscorlib::System::String* welcomeMessage;
		mscorlib::System::String* exitMessage;
		mscorlib::System::String* statusDescription;
		mscorlib::System::String* method;
		bool disposed;
		System::Net::FtpWebRequest* request;
		int64_t contentLength;
		void _ctor(System::Net::FtpWebRequest* request, System::Uri* uri, mscorlib::System::String* method, bool keepAlive);
		void _ctor(System::Net::FtpWebRequest* request, System::Uri* uri, mscorlib::System::String* method, System::Net::FtpStatusCode statusCode, mscorlib::System::String* statusDescription);
		void _ctor(System::Net::FtpWebRequest* request, System::Uri* uri, mscorlib::System::String* method, System::Net::FtpStatus* status);
		System::Net::WebHeaderCollection* get_Headers();
		System::Uri* get_ResponseUri();
		void set_LastModified(mscorlib::System::DateTime value);
		void set_BannerMessage(mscorlib::System::String* value);
		void set_WelcomeMessage(mscorlib::System::String* value);
		void set_StatusCode(System::Net::FtpStatusCode value);
		void Close();
		mscorlib::System::IO::Stream* GetResponseStream();
		void set_Stream(mscorlib::System::IO::Stream* value);
		void UpdateStatus(System::Net::FtpStatus* status);
		void CheckDisposed();
		bool IsFinal();
	};
}

