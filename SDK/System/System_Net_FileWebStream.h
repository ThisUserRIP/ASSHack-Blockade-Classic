#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IO_FileStream.h"
namespace System::System::Net { struct FileWebRequest; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_IO_FileMode.h"
#include "..\mscorlib\System_IO_FileAccess.h"
#include "..\mscorlib\System_IO_FileShare.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Net_CloseExState.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };
namespace mscorlib::System { struct Object; };

namespace System::System::Net
{
	struct FileWebStream : mscorlib::System::IO::FileStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::FileWebRequest* m_request;
		void _ctor(System::Net::FileWebRequest* request, mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare sharing);
		void _ctor(System::Net::FileWebRequest* request, mscorlib::System::String* path, mscorlib::System::IO::FileMode mode, mscorlib::System::IO::FileAccess access, mscorlib::System::IO::FileShare sharing, int32_t length, bool async);
		void Dispose(bool disposing);
		void System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size);
		mscorlib::System::IAsyncResult* BeginRead(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		int32_t EndRead(mscorlib::System::IAsyncResult* ar);
		mscorlib::System::IAsyncResult* BeginWrite(IL2CPP::Array<uint8_t>* buffer, int32_t offset, int32_t size, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* state);
		void EndWrite(mscorlib::System::IAsyncResult* ar);
		void CheckError();
	};
}

