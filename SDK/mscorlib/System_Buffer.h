#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Array; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "System_Byte.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace mscorlib::System
{
	struct Buffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool InternalBlockCopy(mscorlib::System::Array* src, int32_t srcOffsetBytes, mscorlib::System::Array* dst, int32_t dstOffsetBytes, int32_t byteCount);
		static int32_t IndexOfByte(uint8_t* src, uint8_t value, int32_t index, int32_t count);
		static int32_t _ByteLength(mscorlib::System::Array* array);
		static void ZeroMemory_(uint8_t* src, int64_t len);
		static void Memcpy(IL2CPP::Array<uint8_t>* dest, int32_t destIndex, uint8_t* src, int32_t srcIndex, int32_t len);
		static void Memcpy(uint8_t* pDest, int32_t destIndex, IL2CPP::Array<uint8_t>* src, int32_t srcIndex, int32_t len);
		static int32_t ByteLength(mscorlib::System::Array* array);
		static void BlockCopy(mscorlib::System::Array* src, int32_t srcOffset, mscorlib::System::Array* dst, int32_t dstOffset, int32_t count);
		static void memcpy4(uint8_t* dest, uint8_t* src, int32_t size);
		static void memcpy2(uint8_t* dest, uint8_t* src, int32_t size);
		static void memcpy1(uint8_t* dest, uint8_t* src, int32_t size);
		static void Memcpy(uint8_t* dest, uint8_t* src, int32_t size);
	};
}

