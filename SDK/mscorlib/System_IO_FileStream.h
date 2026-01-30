#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_Stream.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace mscorlib::Microsoft::Win32::SafeHandles { struct SafeFileHandle; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_IO_FileAccess.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_IO_FileMode.h"
#include "System_IO_FileShare.h"
#include "System_IO_FileOptions.h"
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
#include "System_IO_SeekOrigin.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
namespace mscorlib::System::Runtime::InteropServices { struct SafeHandle; };

namespace mscorlib::System::IO
{
	struct FileStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* buf;
		mscorlib::System::String* name;
		mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle;
		bool isExposed;
		int64_t append_startpos;
		mscorlib::System::IO::FileAccess access;
		bool owner;
		bool async;
		bool canseek;
		bool anonymous;
		bool buf_dirty;
		int32_t buf_size;
		int32_t buf_length;
		int32_t buf_offset;
		int64_t buf_start;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* buf_recycle;
			mscorlib::System::Object* buf_recycle_lock;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(intptr_t handle, mscorlib::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper);
		void _ctor(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode);
		void _ctor(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access);
		void _ctor(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share);
		void _ctor(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, int32_t bufferSize);
		void _ctor(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, int32_t bufferSize, bool useAsync);
		void _ctor(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, int32_t bufferSize, mscorlib::System::IO::FileOptions options);
		void _ctor(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, int32_t bufferSize, mscorlib::System::IO::FileOptions options, mscorlib::System::String* msgPath, bool bFromProxy, bool useLongPath, bool checkHost);
		void _ctor(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, int32_t bufferSize, bool isAsync, bool anonymous);
		void _ctor(mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare share, int32_t bufferSize, bool anonymous, mscorlib::System::IO::FileOptions options);
		void Init(mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle* safeHandle, mscorlib::System::IO::FileAccess access, bool ownsHandle, int32_t bufferSize, bool isAsync, bool isConsoleWrapper);
		bool get_CanRead();
		bool get_CanWrite();
		bool get_CanSeek();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		mscorlib::Microsoft::Win32::SafeHandles::SafeFileHandle* get_SafeFileHandle();
		void ExposeHandle();
		int32_t ReadByte();
		void WriteByte(uint8_t value);
		int32_t Read(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count);
		int32_t ReadInternal(IL2CPP::Array<uint8_t>* dest, int32_t offset, int32_t count);
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t numBytes, mscorlib::System::AsyncCallback* userCallback, mscorlib::System::Object* stateObject);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		void Write(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t count);
		void WriteInternal(IL2CPP::Array<uint8_t>* src, int32_t offset, int32_t count);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* array, int32_t offset, int32_t numBytes, mscorlib::System::AsyncCallback* userCallback, mscorlib::System::Object* stateObject);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		void Flush();
		void Finalize();
		void Dispose(bool disposing);
		mscorlib::System::Threading::Tasks::Task* FlushAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::Threading::CancellationToken cancellationToken);
		int32_t ReadSegment(IL2CPP::Array<uint8_t>* dest, int32_t dest_offset, int32_t count);
		int32_t WriteSegment(IL2CPP::Array<uint8_t>* src, int32_t src_offset, int32_t count);
		void FlushBuffer();
		void FlushBufferIfDirty();
		void RefillBuffer();
		int32_t ReadData(mscorlib::System::Runtime::InteropServices::SafeHandle* safeHandle, IL2CPP::Array<uint8_t>* buf, int32_t offset, int32_t count);
		void InitBuffer(int32_t size, bool isZeroSize);
		mscorlib::System::String* GetSecureFileName(mscorlib::System::String* filename);
		mscorlib::System::String* GetSecureFileName(mscorlib::System::String* filename, bool full);
		static void _cctor();
	};
}

