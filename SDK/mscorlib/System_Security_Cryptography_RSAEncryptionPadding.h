#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Security_Cryptography_RSAEncryptionPaddingMode.h"
#include "System_Security_Cryptography_HashAlgorithmName.h"
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithmName; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Cryptography
{
	struct RSAEncryptionPadding : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::RSAEncryptionPaddingMode _mode;
		mscorlib::System::Security::Cryptography::HashAlgorithmName _oaepHashAlgorithm;
		struct StaticFields
		{
			mscorlib::System::Security::Cryptography::RSAEncryptionPadding* s_pkcs1;
			mscorlib::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA1;
			mscorlib::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA256;
			mscorlib::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA384;
			mscorlib::System::Security::Cryptography::RSAEncryptionPadding* s_oaepSHA512;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Security::Cryptography::RSAEncryptionPadding* get_Pkcs1();
		static mscorlib::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA1();
		static mscorlib::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA256();
		static mscorlib::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA384();
		static mscorlib::System::Security::Cryptography::RSAEncryptionPadding* get_OaepSHA512();
		void _ctor(mscorlib::System::Security::Cryptography::RSAEncryptionPaddingMode mode, mscorlib::System::Security::Cryptography::HashAlgorithmName oaepHashAlgorithm);
		static mscorlib::System::Security::Cryptography::RSAEncryptionPadding* CreateOaep(mscorlib::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
		mscorlib::System::Security::Cryptography::RSAEncryptionPaddingMode get_Mode();
		mscorlib::System::Security::Cryptography::HashAlgorithmName get_OaepHashAlgorithm();
		int32_t GetHashCode();
		static int32_t CombineHashCodes(int32_t h1, int32_t h2);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::Security::Cryptography::RSAEncryptionPadding* other);
		static bool op_Equality(mscorlib::System::Security::Cryptography::RSAEncryptionPadding* left, mscorlib::System::Security::Cryptography::RSAEncryptionPadding* right);
		static bool op_Inequality(mscorlib::System::Security::Cryptography::RSAEncryptionPadding* left, mscorlib::System::Security::Cryptography::RSAEncryptionPadding* right);
		mscorlib::System::String* ToString();
		static void _cctor();
		void _ctor();
	};
	bool operator==(mscorlib::System::Security::Cryptography::RSAEncryptionPadding& left, mscorlib::System::Security::Cryptography::RSAEncryptionPadding& right);
	bool operator!=(mscorlib::System::Security::Cryptography::RSAEncryptionPadding& left, mscorlib::System::Security::Cryptography::RSAEncryptionPadding& right);
}

