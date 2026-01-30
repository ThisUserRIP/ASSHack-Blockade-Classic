#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_HMAC.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct HMACSHA384 : mscorlib::System::Security::Cryptography::HMAC
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool m_useLegacyBlockSize;
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* key);
		int32_t get_BlockSize();
		bool get_ProduceLegacyHmacValues();
		void set_ProduceLegacyHmacValues(bool value);
	};
}

