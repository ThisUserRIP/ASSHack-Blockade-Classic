#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Generator.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	struct BerGenerator : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Generator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _tagged;
		bool _isExplicit;
		int32_t _tagNo;
		void _ctor(mscorlib::System::IO::Stream* outStream);
		void _ctor(mscorlib::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);
		void AddObject(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj);
		mscorlib::System::IO::Stream* GetRawOutputStream();
		void Close();
		void WriteHdr(int32_t tag);
		void WriteBerHeader(int32_t tag);
		void WriteBerBody(mscorlib::System::IO::Stream* contentStream);
		void WriteBerEnd();
	};
}

