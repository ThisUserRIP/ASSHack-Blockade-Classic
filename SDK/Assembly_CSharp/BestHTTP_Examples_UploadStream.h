#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace mscorlib::System::IO { struct MemoryStream; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading { struct AutoResetEvent; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct UploadStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::MemoryStream* ReadBuffer;
		mscorlib::System::IO::MemoryStream* WriteBuffer;
		bool noMoreData;
		mscorlib::System::Threading::AutoResetEvent* ARE;
		mscorlib::System::Object* locker;
		mscorlib::System::String* _Name_k__BackingField;
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		bool get_IsReadBufferEmpty();
		void _ctor(mscorlib::System::String* name);
		void _ctor();
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void Flush();
		void Dispose(bool disposing);
		void Finish();
		bool SwitchBuffers();
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
	};
}

