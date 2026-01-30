#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Security_Cryptography_PKCS8.h"
namespace mscorlib::Mono::Security::Cryptography { struct PKCS8; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Security::Cryptography
{
	struct PKCS8_EncryptedPrivateKeyInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _algorithm;
		IL2CPP::Array<uint8_t>* _salt;
		int32_t _iterations;
		IL2CPP::Array<uint8_t>* _data;
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* data);
		mscorlib::System::String* get_Algorithm();
		IL2CPP::Array<uint8_t>* get_EncryptedData();
		IL2CPP::Array<uint8_t>* get_Salt();
		int32_t get_IterationCount();
		void Decode(IL2CPP::Array<uint8_t>* data);
	};
}

