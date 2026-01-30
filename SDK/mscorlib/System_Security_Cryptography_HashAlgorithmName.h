#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct HashAlgorithmName
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _name;
		static mscorlib::System::Security::Cryptography::HashAlgorithmName get_MD5();
		static mscorlib::System::Security::Cryptography::HashAlgorithmName get_SHA1();
		static mscorlib::System::Security::Cryptography::HashAlgorithmName get_SHA256();
		static mscorlib::System::Security::Cryptography::HashAlgorithmName get_SHA384();
		static mscorlib::System::Security::Cryptography::HashAlgorithmName get_SHA512();
		void _ctor(mscorlib::System::String* name);
		mscorlib::System::String* get_Name();
		mscorlib::System::String* ToString();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::Security::Cryptography::HashAlgorithmName other);
		int32_t GetHashCode();
		static bool op_Equality(mscorlib::System::Security::Cryptography::HashAlgorithmName left, mscorlib::System::Security::Cryptography::HashAlgorithmName right);
		static bool op_Inequality(mscorlib::System::Security::Cryptography::HashAlgorithmName left, mscorlib::System::Security::Cryptography::HashAlgorithmName right);
	};
	bool operator==(mscorlib::System::Security::Cryptography::HashAlgorithmName& left, mscorlib::System::Security::Cryptography::HashAlgorithmName& right);
	bool operator!=(mscorlib::System::Security::Cryptography::HashAlgorithmName& left, mscorlib::System::Security::Cryptography::HashAlgorithmName& right);
}

