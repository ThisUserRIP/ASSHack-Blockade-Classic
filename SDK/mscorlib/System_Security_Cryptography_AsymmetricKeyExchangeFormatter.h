#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::Cryptography { struct AsymmetricAlgorithm; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace mscorlib::System::Security::Cryptography
{
	struct AsymmetricKeyExchangeFormatter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::String* get_Parameters();
		void SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* key);
		IL2CPP::Array<uint8_t>* CreateKeyExchange(IL2CPP::Array<uint8_t>* data);
		IL2CPP::Array<uint8_t>* CreateKeyExchange(IL2CPP::Array<uint8_t>* data, mscorlib::System::Type* symAlgType);
	};
}

