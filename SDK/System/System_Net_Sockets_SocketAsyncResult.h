#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IOAsyncResult.h"
namespace System::System::Net::Sockets { struct Socket; };
#include "System_Net_Sockets_SocketOperation.h"
namespace mscorlib::System { struct Exception; };
namespace System::System::Net { struct EndPoint; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Net_Sockets_SocketFlags.h"
namespace System::System::Net { struct IPAddress; };
#include "..\mscorlib\System_ArraySegment_1.h"
namespace mscorlib::System { template <typename T> struct ArraySegment_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
#include "System_Net_Sockets_SocketError.h"

namespace System::System::Net::Sockets
{
	struct SocketAsyncResult : System::IOAsyncResult
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Sockets::Socket* socket;
		System::Net::Sockets::SocketOperation operation;
		mscorlib::System::Exception* DelayedException;
		System::Net::EndPoint* EndPoint;
		IL2CPP::Array<uint8_t>* Buffer;
		int32_t Offset;
		int32_t Size;
		System::Net::Sockets::SocketFlags SockFlags;
		System::Net::Sockets::Socket* AcceptSocket;
		IL2CPP::Array<System::Net::IPAddress*>* Addresses;
		int32_t Port;
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::ArraySegment_1<mscorlib::System::Byte>>* Buffers;
		bool ReuseSocket;
		int32_t CurrentAddress;
		System::Net::Sockets::Socket* AcceptedSocket;
		int32_t Total;
		int32_t error;
		int32_t EndCalled;
		intptr_t get_Handle();
		void _ctor(System::Net::Sockets::Socket* socket, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state, System::Net::Sockets::SocketOperation operation);
		System::Net::Sockets::SocketError get_ErrorCode();
		void CheckIfThrowDelayedException();
		void CompleteDisposed();
		void Complete();
		void Complete(bool synch);
		void Complete(int32_t total);
		void Complete(mscorlib::System::Exception* e, bool synch);
		void Complete(mscorlib::System::Exception* e);
		void Complete(System::Net::Sockets::Socket* s);
		void Complete(System::Net::Sockets::Socket* s, int32_t total);
	};
}

