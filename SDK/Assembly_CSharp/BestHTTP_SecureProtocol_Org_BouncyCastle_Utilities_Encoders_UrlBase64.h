#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders { struct IEncoder; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	struct UrlBase64 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders::IEncoder* encoder;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<uint8_t>* Encode(IL2CPP::Array<uint8_t>* data);
		static int32_t Encode(IL2CPP::Array<uint8_t>* data, mscorlib::System::IO::Stream* outStr);
		static IL2CPP::Array<uint8_t>* Decode(IL2CPP::Array<uint8_t>* data);
		static int32_t Decode(IL2CPP::Array<uint8_t>* data, mscorlib::System::IO::Stream* outStr);
		static IL2CPP::Array<uint8_t>* Decode(mscorlib::System::String* data);
		static int32_t Decode(mscorlib::System::String* data, mscorlib::System::IO::Stream* outStr);
		void _ctor();
		static void _cctor();
	};
}

