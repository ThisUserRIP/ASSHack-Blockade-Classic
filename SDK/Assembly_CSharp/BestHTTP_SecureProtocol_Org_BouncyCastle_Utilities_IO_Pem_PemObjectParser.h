#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem { struct PemObject; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem
{
	struct PemObjectParser
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* ParseObject(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::Pem::PemObject* obj);
	};
}

