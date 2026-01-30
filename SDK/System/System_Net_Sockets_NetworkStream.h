#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace System::System::Net::Sockets { struct Socket; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"
#include "..\mscorlib\System_IO_FileAccess.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "System_Net_Sockets_SocketShutdown.h"

namespace System::System::Net::Sockets
{
	struct NetworkStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Sockets::Socket* m_StreamSocket;
		bool m_Readable;
		bool m_Writeable;
		bool m_OwnsSocket;
		int32_t m_CloseTimeout;
		bool m_CleanedUp;
		int32_t m_CurrentReadTimeout;
		int32_t m_CurrentWriteTimeout;
		void _ctor(System::Net::Sockets::Socket* socket);
		void _ctor(System::Net::Sockets::Socket* socket, bool ownsSocket);
		System::Net::Sockets::Socket* get_InternalSocket();
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int32_t get_ReadTimeout();
		void set_ReadTimeout(int32_t value);
		int32_t get_WriteTimeout();
		bool get_DataAvailable();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void InitNetworkStream(System::Net::Sockets::Socket* socket, mscorlib::System::IO::FileAccess Access);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		void Dispose(bool disposing);
		void Finalize();
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
		void Flush();
		mscorlib::System::Threading::Tasks::Task* FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		void SetLength(int64_t value);
		void SetSocketTimeoutOption(System::Net::Sockets::SocketShutdown mode, int32_t timeout, bool silent);
	};
}

