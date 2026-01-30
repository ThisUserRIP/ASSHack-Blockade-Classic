#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeRingBuffer; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace Rewired_Core::Rewired::Utils::Classes::Utility
{
	struct DualRingReportBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t crhHvOziWOQOluXkMgziMfRSIZh;
		int32_t kQwxcrXTWQFlBMtsgsHiERHCwsg;
		int32_t bRSvxwPCBhhWAwqdPzNMbkqeWWW;
		Rewired_Core::Rewired::Utils::Classes::Data::NativeRingBuffer* jTJMvDJHCuLaDAlzETJfIiuhpzw;
		Rewired_Core::Rewired::Utils::Classes::Data::NativeRingBuffer* GfeyKPTfJtCmdJyyxbowCpjFphTE;
		IL2CPP::Array<uint8_t>* MzvqFGnnvHwnJsyGhHiZBTARfjG;
		IL2CPP::Array<uint8_t>* TdEZcEtxBBMKvJnfhUieGABJvvo;
		int32_t oqXeKSkndvvxvkKcDfXzLUeIkdBB;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		int32_t get_BufferLength();
		int32_t get_BytesInBuffer();
		int32_t get_EntriesInBuffer();
		IL2CPP::Array<uint8_t>* get_ReadBuffer();
		int32_t get_LastNumBytesRead();
		void _ctor(int32_t entryByteLength, int32_t entryCapacity);
		int32_t StartRead();
		int32_t Read();
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t numBytesToRead);
		int32_t Read(intptr_t buffer, int32_t bufferLength, int32_t numBytesToRead);
		int32_t Write(IL2CPP::Array<uint8_t>* buffer, int32_t numBytesToWrite);
		int32_t Write(intptr_t buffer, int32_t bufferLength, int32_t numBytesToWrite);
		void Clear();
		void ftxfepicArhLnsyOXWEtEtXLcNky();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
	};
}

