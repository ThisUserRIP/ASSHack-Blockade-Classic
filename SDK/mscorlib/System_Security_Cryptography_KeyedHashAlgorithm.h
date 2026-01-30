#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_HashAlgorithm.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace mscorlib::System::Security::Cryptography
{
	struct KeyedHashAlgorithm : mscorlib::System::Security::Cryptography::HashAlgorithm
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* KeyValue;
		void _ctor();
		void Dispose(bool disposing);
		IL2CPP::Array<uint8_t>* get_Key();
		void set_Key(IL2CPP::Array<uint8_t>* value);
		static mscorlib::System::Security::Cryptography::KeyedHashAlgorithm* Create();
		static mscorlib::System::Security::Cryptography::KeyedHashAlgorithm* Create(mscorlib::System::String* algName);
	};
}

