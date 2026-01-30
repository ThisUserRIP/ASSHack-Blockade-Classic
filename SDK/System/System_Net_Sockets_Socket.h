#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Net_Sockets_AddressFamily.h"
#include "System_Net_Sockets_SocketType.h"
#include "System_Net_Sockets_ProtocolType.h"
namespace System::System::Net::Sockets { struct SafeSocketHandle; };
namespace System::System::Net { struct EndPoint; };
namespace mscorlib::System::Threading { struct SemaphoreSlim; };
namespace mscorlib::System { struct AsyncCallback; };
namespace System::System { struct IOAsyncCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_ArraySegment_1.h"
namespace mscorlib::System { template <typename T> struct ArraySegment_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "System_Net_Sockets_SocketFlags.h"
#include "System_Net_Sockets_IOControlCode.h"
#include "System_Net_Sockets_IPProtectionLevel.h"
namespace mscorlib::System { struct IAsyncResult; };
namespace System::System::Net { struct IPAddress; };
#include "System_Net_Sockets_SocketShutdown.h"
#include "System_Net_Sockets_SocketOptionLevel.h"
#include "System_Net_Sockets_SocketOptionName.h"
namespace System::System::Net { struct SocketAddress; };
#include "System_Net_Sockets_SelectMode.h"
namespace mscorlib::System { struct String; };
namespace System::System::Net::Sockets { struct SocketAsyncResult; };
#include "System_Net_Sockets_SocketError.h"
namespace System::System::Net::Sockets { struct Socket_WSABUF; };
namespace System::System::Net::Sockets { struct Socket_WSABUF; };
namespace System::System { struct IOSelectorJob; };
namespace System::System::Net { struct IPEndPoint; };
namespace mscorlib::System::Threading { struct Thread; };
#include "System_Net_NetworkInformation_NetworkInterfaceComponent.h"

namespace System::System::Net::Sockets
{
	struct Socket : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool is_closed;
		bool is_listening;
		bool useOverlappedIO;
		int32_t linger_timeout;
		System::Net::Sockets::AddressFamily addressFamily;
		System::Net::Sockets::SocketType socketType;
		System::Net::Sockets::ProtocolType protocolType;
		System::Net::Sockets::SafeSocketHandle* m_Handle;
		System::Net::EndPoint* seed_endpoint;
		mscorlib::System::Threading::SemaphoreSlim* ReadSem;
		mscorlib::System::Threading::SemaphoreSlim* WriteSem;
		bool is_blocking;
		bool is_bound;
		bool is_connected;
		int32_t m_IntCleanedUp;
		bool connect_in_progress;
		int32_t ID;
		struct StaticFields
		{
			mscorlib::System::Object* s_InternalSyncObject;
			bool s_SupportsIPv4;
			bool s_SupportsIPv6;
			bool s_OSSupportsIPv6;
			bool s_Initialized;
			bool s_LoggingEnabled;
			mscorlib::System::AsyncCallback* AcceptAsyncCallback;
			System::IOAsyncCallback* BeginAcceptCallback;
			System::IOAsyncCallback* BeginAcceptReceiveCallback;
			mscorlib::System::AsyncCallback* ConnectAsyncCallback;
			System::IOAsyncCallback* BeginConnectCallback;
			mscorlib::System::AsyncCallback* DisconnectAsyncCallback;
			System::IOAsyncCallback* BeginDisconnectCallback;
			mscorlib::System::AsyncCallback* ReceiveAsyncCallback;
			System::IOAsyncCallback* BeginReceiveCallback;
			System::IOAsyncCallback* BeginReceiveGenericCallback;
			mscorlib::System::AsyncCallback* ReceiveFromAsyncCallback;
			System::IOAsyncCallback* BeginReceiveFromCallback;
			mscorlib::System::AsyncCallback* SendAsyncCallback;
			System::IOAsyncCallback* BeginSendGenericCallback;
			mscorlib::System::AsyncCallback* SendToAsyncCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System::Net::Sockets::AddressFamily addressFamily, System::Net::Sockets::SocketType socketType, System::Net::Sockets::ProtocolType protocolType);
		static bool get_SupportsIPv4();
		static bool get_OSSupportsIPv4();
		static bool get_SupportsIPv6();
		static bool get_OSSupportsIPv6();
		intptr_t get_Handle();
		System::Net::Sockets::AddressFamily get_AddressFamily();
		System::Net::Sockets::SocketType get_SocketType();
		System::Net::Sockets::ProtocolType get_ProtocolType();
		bool get_ExclusiveAddressUse();
		void set_ExclusiveAddressUse(bool value);
		void set_DontFragment(bool value);
		bool get_DualMode();
		void set_DualMode(bool value);
		bool get_IsDualMode();
		bool CanTryAddressFamily(System::Net::Sockets::AddressFamily family);
		int32_t Send(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::ArraySegment_1<mscorlib::System::Byte>>* buffers, System::Net::Sockets::SocketFlags socketFlags);
		int32_t Send(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags);
		int32_t Receive(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags);
		int32_t Receive(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::ArraySegment_1<mscorlib::System::Byte>>* buffers, System::Net::Sockets::SocketFlags socketFlags);
		int32_t IOControl(System::Net::Sockets::IOControlCode ioControlCode, IL2CPP::Array<uint8_t>* optionInValue, IL2CPP::Array<uint8_t>* optionOutValue);
		void SetIPProtectionLevel(System::Net::Sockets::IPProtectionLevel level);
		mscorlib::System::IAsyncResult* BeginConnect(System::Net::IPAddress* address, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state);
		mscorlib::System::IAsyncResult* BeginSend(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		int32_t EndSend(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::IAsyncResult* BeginReceive(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		int32_t EndReceive(mscorlib::System::IAsyncResult* asyncResult);
		static mscorlib::System::Object* get_InternalSyncObject();
		bool get_CleanedUp();
		static void InitializeSockets();
		void Dispose();
		void Finalize();
		void InternalShutdown(System::Net::Sockets::SocketShutdown how);
		void SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, int32_t optionValue, bool silent);
		void _ctor(System::Net::Sockets::AddressFamily family, System::Net::Sockets::SocketType type, System::Net::Sockets::ProtocolType proto, System::Net::Sockets::SafeSocketHandle* safe_handle);
		void SocketDefaults();
		intptr_t Socket_internal(System::Net::Sockets::AddressFamily family, System::Net::Sockets::SocketType type, System::Net::Sockets::ProtocolType proto, int32_t& error);
		int32_t get_Available();
		static int32_t Available_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t& error);
		static int32_t Available_internal(intptr_t socket, int32_t& error);
		bool get_IsBound();
		System::Net::EndPoint* get_LocalEndPoint();
		static System::Net::SocketAddress* LocalEndPoint_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t family, int32_t& error);
		static System::Net::SocketAddress* LocalEndPoint_internal(intptr_t socket, int32_t family, int32_t& error);
		bool get_Blocking();
		void set_Blocking(bool value);
		static void Blocking_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, bool block, int32_t& error);
		static void Blocking_internal(intptr_t socket, bool block, int32_t& error);
		bool get_Connected();
		void set_NoDelay(bool value);
		bool Poll(int32_t microSeconds, System::Net::Sockets::SelectMode mode);
		static bool Poll_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::SelectMode mode, int32_t timeout, int32_t& error);
		static bool Poll_internal(intptr_t socket, System::Net::Sockets::SelectMode mode, int32_t timeout, int32_t& error);
		System::Net::Sockets::Socket* Accept();
		void Accept(System::Net::Sockets::Socket* acceptSocket);
		System::Net::Sockets::Socket* EndAccept(mscorlib::System::IAsyncResult* asyncResult);
		System::Net::Sockets::Socket* EndAccept(IL2CPP::Array<uint8_t>& buffer, int32_t& bytesTransferred, mscorlib::System::IAsyncResult* asyncResult);
		static System::Net::Sockets::SafeSocketHandle* Accept_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t& error, bool blocking);
		static intptr_t Accept_internal(intptr_t sock, int32_t& error, bool blocking);
		void Bind(System::Net::EndPoint* localEP);
		static void Bind_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::SocketAddress* sa, int32_t& error);
		static void Bind_internal(intptr_t sock, System::Net::SocketAddress* sa, int32_t& error);
		void Listen(int32_t backlog);
		static void Listen_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t backlog, int32_t& error);
		static void Listen_internal(intptr_t sock, int32_t backlog, int32_t& error);
		void Connect(System::Net::EndPoint* remoteEP);
		mscorlib::System::IAsyncResult* BeginConnect(mscorlib::System::String* host, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state);
		mscorlib::System::IAsyncResult* BeginConnect(System::Net::EndPoint* remoteEP, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		mscorlib::System::IAsyncResult* BeginConnect(IL2CPP::Array<System::Net::IPAddress*>* addresses, int32_t port, mscorlib::System::AsyncCallback* requestCallback, mscorlib::System::Object* state);
		static void BeginMConnect(System::Net::Sockets::SocketAsyncResult* sockares);
		static void BeginSConnect(System::Net::Sockets::SocketAsyncResult* sockares);
		void EndConnect(mscorlib::System::IAsyncResult* asyncResult);
		static void Connect_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::SocketAddress* sa, int32_t& error, bool blocking);
		static void Connect_internal(intptr_t sock, System::Net::SocketAddress* sa, int32_t& error, bool blocking);
		void Disconnect(bool reuseSocket);
		void EndDisconnect(mscorlib::System::IAsyncResult* asyncResult);
		static void Disconnect_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, bool reuse, int32_t& error);
		static void Disconnect_internal(intptr_t sock, bool reuse, int32_t& error);
		int32_t Receive(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode);
		int32_t Receive(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::ArraySegment_1<mscorlib::System::Byte>>* buffers, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode);
		mscorlib::System::IAsyncResult* BeginReceive(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		int32_t EndReceive(mscorlib::System::IAsyncResult* asyncResult, System::Net::Sockets::SocketError& errorCode);
		static int32_t Receive_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking);
		static int32_t Receive_internal(intptr_t sock, System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking);
		static int32_t Receive_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking);
		static int32_t Receive_internal(intptr_t sock, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking);
		int32_t ReceiveFrom(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::EndPoint& remoteEP, System::Net::Sockets::SocketError& errorCode);
		int32_t EndReceiveFrom(mscorlib::System::IAsyncResult* asyncResult, System::Net::EndPoint& endPoint);
		static int32_t ReceiveFrom_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, System::Net::SocketAddress& sockaddr, int32_t& error, bool blocking);
		static int32_t ReceiveFrom_internal(intptr_t sock, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, System::Net::SocketAddress& sockaddr, int32_t& error, bool blocking);
		int32_t Send(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode);
		int32_t Send(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::ArraySegment_1<mscorlib::System::Byte>>* buffers, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode);
		mscorlib::System::IAsyncResult* BeginSend(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, System::Net::Sockets::SocketFlags socketFlags, System::Net::Sockets::SocketError& errorCode, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		static void BeginSendCallback(System::Net::Sockets::SocketAsyncResult* sockares, int32_t sent_so_far);
		int32_t EndSend(mscorlib::System::IAsyncResult* asyncResult, System::Net::Sockets::SocketError& errorCode);
		static int32_t Send_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking);
		static int32_t Send_internal(intptr_t sock, System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking);
		static int32_t Send_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking);
		static int32_t Send_internal(intptr_t sock, uint8_t* buffer, int32_t count, System::Net::Sockets::SocketFlags flags, int32_t& error, bool blocking);
		int32_t EndSendTo(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::Object* GetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName);
		static void GetSocketOption_obj_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, mscorlib::System::Object& obj_val, int32_t& error);
		static void GetSocketOption_obj_internal(intptr_t socket, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, mscorlib::System::Object& obj_val, int32_t& error);
		void SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, mscorlib::System::Object* optionValue);
		void SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, bool optionValue);
		void SetSocketOption(System::Net::Sockets::SocketOptionLevel optionLevel, System::Net::Sockets::SocketOptionName optionName, int32_t optionValue);
		static void SetSocketOption_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, mscorlib::System::Object* obj_val, IL2CPP::Array<uint8_t>* byte_val, int32_t int_val, int32_t& error);
		static void SetSocketOption_internal(intptr_t socket, System::Net::Sockets::SocketOptionLevel level, System::Net::Sockets::SocketOptionName name, mscorlib::System::Object* obj_val, IL2CPP::Array<uint8_t>* byte_val, int32_t int_val, int32_t& error);
		int32_t IOControl(int32_t ioControlCode, IL2CPP::Array<uint8_t>* optionInValue, IL2CPP::Array<uint8_t>* optionOutValue);
		static int32_t IOControl_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t ioctl_code, IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output, int32_t& error);
		static int32_t IOControl_internal(intptr_t sock, int32_t ioctl_code, IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output, int32_t& error);
		void Close();
		void Close(int32_t timeout);
		static void Close_internal(intptr_t socket, int32_t& error);
		static void Shutdown_internal(System::Net::Sockets::SafeSocketHandle* safeHandle, System::Net::Sockets::SocketShutdown how, int32_t& error);
		static void Shutdown_internal(intptr_t socket, System::Net::Sockets::SocketShutdown how, int32_t& error);
		void Dispose(bool disposing);
		void Linger(intptr_t handle);
		void ThrowIfDisposedAndClosed();
		void ThrowIfBufferNull(IL2CPP::Array<uint8_t>* buffer);
		void ThrowIfBufferOutOfRange(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		void ThrowIfUdp();
		System::Net::Sockets::SocketAsyncResult* ValidateEndIAsyncResult(mscorlib::System::IAsyncResult* ares, mscorlib::System::String* methodName, mscorlib::System::String* argName);
		void QueueIOSelectorJob(mscorlib::System::Threading::SemaphoreSlim* sem, intptr_t handle, System::IOSelectorJob* job);
		System::Net::IPEndPoint* RemapIPEndPoint(System::Net::IPEndPoint* input);
		static void cancel_blocking_socket_operation(mscorlib::System::Threading::Thread* thread);
		static int32_t get_FamilyHint();
		static bool IsProtocolSupported_internal(System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface);
		static bool IsProtocolSupported(System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface);
		static void _cctor();
	};
}

