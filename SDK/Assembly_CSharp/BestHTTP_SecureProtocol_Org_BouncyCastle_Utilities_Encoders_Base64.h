#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct Stream; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	struct Base64 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static mscorlib::System::String* ToBase64String(IL2CPP::Array<uint8_t>* data);
		static mscorlib::System::String* ToBase64String(IL2CPP::Array<uint8_t>* data, int32_t off, int32_t length);
		static IL2CPP::Array<uint8_t>* Encode(IL2CPP::Array<uint8_t>* data);
		static IL2CPP::Array<uint8_t>* Encode(IL2CPP::Array<uint8_t>* data, int32_t off, int32_t length);
		static int32_t Encode(IL2CPP::Array<uint8_t>* data, mscorlib::System::IO::Stream* outStream);
		static int32_t Encode(IL2CPP::Array<uint8_t>* data, int32_t off, int32_t length, mscorlib::System::IO::Stream* outStream);
		static IL2CPP::Array<uint8_t>* Decode(IL2CPP::Array<uint8_t>* data);
		static IL2CPP::Array<uint8_t>* Decode(mscorlib::System::String* data);
		static int32_t Decode(mscorlib::System::String* data, mscorlib::System::IO::Stream* outStream);
	};
}

