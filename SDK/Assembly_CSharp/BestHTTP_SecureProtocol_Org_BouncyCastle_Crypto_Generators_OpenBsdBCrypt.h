#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	struct OpenBsdBCrypt : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* EncodingTable;
			IL2CPP::Array<uint8_t>* DecodingTable;
			mscorlib::System::String* DefaultVersion;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* AllowedVersions;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		static mscorlib::System::String* CreateBcryptString(mscorlib::System::String* version, IL2CPP::Array<uint8_t>* password, IL2CPP::Array<uint8_t>* salt, int32_t cost);
		static mscorlib::System::String* Generate(IL2CPP::Array<wchar_t>* password, IL2CPP::Array<uint8_t>* salt, int32_t cost);
		static mscorlib::System::String* Generate(mscorlib::System::String* version, IL2CPP::Array<wchar_t>* password, IL2CPP::Array<uint8_t>* salt, int32_t cost);
		static bool CheckPassword(mscorlib::System::String* bcryptString, IL2CPP::Array<wchar_t>* password);
		static mscorlib::System::String* EncodeData(IL2CPP::Array<uint8_t>* data);
		static IL2CPP::Array<uint8_t>* DecodeSaltString(mscorlib::System::String* saltString);
	};
}

