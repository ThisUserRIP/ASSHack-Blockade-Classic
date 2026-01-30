#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct ExporterLabel : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* client_finished;
			mscorlib::System::String* server_finished;
			mscorlib::System::String* master_secret;
			mscorlib::System::String* key_expansion;
			mscorlib::System::String* client_EAP_encryption;
			mscorlib::System::String* ttls_keying_material;
			mscorlib::System::String* ttls_challenge;
			mscorlib::System::String* dtls_srtp;
			mscorlib::System::String* extended_master_secret;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
	};
}

