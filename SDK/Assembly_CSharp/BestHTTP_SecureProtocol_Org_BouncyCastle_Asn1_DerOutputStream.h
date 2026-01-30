#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Utilities_IO_FilterStream.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	struct DerOutputStream : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IO::FilterStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::IO::Stream* os);
		void WriteLength(int32_t length);
		void WriteEncoded(int32_t tag, IL2CPP::Array<uint8_t>* bytes);
		void WriteEncoded(int32_t tag, uint8_t first, IL2CPP::Array<uint8_t>* bytes);
		void WriteEncoded(int32_t tag, IL2CPP::Array<uint8_t>* bytes, int32_t offset, int32_t length);
		void WriteTag(int32_t flags, int32_t tagNo);
		void WriteEncoded(int32_t flags, int32_t tagNo, IL2CPP::Array<uint8_t>* bytes);
		void WriteNull();
		void WriteObject(mscorlib::System::Object* obj);
		void WriteObject(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj);
		void WriteObject(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* obj);
	};
}

