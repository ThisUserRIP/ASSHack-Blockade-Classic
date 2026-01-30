#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct HttpWebRequest; };
namespace System::System { struct Uri; };
#include "System_Net_WebConnectionTunnel_NtlmAuthState.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct WebHeaderCollection; };
namespace mscorlib::System { struct Version; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "..\mscorlib\System_ValueTuple_3.h"
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct ValueTuple_3; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };

namespace System::System::Net
{
	struct WebConnectionTunnel : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::HttpWebRequest* _Request_k__BackingField;
		System::Uri* _ConnectUri_k__BackingField;
		System::Net::HttpWebRequest* connectRequest;
		System::Net::WebConnectionTunnel_NtlmAuthState ntlmAuthState;
		bool _Success_k__BackingField;
		bool _CloseConnection_k__BackingField;
		int32_t _StatusCode_k__BackingField;
		mscorlib::System::String* _StatusDescription_k__BackingField;
		IL2CPP::Array<mscorlib::System::String*>* _Challenge_k__BackingField;
		System::Net::WebHeaderCollection* _Headers_k__BackingField;
		mscorlib::System::Version* _ProxyVersion_k__BackingField;
		IL2CPP::Array<uint8_t>* _Data_k__BackingField;
		System::Net::HttpWebRequest* get_Request();
		System::Uri* get_ConnectUri();
		void _ctor(System::Net::HttpWebRequest* request, System::Uri* connectUri);
		bool get_Success();
		void set_Success(bool value);
		bool get_CloseConnection();
		void set_CloseConnection(bool value);
		int32_t get_StatusCode();
		void set_StatusCode(int32_t value);
		void set_StatusDescription(mscorlib::System::String* value);
		IL2CPP::Array<mscorlib::System::String*>* get_Challenge();
		void set_Challenge(IL2CPP::Array<mscorlib::System::String*>* value);
		System::Net::WebHeaderCollection* get_Headers();
		void set_Headers(System::Net::WebHeaderCollection* value);
		mscorlib::System::Version* get_ProxyVersion();
		void set_ProxyVersion(mscorlib::System::Version* value);
		IL2CPP::Array<uint8_t>* get_Data();
		void set_Data(IL2CPP::Array<uint8_t>* value);
		mscorlib::System::Threading::Tasks::Task* Initialize(mscorlib::System::IO::Stream* stream, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::ValueTuple_3<System::Net::WebHeaderCollection, IL2CPP::Array<mscorlib::System::Byte>, mscorlib::System::Int32>>* ReadHeaders(mscorlib::System::IO::Stream* stream, mscorlib::System::Threading::CancellationToken cancellationToken);
		void FlushContents(mscorlib::System::IO::Stream* stream, int32_t contentLength);
	};
}

