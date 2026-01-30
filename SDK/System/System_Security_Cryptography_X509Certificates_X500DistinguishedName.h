#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Security_Cryptography_AsnEncodedData.h"

namespace System::System::Security::Cryptography::X509Certificates
{
	struct X500DistinguishedName : System::Security::Cryptography::AsnEncodedData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
	};
}

