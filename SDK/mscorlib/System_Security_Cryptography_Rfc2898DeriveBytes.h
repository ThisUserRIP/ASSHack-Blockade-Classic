#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_DeriveBytes.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Security::Cryptography { struct HMACSHA1; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Security::Cryptography
{
	struct Rfc2898DeriveBytes : mscorlib::System::Security::Cryptography::DeriveBytes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* m_buffer;
		IL2CPP::Array<uint8_t>* m_salt;
		mscorlib::System::Security::Cryptography::HMACSHA1* m_hmacsha1;
		IL2CPP::Array<uint8_t>* m_password;
		uint32_t m_iterations;
		uint32_t m_block;
		int32_t m_startIndex;
		int32_t m_endIndex;
		struct StaticFields
		{
			int32_t BlockSize;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* password, int32_t saltSize);
		void _ctor(mscorlib::System::String* password, int32_t saltSize, int32_t iterations);
		void _ctor(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* salt);
		void _ctor(mscorlib::System::String* password, IL2CPP::Array<uint8_t>* salt, int32_t iterations);
		void _ctor(IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt, int32_t iterations);
		int32_t get_IterationCount();
		void set_IterationCount(int32_t value);
		IL2CPP::Array<uint8_t>* get_Salt();
		void set_Salt(IL2CPP::Array<uint8_t>* value);
		IL2CPP::Array<uint8_t>* GetBytes(int32_t cb);
		void Reset();
		void Dispose(bool disposing);
		void Initialize();
		IL2CPP::Array<uint8_t>* Func();
		IL2CPP::Array<uint8_t>* CryptDeriveKey(mscorlib::System::String* algname, mscorlib::System::String* alghashname, int32_t keySize, IL2CPP::Array<uint8_t>* rgbIV);
	};
}

