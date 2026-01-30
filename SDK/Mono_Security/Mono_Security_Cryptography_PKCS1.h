#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithm; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Security::Cryptography
{
	struct PKCS1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* emptySHA1;
			IL2CPP::Array<uint8_t>* emptySHA256;
			IL2CPP::Array<uint8_t>* emptySHA384;
			IL2CPP::Array<uint8_t>* emptySHA512;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Security::Cryptography::HashAlgorithm* CreateFromName(mscorlib::System::String* name);
		static void _cctor();
	};
}

