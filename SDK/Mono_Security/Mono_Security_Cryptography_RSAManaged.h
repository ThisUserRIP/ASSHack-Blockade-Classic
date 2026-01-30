#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Security_Cryptography_RSA.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Mono_Security::Mono::Math { struct BigInteger; };
namespace Mono_Security::Mono::Security::Cryptography { struct RSAManaged_KeyGeneratedEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Security_Cryptography_RSAParameters.h"
namespace mscorlib::System::Security::Cryptography { struct RSAParameters; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Mono_Security::Mono::Security::Cryptography
{
	struct RSAManaged : mscorlib::System::Security::Cryptography::RSA
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isCRTpossible;
		bool keypairGenerated;
		bool m_disposed;
		Mono_Security::Mono::Math::BigInteger* d;
		Mono_Security::Mono::Math::BigInteger* p;
		Mono_Security::Mono::Math::BigInteger* q;
		Mono_Security::Mono::Math::BigInteger* dp;
		Mono_Security::Mono::Math::BigInteger* dq;
		Mono_Security::Mono::Math::BigInteger* qInv;
		Mono_Security::Mono::Math::BigInteger* n;
		Mono_Security::Mono::Math::BigInteger* e;
		Mono_Security::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* KeyGenerated;
		void GenerateKeyPair();
		bool get_PublicOnly();
		mscorlib::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);
		void ImportParameters(mscorlib::System::Security::Cryptography::RSAParameters parameters);
		IL2CPP::Array<uint8_t>* GetPaddedValue(Mono_Security::Mono::Math::BigInteger* value, int32_t length);
	};
}

