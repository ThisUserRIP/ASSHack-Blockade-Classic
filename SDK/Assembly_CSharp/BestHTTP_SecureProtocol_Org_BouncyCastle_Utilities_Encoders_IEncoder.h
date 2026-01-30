#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	struct IEncoder
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Encode(IL2CPP::Array<uint8_t>* data, int32_t off, int32_t length, mscorlib::System::IO::Stream* outStream);
		int32_t Decode(IL2CPP::Array<uint8_t>* data, int32_t off, int32_t length, mscorlib::System::IO::Stream* outStream);
		int32_t DecodeString(mscorlib::System::String* data, mscorlib::System::IO::Stream* outStream);
	};
}

