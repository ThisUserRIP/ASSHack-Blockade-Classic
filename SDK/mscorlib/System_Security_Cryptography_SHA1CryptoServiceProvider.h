#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_SHA1.h"
namespace mscorlib::System::Security::Cryptography { struct SHA1Internal; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct SHA1CryptoServiceProvider : mscorlib::System::Security::Cryptography::SHA1
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::SHA1Internal* sha;
		void _ctor();
		void Finalize();
		void Dispose(bool disposing);
		void HashCore(IL2CPP::Array<uint8_t>* rgb, int32_t ibStart, int32_t cbSize);
		IL2CPP::Array<uint8_t>* HashFinal();
		void Initialize();
	};
}

