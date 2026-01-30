#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Signers
{
	struct IsoTrailers : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t TRAILER_IMPLICIT;
			int32_t TRAILER_RIPEMD160;
			int32_t TRAILER_RIPEMD128;
			int32_t TRAILER_SHA1;
			int32_t TRAILER_SHA256;
			int32_t TRAILER_SHA512;
			int32_t TRAILER_SHA384;
			int32_t TRAILER_WHIRLPOOL;
			int32_t TRAILER_SHA224;
			int32_t TRAILER_SHA512_224;
			int32_t TRAILER_SHA512_256;
			mscorlib::System::Collections::IDictionary* trailerMap;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Collections::IDictionary* CreateTrailerMap();
		static int32_t GetTrailer(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest);
		static bool NoTrailerAvailable(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest);
		void _ctor();
		static void _cctor();
	};
}

