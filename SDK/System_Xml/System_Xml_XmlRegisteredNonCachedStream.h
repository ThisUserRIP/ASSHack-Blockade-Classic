#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_Stream.h"
namespace mscorlib::System::IO { struct Stream; };
namespace System_Xml::System::Xml { struct XmlDownloadManager; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct IAsyncResult; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_IO_SeekOrigin.h"

namespace System_Xml::System::Xml
{
	struct XmlRegisteredNonCachedStream : mscorlib::System::IO::Stream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* stream;
		System_Xml::System::Xml::XmlDownloadManager* downloadManager;
		mscorlib::System::String* host;
		void _ctor(mscorlib::System::IO::Stream* stream, System_Xml::System::Xml::XmlDownloadManager* downloadManager, mscorlib::System::String* host);
		void Finalize();
		void Dispose(bool disposing);
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		int32_t EndRead(mscorlib::System::IAsyncResult* asyncResult);
		void EndWrite(mscorlib::System::IAsyncResult* asyncResult);
		void Flush();
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		int32_t ReadByte();
		int64_t Seek(int64_t offset, mscorlib::System::IO::SeekOrigin origin);
		void SetLength(int64_t value);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t count);
		void WriteByte(uint8_t value);
		bool get_CanRead();
		bool get_CanSeek();
		bool get_CanWrite();
		int64_t get_Length();
		int64_t get_Position();
		void set_Position(int64_t value);
	};
}

