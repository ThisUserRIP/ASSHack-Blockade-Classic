#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib { struct ZStream; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsDeflateCompression : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* zIn;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib::ZStream* zOut;
		struct StaticFields
		{
			int32_t LEVEL_NONE;
			int32_t LEVEL_FASTEST;
			int32_t LEVEL_SMALLEST;
			int32_t LEVEL_DEFAULT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(int32_t level);
		mscorlib::System::IO::Stream* Compress(mscorlib::System::IO::Stream* output);
		mscorlib::System::IO::Stream* Decompress(mscorlib::System::IO::Stream* output);
	};
}

