#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { struct X9ECParameters; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9
{
	struct X9ECParametersHolder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* parameters;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* get_Parameters();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();
		void _ctor();
	};
}

