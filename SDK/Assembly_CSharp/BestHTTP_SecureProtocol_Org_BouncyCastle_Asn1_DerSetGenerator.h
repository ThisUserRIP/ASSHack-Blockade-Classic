#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_DerGenerator.h"
namespace mscorlib::System::IO { struct MemoryStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	struct DerSetGenerator : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGenerator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::IO::MemoryStream* _bOut;
		void _ctor(mscorlib::System::IO::Stream* outStream);
		void _ctor(mscorlib::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);
		void AddObject(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj);
		mscorlib::System::IO::Stream* GetRawOutputStream();
		void Close();
	};
}

