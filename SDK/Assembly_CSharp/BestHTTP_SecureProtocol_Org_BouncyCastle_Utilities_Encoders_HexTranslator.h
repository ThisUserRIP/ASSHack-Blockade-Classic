#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	struct HexTranslator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* hexTable;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		int32_t GetEncodedBlockSize();
		int32_t Encode(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t GetDecodedBlockSize();
		int32_t Decode(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		void _ctor();
		static void _cctor();
	};
}

