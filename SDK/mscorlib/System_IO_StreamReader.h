#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IO_TextReader.h"
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System::Text { struct Decoder; };
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
	struct StreamReader : mscorlib::System::IO::TextReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* stream;
		mscorlib::System::Text::Encoding* encoding;
		mscorlib::System::Text::Decoder* decoder;
		IL2CPP::Array<uint8_t>* byteBuffer;
		IL2CPP::Array<wchar_t>* charBuffer;
		IL2CPP::Array<uint8_t>* _preamble;
		int32_t charPos;
		int32_t charLen;
		int32_t byteLen;
		int32_t bytePos;
		int32_t _maxCharsPerBuffer;
		bool _detectEncoding;
		bool _checkPreamble;
		bool _isBlocked;
		bool _closable;
		mscorlib::System::Threading::Tasks::Task* _asyncReadTask;
		struct StaticFields
		{
			mscorlib::System::IO::StreamReader* Null;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_DefaultBufferSize();
		void CheckAsyncTaskInProgress();
		void _ctor();
		void _ctor(mscorlib::System::IO::Stream* stream);
		void _ctor(mscorlib::System::IO::Stream* stream, bool detectEncodingFromByteOrderMarks);
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Text::Encoding* encoding);
		void _ctor(mscorlib::System::IO::Stream* stream, mscorlib::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);
		void _ctor(mscorlib::System::String* path);
		void _ctor(mscorlib::System::String* path, bool detectEncodingFromByteOrderMarks);
		void _ctor(mscorlib::System::String* path, mscorlib::System::Text::Encoding* encoding);
		void _ctor(mscorlib::System::String* path, mscorlib::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize);
		void _ctor(mscorlib::System::String* path, mscorlib::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool checkHost);
		void Init(mscorlib::System::IO::Stream* stream, mscorlib::System::Text::Encoding* encoding, bool detectEncodingFromByteOrderMarks, int32_t bufferSize, bool leaveOpen);
		void Init(mscorlib::System::IO::Stream* stream);
		void Close();
		void Dispose(bool disposing);
		mscorlib::System::Text::Encoding* get_CurrentEncoding();
		mscorlib::System::IO::Stream* get_BaseStream();
		bool get_LeaveOpen();
		bool get_EndOfStream();
		int32_t Peek();
		bool DataAvailable();
		int32_t Read();
		int32_t Read(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		mscorlib::System::String* ReadToEnd();
		void CompressBuffer(int32_t n);
		void DetectEncoding();
		bool IsPreamble();
		int32_t ReadBuffer();
		int32_t ReadBuffer(IL2CPP::Array<wchar_t>* userBuffer, int32_t userOffset, int32_t desiredChars, bool& readToUserBuffer);
		mscorlib::System::String* ReadLine();
		static void _cctor();
	};
}

