#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::IO { struct Stream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsCompression
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::Stream* Compress(mscorlib::System::IO::Stream* output);
		mscorlib::System::IO::Stream* Decompress(mscorlib::System::IO::Stream* output);
	};
}

