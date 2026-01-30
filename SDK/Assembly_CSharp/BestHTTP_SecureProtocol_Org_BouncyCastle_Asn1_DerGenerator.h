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
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	struct DerGenerator : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Generator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _tagged;
		bool _isExplicit;
		int32_t _tagNo;
		void _ctor(mscorlib::System::IO::Stream* outStream);
		void _ctor(mscorlib::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);
		static void WriteLength(mscorlib::System::IO::Stream* outStr, int32_t length);
		static void WriteDerEncoded(mscorlib::System::IO::Stream* outStream, int32_t tag, IL2CPP::Array<uint8_t>* bytes);
		void WriteDerEncoded(int32_t tag, IL2CPP::Array<uint8_t>* bytes);
		static void WriteDerEncoded(mscorlib::System::IO::Stream* outStr, int32_t tag, mscorlib::System::IO::Stream* inStr);
	};
}

