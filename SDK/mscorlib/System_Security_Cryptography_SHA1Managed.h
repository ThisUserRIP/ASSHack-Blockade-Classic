#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_SHA1.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct SHA1Managed : mscorlib::System::Security::Cryptography::SHA1
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* _buffer;
		int64_t _count;
		IL2CPP::Array<uint32_t>* _stateSHA1;
		IL2CPP::Array<uint32_t>* _expandedBuffer;
		void _ctor();
		void Initialize();
		void HashCore(IL2CPP::Array<uint8_t>* rgb, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* HashFinal();
		void InitializeState();
		void _HashData(IL2CPP::Array<uint8_t>* partIn, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* _EndHash();
		static void SHATransform(uint32_t* expandedBuffer, uint32_t* state, uint8_t* block);
		static void SHAExpand(uint32_t* x);
	};
}

