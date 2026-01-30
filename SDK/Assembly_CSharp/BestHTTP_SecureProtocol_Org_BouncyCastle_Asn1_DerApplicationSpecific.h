#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1EncodableVector; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerOutputStream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	struct DerApplicationSpecific : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isConstructed;
		int32_t tag;
		IL2CPP::Array<uint8_t>* octets;
		void _ctor(bool isConstructed, int32_t tag, IL2CPP::Array<uint8_t>* octets);
		void _ctor(int32_t tag, IL2CPP::Array<uint8_t>* octets);
		void _ctor(int32_t tag, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj);
		void _ctor(bool isExplicit, int32_t tag, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj);
		void _ctor(int32_t tagNo, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* vec);
		int32_t GetLengthOfHeader(IL2CPP::Array<uint8_t>* data);
		bool IsConstructed();
		IL2CPP::Array<uint8_t>* GetContents();
		int32_t get_ApplicationTag();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetObject();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetObject(int32_t derTagNo);
		void Encode(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerOutputStream* derOut);
		bool Asn1Equals(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
		int32_t Asn1GetHashCode();
		IL2CPP::Array<uint8_t>* ReplaceTagNumber(int32_t newTag, IL2CPP::Array<uint8_t>* input);
	};
}

