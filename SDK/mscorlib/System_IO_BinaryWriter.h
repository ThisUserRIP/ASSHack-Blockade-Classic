#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::IO { struct Stream; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Text { struct Encoding; };
namespace mscorlib::System::Text { struct Encoder; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
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
namespace mscorlib::System { struct String; };

namespace mscorlib::System::IO
{
	struct BinaryWriter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* OutStream;
		IL2CPP::Array<uint8_t>* _buffer;
		mscorlib::System::Text::Encoding* _encoding;
		mscorlib::System::Text::Encoder* _encoder;
		bool _leaveOpen;
		IL2CPP::Array<uint8_t>* _largeByteBuffer;
		int32_t _maxChars;
		struct StaticFields
		{
			mscorlib::System::IO::BinaryWriter* Null;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::IO::Stream* output);
		void _ctor(mscorlib::System::IO::Stream* output, mscorlib::System::Text::Encoding* encoding);
		void _ctor(mscorlib::System::IO::Stream* output, mscorlib::System::Text::Encoding* encoding, bool leaveOpen);
		void Dispose(bool disposing);
		void Dispose();
		void Flush();
		void Write(bool value);
		void Write(uint8_t value);
		void Write(IL2CPP::Array<uint8_t>* buffer);
		void Write(IL2CPP::Array<uint8_t>* buffer, int32_t index, int32_t count);
		void Write(wchar_t ch);
		void Write(IL2CPP::Array<wchar_t>* chars);
		void Write(double value);
		void Write(int16_t value);
		void Write(uint16_t value);
		void Write(int32_t value);
		void Write(uint32_t value);
		void Write(int64_t value);
		void Write(uint64_t value);
		void Write(float value);
		void Write(mscorlib::System::String* value);
		void Write7BitEncodedInt(int32_t value);
		static void _cctor();
	};
}

