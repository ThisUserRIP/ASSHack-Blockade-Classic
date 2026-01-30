#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_KeyedHashAlgorithm.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithm; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { template <typename TResult> struct Func_1; };

namespace mscorlib::System::Security::Cryptography
{
	struct HMAC : mscorlib::System::Security::Cryptography::KeyedHashAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t blockSizeValue;
		mscorlib::System::String* m_hashName;
		mscorlib::System::Security::Cryptography::HashAlgorithm* m_hash1;
		mscorlib::System::Security::Cryptography::HashAlgorithm* m_hash2;
		IL2CPP::Array<uint8_t>* m_inner;
		IL2CPP::Array<uint8_t>* m_outer;
		bool m_hashing;
		int32_t get_BlockSizeValue();
		void set_BlockSizeValue(int32_t value);
		void UpdateIOPadBuffers();
		void InitializeKey(IL2CPP::Array<uint8_t>* key);
		IL2CPP::Array<uint8_t>* get_Key();
		void set_Key(IL2CPP::Array<uint8_t>* value);
		mscorlib::System::String* get_HashName();
		void set_HashName(mscorlib::System::String* value);
		static mscorlib::System::Security::Cryptography::HMAC* Create();
		static mscorlib::System::Security::Cryptography::HMAC* Create(mscorlib::System::String* algorithmName);
		void Initialize();
		void HashCore(IL2CPP::Array<uint8_t>* rgb, int32_t ib, int32_t cb);
		IL2CPP::Array<uint8_t>* HashFinal();
		void Dispose(bool disposing);
		static mscorlib::System::Security::Cryptography::HashAlgorithm* GetHashAlgorithmWithFipsFallback(mscorlib::System::Func_1<mscorlib::System::Security::Cryptography::HashAlgorithm>* createStandardHashAlgorithmCallback, mscorlib::System::Func_1<mscorlib::System::Security::Cryptography::HashAlgorithm>* createFipsHashAlgorithmCallback);
		void _ctor();
	};
}

