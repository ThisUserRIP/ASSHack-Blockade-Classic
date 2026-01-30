#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct Stream; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Text { struct Decoder; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Text { struct Encoding; };
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::IO
{
	struct BinaryReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* m_stream;
		IL2CPP::Array<uint8_t>* m_buffer;
		mscorlib::System::Text::Decoder* m_decoder;
		IL2CPP::Array<uint8_t>* m_charBytes;
		IL2CPP::Array<wchar_t>* m_singleChar;
		IL2CPP::Array<wchar_t>* m_charBuffer;
		int32_t m_maxCharsSize;
		bool m_2BytesPerChar;
		bool m_isMemoryStream;
		bool m_leaveOpen;
		void _ctor(mscorlib::System::IO::Stream* input);
		void _ctor(mscorlib::System::IO::Stream* input, mscorlib::System::Text::Encoding* encoding);
		void _ctor(mscorlib::System::IO::Stream* input, mscorlib::System::Text::Encoding* encoding, bool leaveOpen);
		mscorlib::System::IO::Stream* get_BaseStream();
		void Close();
		void Dispose(bool disposing);
		void Dispose();
		int32_t Read();
		bool ReadBoolean();
		uint8_t ReadByte();
		int8_t ReadSByte();
		wchar_t ReadChar();
		int16_t ReadInt16();
		uint16_t ReadUInt16();
		int32_t ReadInt32();
		uint32_t ReadUInt32();
		int64_t ReadInt64();
		uint64_t ReadUInt64();
		float ReadSingle();
		double ReadDouble();
		mscorlib::System::Decimal ReadDecimal();
		mscorlib::System::String* ReadString();
		int32_t InternalReadChars(IL2CPP::Array<wchar_t>* buffer, int32_t index, int32_t count);
		int32_t InternalReadOneChar();
		IL2CPP::Array<wchar_t>* ReadChars(int32_t count);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		IL2CPP::Array<uint8_t>* ReadBytes(int32_t count);
		void FillBuffer(int32_t numBytes);
		int32_t Read7BitEncodedInt();
	};
}

