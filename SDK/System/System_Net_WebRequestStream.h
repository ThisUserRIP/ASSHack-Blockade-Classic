#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_WebConnectionStream.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct MemoryStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct WebCompletionSource; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct WebConnection; };
namespace System::System::Net { struct WebOperation; };
namespace mscorlib::System::IO { struct Stream; };
namespace System::System::Net { struct WebConnectionTunnel; };
namespace System::System::Net { struct BufferOffsetSize; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "..\mscorlib\System_Threading_CancellationToken.h"
namespace mscorlib::System::Threading { struct CancellationToken; };
namespace mscorlib::System::Threading::Tasks { template <typename TResult> struct Task_1; };

namespace System::System::Net
{
	struct WebRequestStream : System::Net::WebConnectionStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::MemoryStream* writeBuffer;
		bool requestWritten;
		bool allowBuffering;
		bool sendChunked;
		System::Net::WebCompletionSource* pendingWrite;
		int64_t totalWritten;
		IL2CPP::Array<uint8_t>* headers;
		bool headersSent;
		int32_t completeRequestWritten;
		int32_t chunkTrailerWritten;
		bool _KeepAlive_k__BackingField;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* crlf;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System::Net::WebConnection* connection, System::Net::WebOperation* operation, mscorlib::System::IO::Stream* stream, System::Net::WebConnectionTunnel* tunnel);
		bool get_KeepAlive();
		int64_t get_Length();
		bool get_CanRead();
		bool get_CanWrite();
		bool get_HasWriteBuffer();
		int32_t get_WriteBufferLength();
		System::Net::BufferOffsetSize* GetWriteBuffer();
		mscorlib::System::Threading::Tasks::Task* FinishWriting(mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WriteAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* ProcessWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::Threading::CancellationToken cancellationToken);
		void CheckWriteOverflow(int64_t contentLength, int64_t totalWritten, int64_t size);
		mscorlib::System::Threading::Tasks::Task* Initialize(mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* SetHeadersAsync(bool setInternalLength, mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WriteRequestAsync(mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WriteChunkTrailer_inner(mscorlib::System::Threading::CancellationToken cancellationToken);
		mscorlib::System::Threading::Tasks::Task* WriteChunkTrailer();
		void KillBuffer();
		mscorlib::System::Threading::Tasks::Task_1<mscorlib::System::Int32>* ReadAsync(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::Threading::CancellationToken cancellationToken);
		void Close_internal(bool& disposed);
		static void _cctor();
	};
}

