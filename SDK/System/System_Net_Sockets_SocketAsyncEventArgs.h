#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct EndPoint; };
namespace System::System::Net::Sockets { struct Socket; };
#include "System_Net_Sockets_SocketError.h"
namespace mscorlib::System { template <typename TEventArgs> struct EventHandler_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net::Sockets
{
	struct SocketAsyncEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool disposed;
		int32_t in_progress;
		System::Net::EndPoint* remote_ep;
		System::Net::Sockets::Socket* current_socket;
		System::Net::Sockets::Socket* _AcceptSocket_k__BackingField;
		int32_t _BytesTransferred_k__BackingField;
		System::Net::Sockets::SocketError _SocketError_k__BackingField;
		mscorlib::System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs>* Completed;
		System::Net::Sockets::Socket* get_AcceptSocket();
		void set_AcceptSocket(System::Net::Sockets::Socket* value);
		void set_BytesTransferred(int32_t value);
		void set_SocketError(System::Net::Sockets::SocketError value);
		void Dispose(bool disposing);
		void Dispose();
		void Complete();
		void OnCompleted(System::Net::Sockets::SocketAsyncEventArgs* e);
	};
}

