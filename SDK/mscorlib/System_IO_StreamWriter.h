#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_TextWriter.h"
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System::Text { struct Encoder; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::IO
{
	struct StreamWriter : mscorlib::System::IO::TextWriter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* stream;
		mscorlib::System::Text::Encoding* encoding;
		mscorlib::System::Text::Encoder* encoder;
		IL2CPP::Array<uint8_t>* byteBuffer;
		IL2CPP::Array<wchar_t>* charBuffer;
		int32_t charPos;
		int32_t charLen;
		bool autoFlush;
		bool haveWrittenPreamble;
		bool closable;
		mscorlib::System::Threading::Tasks::Task* _asyncWriteTask;
		struct StaticFields
		{
			mscorlib::System::IO::StreamWriter* Null;
			mscorlib::System::Text::Encoding* _UTF8NoBOM;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void CheckAsyncTaskInProgress();
		static mscorlib::System::Text::Encoding* get_UTF8NoBOM();
		void _ctor();
		void _ctor(mscorlib::System::IO::Stream* stream);
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Text::Encoding* encoding);
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Text::Encoding* encoding, int32_t bufferSize, bool leaveOpen);
		void _ctor(mscorlib::System::String* path, bool append);
		void _ctor(mscorlib::System::String* path, bool append, mscorlib::System::Text::Encoding* encoding);
		void _ctor(mscorlib::System::String* path, bool append, mscorlib::System::Text::Encoding* encoding, int32_t bufferSize);
		void _ctor(mscorlib::System::String* path, bool append, mscorlib::System::Text::Encoding* encoding, int32_t bufferSize, bool checkHost);
		void Init(mscorlib::System::IO::Stream* streamArg, mscorlib::System::Text::Encoding* encodingArg, int32_t bufferSize, bool shouldLeaveOpen);
		static mscorlib::System::IO::Stream* CreateFile(mscorlib::System::String* path, bool append, bool checkHost);
		void Close();
		void Dispose(bool disposing);
		void Flush();
		void Flush(bool flushStream, bool flushEncoder);
		void set_AutoFlush(bool value);
		bool get_LeaveOpen();
		mscorlib::System::Text::Encoding* get_Encoding();
		void Write(wchar_t value);
		void Write(IL2CPP::Array<wchar_t>* buffer);
		void Write(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		void Write(mscorlib::System::String* value);
		static void _cctor();
	};
}

