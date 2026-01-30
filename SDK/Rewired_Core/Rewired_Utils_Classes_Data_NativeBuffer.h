#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct NativeBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t XdUBqIsUIJHAQKWpWJXeiAUXoAyL;
		int32_t tihdDjmQlyzlswgGUvGudqdAyvM;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		intptr_t get_Pointer();
		int32_t get_Length();
		uint8_t get_Item(int32_t index);
		void set_Item(int32_t index, uint8_t value);
		void _ctor(int32_t size);
		intptr_t GetPointer(int32_t offset);
		mscorlib::System::String* DumpToHexString();
		bool ReadBit(int32_t byteIndex, uint8_t bit);
		uint8_t ReadByte(int32_t startIndex);
		int16_t ReadShort(int32_t startIndex);
		uint16_t ReadUShort(int32_t startIndex);
		int32_t ReadInt(int32_t startIndex);
		uint32_t ReadUInt(int32_t startIndex);
		int64_t ReadLong(int32_t startIndex);
		uint64_t ReadULong(int32_t startIndex);
		float ReadFloat(int32_t startIndex);
		double ReadDouble(int32_t startIndex);
		void Read(IL2CPP::Array<uint8_t>* buffer, int32_t numBytesToRead, int32_t readStartIndex, int32_t writeStartIndex);
		void Read(intptr_t buffer, int32_t bufferLength, int32_t numBytesToRead, int32_t readStartIndex, int32_t writeStartIndex);
		int32_t TryReadBytes(IL2CPP::Array<uint8_t>* buffer, int32_t numBytesToRead, int32_t readStartIndex, int32_t writeStartIndex);
		int32_t TryReadBytes(intptr_t buffer, int32_t bufferLength, int32_t numBytesToRead, int32_t readStartIndex, int32_t writeStartIndex);
		void WriteBit(int32_t byteIndex, uint8_t bit, bool value);
		void Write(uint8_t byte, int32_t startIndex);
		void Write(int16_t bytes, int32_t startIndex);
		void Write(uint16_t bytes, int32_t startIndex);
		void Write(int32_t bytes, int32_t startIndex);
		void Write(uint32_t bytes, int32_t startIndex);
		void Write(int64_t bytes, int32_t startIndex);
		void Write(uint64_t bytes, int32_t startIndex);
		void Write(float bytes, int32_t startIndex);
		void Write(double bytes, int32_t startIndex);
		void Write(IL2CPP::Array<uint8_t>* bytes, int32_t numBytesToWrite, int32_t writeStartIndex, int32_t readStartIndex);
		void Write(intptr_t bytes, int32_t bufferLength, int32_t numBytesToWrite, int32_t writeStartIndex, int32_t readStartIndex);
		int32_t TryWriteBytes(IL2CPP::Array<uint8_t>* bytes, int32_t numBytesToWrite, int32_t writeStartIndex, int32_t readStartIndex);
		int32_t TryWriteBytes(intptr_t bytes, int32_t bufferLength, int32_t numBytesToWrite, int32_t writeStartIndex, int32_t readStartIndex);
		int32_t TryFill(uint8_t value, int32_t numBytesToWrite, int32_t writeStartIndex);
		bool Resize(int32_t size, bool preserveData);
		void Clear();
		void Release();
		void CopyFrom(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* other);
		mscorlib::System::String* ToString();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
		static intptr_t op_Implicit(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* buffer);
		static bool Copy(Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* source, Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* destination);
	};
}

