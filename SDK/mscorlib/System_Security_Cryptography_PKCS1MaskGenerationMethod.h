#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_MaskGenerationMethod.h"
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct PKCS1MaskGenerationMethod : mscorlib::System::Security::Cryptography::MaskGenerationMethod
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* HashNameValue;
		void _ctor();
		mscorlib::System::String* get_HashName();
		void set_HashName(mscorlib::System::String* value);
		IL2CPP::Array<uint8_t>* GenerateMask(IL2CPP::Array<uint8_t>* rgbSeed, int32_t cbReturn);
	};
}

