#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Security::Cryptography
{
	struct SHA1Internal : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint32_t>* _H;
		uint64_t count;
		IL2CPP::Array<uint8_t>* _ProcessingBuffer;
		int32_t _ProcessingBufferCount;
		IL2CPP::Array<uint32_t>* buff;
		struct StaticFields
		{
			int32_t BLOCK_SIZE_BYTES;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void HashCore(IL2CPP::Array<uint8_t>* rgb, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* HashFinal();
		void Initialize();
		void ProcessBlock(IL2CPP::Array<uint8_t>* inputBuffer, uint32_t inputOffset);
		static void InitialiseBuff(IL2CPP::Array<uint32_t>* buff, IL2CPP::Array<uint8_t>* input, uint32_t inputOffset);
		static void FillBuff(IL2CPP::Array<uint32_t>* buff);
		void ProcessFinalBlock(IL2CPP::Array<uint8_t>* inputBuffer, int32_t inputOffset, int32_t inputCount);
		void AddLength(uint64_t length, IL2CPP::Array<uint8_t>* buffer, int32_t position);
	};
}

