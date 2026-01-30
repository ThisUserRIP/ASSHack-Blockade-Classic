#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net::Sockets { struct NetworkStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net::Sockets { struct Socket; };
#include "BestHTTP_PlatformSupport_TcpClient_General_TcpClient_Properties.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net::Sockets { struct LingerOption; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\System\System_Net_Sockets_AddressFamily.h"
namespace System::System::Net { struct IPEndPoint; };
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct IPAddress; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::IO { struct Stream; };

namespace Assembly_CSharp::BestHTTP::PlatformSupport::TcpClient::General
{
	struct TcpClient : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Net::Sockets::NetworkStream* stream;
		bool active;
		System::System::Net::Sockets::Socket* client;
		bool disposed;
		Assembly_CSharp::BestHTTP::PlatformSupport::TcpClient::General::TcpClient_Properties values;
		int32_t recv_timeout;
		int32_t send_timeout;
		int32_t recv_buffer_size;
		int32_t send_buffer_size;
		System::System::Net::Sockets::LingerOption* linger_state;
		bool no_delay;
		mscorlib::System::TimeSpan _ConnectTimeout_k__BackingField;
		void Init(System::System::Net::Sockets::AddressFamily family);
		void _ctor();
		void _ctor(System::System::Net::Sockets::AddressFamily family);
		void _ctor(System::System::Net::IPEndPoint* localEP);
		void _ctor(mscorlib::System::String* hostname, int32_t port);
		bool get_Active();
		void set_Active(bool value);
		System::System::Net::Sockets::Socket* get_Client();
		void set_Client(System::System::Net::Sockets::Socket* value);
		int32_t get_Available();
		bool get_Connected();
		bool IsConnected();
		bool get_ExclusiveAddressUse();
		void set_ExclusiveAddressUse(bool value);
		void SetTcpClient(System::System::Net::Sockets::Socket* s);
		System::System::Net::Sockets::LingerOption* get_LingerState();
		void set_LingerState(System::System::Net::Sockets::LingerOption* value);
		bool get_NoDelay();
		void set_NoDelay(bool value);
		int32_t get_ReceiveBufferSize();
		void set_ReceiveBufferSize(int32_t value);
		int32_t get_ReceiveTimeout();
		void set_ReceiveTimeout(int32_t value);
		int32_t get_SendBufferSize();
		void set_SendBufferSize(int32_t value);
		int32_t get_SendTimeout();
		void set_SendTimeout(int32_t value);
		mscorlib::System::TimeSpan get_ConnectTimeout();
		void set_ConnectTimeout(mscorlib::System::TimeSpan value);
		void Close();
		void Connect(System::System::Net::IPEndPoint* remoteEP);
		void Connect(System::System::Net::IPAddress* address, int32_t port);
		void SetOptions();
		void Connect(mscorlib::System::String* hostname, int32_t port);
		void Connect(IL2CPP::Array<System::System::Net::IPAddress*>* ipAddresses, int32_t port);
		void EndConnect(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::IAsyncResult* BeginConnect(System::System::Net::IPAddress* address, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state);
		mscorlib::System::IAsyncResult* BeginConnect(IL2CPP::Array<System::System::Net::IPAddress*>* addresses, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state);
		mscorlib::System::IAsyncResult* BeginConnect(mscorlib::System::String* host, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state);
		void System_IDisposable_Dispose();
		void Dispose(bool disposing);
		void Finalize();
		mscorlib::System::IO::Stream* GetStream();
		void CheckDisposed();
	};
}

