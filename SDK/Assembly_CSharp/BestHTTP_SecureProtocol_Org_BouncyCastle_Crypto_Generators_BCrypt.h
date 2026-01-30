#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	struct BCrypt : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint32_t>* S;
		IL2CPP::Array<uint32_t>* P;
		struct StaticFields
		{
			IL2CPP::Array<uint32_t>* MAGIC_STRING;
			int32_t MAGIC_STRING_LENGTH;
			IL2CPP::Array<uint32_t>* KP;
			IL2CPP::Array<uint32_t>* KS0;
			IL2CPP::Array<uint32_t>* KS1;
			IL2CPP::Array<uint32_t>* KS2;
			IL2CPP::Array<uint32_t>* KS3;
			int32_t ROUNDS;
			int32_t SBOX_SK;
			int32_t SBOX_SK2;
			int32_t SBOX_SK3;
			int32_t P_SZ;
			int32_t SALT_SIZE_BYTES;
			int32_t MIN_COST;
			int32_t MAX_COST;
			int32_t MAX_PASSWORD_BYTES;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		uint32_t F(uint32_t x);
		void ProcessTable(uint32_t xl, uint32_t xr, IL2CPP::Array<uint32_t>* table);
		void InitState();
		void CyclicXorKey(IL2CPP::Array<uint8_t>* key);
		IL2CPP::Array<uint8_t>* EncryptMagicString();
		void ProcessTableWithSalt(IL2CPP::Array<uint32_t>* table, IL2CPP::Array<uint32_t>* salt32Bit, uint32_t iv1, uint32_t iv2);
		IL2CPP::Array<uint8_t>* DeriveRawKey(int32_t cost, IL2CPP::Array<uint8_t>* salt, IL2CPP::Array<uint8_t>* psw);
		static IL2CPP::Array<uint8_t>* PasswordToByteArray(IL2CPP::Array<wchar_t>* password);
		static IL2CPP::Array<uint8_t>* Generate(IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt, int32_t cost);
		static void _cctor();
	};
}

