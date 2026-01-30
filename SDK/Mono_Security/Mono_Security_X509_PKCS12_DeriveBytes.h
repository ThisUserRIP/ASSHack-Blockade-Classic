#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Security_X509_PKCS12.h"
namespace Mono_Security::Mono::Security::X509 { struct PKCS12; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Security::X509
{
	struct PKCS12_DeriveBytes : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _hashName;
		int32_t _iterations;
		IL2CPP::Array<uint8_t>* _password;
		IL2CPP::Array<uint8_t>* _salt;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* keyDiversifier;
			IL2CPP::Array<uint8_t>* ivDiversifier;
			IL2CPP::Array<uint8_t>* macDiversifier;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void set_HashName(mscorlib::System::String* value);
		void set_IterationCount(int32_t value);
		void set_Password(IL2CPP::Array<uint8_t>* value);
		void set_Salt(IL2CPP::Array<uint8_t>* value);
		void Adjust(IL2CPP::Array<uint8_t>* a, int32_t aOff, IL2CPP::Array<uint8_t>* b);
		IL2CPP::Array<uint8_t>* Derive(IL2CPP::Array<uint8_t>* diversifier, int32_t n);
		IL2CPP::Array<uint8_t>* DeriveKey(int32_t size);
		IL2CPP::Array<uint8_t>* DeriveIV(int32_t size);
		IL2CPP::Array<uint8_t>* DeriveMAC(int32_t size);
		static void _cctor();
	};
}

