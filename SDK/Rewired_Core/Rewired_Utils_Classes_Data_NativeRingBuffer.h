#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct NativeBuffer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct NativeRingBuffer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Utils::Classes::Data::NativeBuffer* utHbiKEzcxowMUqMAOHePcoFDWb;
		int32_t kGYIJpmeZMocutLvQTsNJcYZrjv;
		int64_t FpsGnkrOvifcLfOMZmHcHVhvIou;
		int64_t GUkIFHWiNnegRAxNbngnemMYqlFP;
		int32_t EuDOujNPnLvvvnBAFAdDPnIpJcd;
		bool kDGMNILPKQBgukJezflOzWTHzkG;
		uint32_t rxEDgKRFpQNWkhPXePwCRAvBhEx;
		bool MLJGdDbxWcAXHaEUgpKEwtmlTpuj;
		int32_t get_Capacity();
		int32_t get_BytesInBuffer();
		bool get_BufferOverrun();
		int32_t get_ReadPosition();
		int64_t get_WritePosition();
		void _ctor(int32_t capacity);
		intptr_t Allocate(int32_t bufferLength, bool zeroFill, uint32_t& passId);
		int32_t Write(intptr_t buffer, int32_t bufferLength, int32_t numBytesToWrite, int32_t& startOffset, uint32_t& passId);
		int32_t Write(IL2CPP::Array<uint8_t>* buffer, int32_t numBytesToWrite, int32_t& startOffset, uint32_t& passId);
		int32_t Write(intptr_t buffer, int32_t bufferLength, int32_t numBytesToWrite);
		int32_t Write(IL2CPP::Array<uint8_t>* buffer, int32_t numBytesToWrite);
		int32_t Read(intptr_t buffer, int32_t bufferLength, int32_t numBytesToRead);
		int32_t Read(IL2CPP::Array<uint8_t>* buffer, int32_t numBytesToRead);
		int32_t RandomRead(intptr_t buffer, int32_t bufferLength, int32_t numBytesToRead, int32_t readStartIndex);
		int32_t RandomRead(IL2CPP::Array<uint8_t>* buffer, int32_t numBytesToRead, int32_t readStartIndex);
		intptr_t GetPointerFromReadPosition(int32_t offset);
		int32_t GetOffsetFromReadPosition(int32_t offset);
		bool IsValid(int32_t startIndex, uint32_t passId);
		void CopyFrom(Rewired_Core::Rewired::Utils::Classes::Data::NativeRingBuffer* other);
		void Reset();
		void unYXlquargfCBqOAtFklYfSkkas(int32_t A_1);
		void AeUAOXdDOApxzpdnblqFeBfzterl(int32_t A_1);
		void AUOCrVVJxHRdnvTfirOMmMOcGoy();
		void Dispose();
		void Finalize();
		void Dispose(bool disposing);
	};
}

