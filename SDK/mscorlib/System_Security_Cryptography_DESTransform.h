#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Security_Cryptography_SymmetricTransform.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography { struct SymmetricAlgorithm; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Cryptography
{
	struct DESTransform : mscorlib::Mono::Security::Cryptography::SymmetricTransform
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* keySchedule;
		IL2CPP::Array<uint8_t>* byteBuff;
		IL2CPP::Array<uint32_t>* dwordBuff;
		struct StaticFields
		{
			int32_t KEY_BIT_SIZE;
			int32_t KEY_BYTE_SIZE;
			int32_t BLOCK_BIT_SIZE;
			int32_t BLOCK_BYTE_SIZE;
			IL2CPP::Array<uint32_t>* spBoxes;
			IL2CPP::Array<uint8_t>* PC1;
			IL2CPP::Array<uint8_t>* leftRotTotal;
			IL2CPP::Array<uint8_t>* PC2;
			IL2CPP::Array<uint32_t>* ipTab;
			IL2CPP::Array<uint32_t>* fpTab;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* iv);
		uint32_t CipherFunct(uint32_t r, int32_t n);
		static void Permutation(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output, IL2CPP::Array<uint32_t>* permTab, bool preSwap);
		static void BSwap(IL2CPP::Array<uint8_t>* byteBuff);
		void SetKey(IL2CPP::Array<uint8_t>* key);
		void ProcessBlock(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		void ECB(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		static IL2CPP::Array<uint8_t>* GetStrongKey();
		static void _cctor();
	};
}

