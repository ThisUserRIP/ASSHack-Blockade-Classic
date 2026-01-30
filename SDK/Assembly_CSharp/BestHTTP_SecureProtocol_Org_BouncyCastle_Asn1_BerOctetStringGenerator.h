#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_BerGenerator.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	struct BerOctetStringGenerator : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::BerGenerator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::IO::Stream* outStream);
		void _ctor(mscorlib::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);
		mscorlib::System::IO::Stream* GetOctetOutputStream();
		mscorlib::System::IO::Stream* GetOctetOutputStream(int32_t bufSize);
		mscorlib::System::IO::Stream* GetOctetOutputStream(IL2CPP::Array<uint8_t>* buf);
	};
}

