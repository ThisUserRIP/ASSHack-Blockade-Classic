#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MarshalByRefObject.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct Stream_ReadWriteTask; };
namespace mscorlib::System::Threading { struct SemaphoreSlim; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System { struct IAsyncResult; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "System_IO_SeekOrigin.h"

namespace mscorlib::System::IO
{
	struct Stream : mscorlib::System::MarshalByRefObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream_ReadWriteTask* _activeReadWriteTask;
		mscorlib::System::Threading::SemaphoreSlim* _asyncActiveSemaphore;
		struct StaticFields
		{
			mscorlib::System::IO::Stream* Null;
			int32_t _DefaultCopyBufferSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::Threading::SemaphoreSlim* EnsureAsyncActiveSemaphoreInitialized();
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		int32_t get_ReadTimeout();
		void set_ReadTimeout(int32_t value);
		int32_t get_WriteTimeout();
		void Close();
		void Dispose();
		void Dispose(bool disposing);
		void Flush();
		mscorlib::System::Threading::Tasks::Task* FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		mscorlib::System::IAsyncResult* BeginReadInternal(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state, bool serializeAsynchronously);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* BeginEndReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		mscorlib::System::IAsyncResult* BeginWriteInternal(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state, bool serializeAsynchronously);
		void RunReadWriteTaskWhenReady(mscorlib::System::Threading::Tasks::Task* asyncWaiter, mscorlib::System::IO::Stream_ReadWriteTask* readWriteTask);
		void RunReadWriteTask(mscorlib::System::IO::Stream_ReadWriteTask* readWriteTask);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* BeginEndWriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		int32_t ReadByte();
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void WriteByte(uint8_t value);
		mscorlib::System::IAsyncResult* BlockingBeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		static int32_t BlockingEndRead(mscorlib::System::IAsyncResult* asyncResult);
		mscorlib::System::IAsyncResult* BlockingBeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		static void BlockingEndWrite(mscorlib::System::IAsyncResult* asyncResult);
		void _ctor();
		static void _cctor();
	};
}

