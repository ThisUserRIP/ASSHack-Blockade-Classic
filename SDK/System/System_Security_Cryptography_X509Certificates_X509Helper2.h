#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::Cryptography::X509Certificates { struct X509CertificateImpl; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509Certificate2Impl; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Security_Cryptography_X509Certificates_X509KeyStorageFlags.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Security::Cryptography::X509Certificates { struct X509ChainImpl; };
namespace mscorlib::System { struct Exception; };

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X509Helper2 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Initialize();
		static void ThrowIfContextInvalid(mscorlib::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
		static System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(IL2CPP::Array<uint8_t>* rawData, mscorlib::System::String* password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, bool disableProvider);
		static System::Security::Cryptography::X509Certificates::X509ChainImpl* CreateChainImpl(bool useMachineContext);
		static bool IsValid(System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);
		static void ThrowIfContextInvalid(System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);
		static mscorlib::System::Exception* GetInvalidChainContextException();
	};
}

