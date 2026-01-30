#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders { struct ITranslator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	struct BufferedDecoder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* buffer;
		int32_t bufOff;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders::ITranslator* translator, int32_t bufferSize);
		int32_t ProcessByte(uint8_t input, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t ProcessBytes(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
	};
}

