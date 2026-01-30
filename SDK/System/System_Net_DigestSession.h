#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Security::Cryptography { struct HashAlgorithm; };
namespace System::System::Net { struct DigestHeaderParser; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net { struct HttpWebRequest; };
namespace System::System::Net { struct Authorization; };
namespace System::System::Net { struct WebRequest; };
namespace System::System::Net { struct ICredentials; };

namespace System::System::Net
{
	struct DigestSession : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::DateTime lastUse;
		int32_t _nc;
		mscorlib::System::Security::Cryptography::HashAlgorithm* hash;
		System::Net::DigestHeaderParser* parser;
		mscorlib::System::String* _cnonce;
		struct StaticFields
		{
			mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::String* get_Algorithm();
		mscorlib::System::String* get_Realm();
		mscorlib::System::String* get_Nonce();
		mscorlib::System::String* get_Opaque();
		mscorlib::System::String* get_QOP();
		mscorlib::System::String* get_CNonce();
		bool Parse(mscorlib::System::String* challenge);
		mscorlib::System::String* HashToHexString(mscorlib::System::String* toBeHashed);
		mscorlib::System::String* HA1(mscorlib::System::String* username, mscorlib::System::String* password);
		mscorlib::System::String* HA2(System::Net::HttpWebRequest* webRequest);
		mscorlib::System::String* Response(mscorlib::System::String* username, mscorlib::System::String* password, System::Net::HttpWebRequest* webRequest);
		System::Net::Authorization* Authenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
		mscorlib::System::DateTime get_LastUse();
	};
}

