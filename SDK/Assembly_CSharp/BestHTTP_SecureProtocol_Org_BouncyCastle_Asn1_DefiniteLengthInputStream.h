#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_LimitedInputStream.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1
{
	struct DefiniteLengthInputStream : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::LimitedInputStream
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _originalLength;
		int32_t _remaining;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* EmptyBytes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::IO::Stream* inStream, int32_t length);
		int32_t get_Remaining();
		int32_t ReadByte();
		int32_t Read(IL2CPP::Array<uint8_t>* buf, int32_t off, int32_t len);
		void ReadAllIntoByteArray(IL2CPP::Array<uint8_t>* buf);
		IL2CPP::Array<uint8_t>* ToArray();
		static void _cctor();
	};
}

