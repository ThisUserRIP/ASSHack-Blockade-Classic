#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebConnectionStream.h"
namespace System::System::Net { struct BufferOffsetSize; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System::System::Net { struct WebCompletionSource; };
namespace mscorlib::System { struct Object; };
namespace System::System::Net { struct WebRequestStream; };
namespace System::System::Net { struct WebHeaderCollection; };
#include "System_Net_HttpStatusCode.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Version; };
namespace System::System::Net { struct MonoChunkStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
#include "..\mscorlib\System_ValueTuple_2.h"
namespace mscorlib::System { template <typename T1, typename T2> struct ValueTuple_2; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace System::System::Net { struct WebException; };
#include "System_Net_WebExceptionStatus.h"
namespace mscorlib::System { struct Exception; };
#include "System_Net_ReadState.h"

namespace System::System::Net
{
	struct WebResponseStream : System::Net::WebConnectionStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::BufferOffsetSize* readBuffer;
		int64_t contentLength;
		int64_t totalRead;
		bool nextReadCalled;
		int32_t stream_length;
		System::Net::WebCompletionSource* pendingRead;
		mscorlib::System::Object* locker;
		int32_t nestedRead;
		bool read_eof;
		System::Net::WebRequestStream* _RequestStream_k__BackingField;
		System::Net::WebHeaderCollection* _Headers_k__BackingField;
		System::Net::HttpStatusCode _StatusCode_k__BackingField;
		mscorlib::System::String* _StatusDescription_k__BackingField;
		mscorlib::System::Version* _Version_k__BackingField;
		bool _KeepAlive_k__BackingField;
		bool _ChunkedRead_k__BackingField;
		System::Net::MonoChunkStream* _ChunkStream_k__BackingField;
		System::Net::WebRequestStream* get_RequestStream();
		System::Net::WebHeaderCollection* get_Headers();
		void set_Headers(System::Net::WebHeaderCollection* value);
		System::Net::HttpStatusCode get_StatusCode();
		void set_StatusCode(System::Net::HttpStatusCode value);
		mscorlib::System::String* get_StatusDescription();
		void set_StatusDescription(mscorlib::System::String* value);
		mscorlib::System::Version* get_Version();
		void set_Version(mscorlib::System::Version* value);
		bool get_KeepAlive();
		void set_KeepAlive(bool value);
		void _ctor(System::Net::WebRequestStream* request);
		int64_t get_Length();
		bool get_CanRead();
		bool get_CanWrite();
		bool get_ChunkedRead();
		void set_ChunkedRead(bool value);
		System::Net::MonoChunkStream* get_ChunkStream();
		void set_ChunkStream(System::Net::MonoChunkStream* value);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::ValueTuple_2<mscorlib::System::Int32, mscorlib::System::Int32>>* ProcessRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* InnerReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* EnsureReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::Threading::CancellationToken cancellationToken);
		bool CheckAuthHeader(mscorlib::System::String* headerName);
		bool IsNtlmAuth();
		bool get_ExpectContent();
		mscorlib::System::Threading::Tasks::Task* Initialize(System::Net::BufferOffsetSize* buffer, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* ReadAllAsync(bool resending, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::Threading::CancellationToken cancellationToken);
		void Close_internal(bool& disposed);
		System::Net::WebException* GetReadException(System::Net::WebExceptionStatus status, mscorlib::System::Exception* error, mscorlib::System::String* where);
		mscorlib::System::Threading::Tasks::Task* InitReadAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		bool GetResponse(System::Net::BufferOffsetSize* buffer, int32_t& pos, System::Net::ReadState& state);
	};
}

