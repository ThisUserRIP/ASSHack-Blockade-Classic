#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters
{
	struct SkeinParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IDictionary* parameters;
		struct StaticFields
		{
			int32_t PARAM_TYPE_KEY;
			int32_t PARAM_TYPE_CONFIG;
			int32_t PARAM_TYPE_PERSONALISATION;
			int32_t PARAM_TYPE_PUBLIC_KEY;
			int32_t PARAM_TYPE_KEY_IDENTIFIER;
			int32_t PARAM_TYPE_NONCE;
			int32_t PARAM_TYPE_MESSAGE;
			int32_t PARAM_TYPE_OUTPUT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(mscorlib::System::Collections::IDictionary* parameters);
		mscorlib::System::Collections::IDictionary* GetParameters();
		IL2CPP::Array<uint8_t>* GetKey();
		IL2CPP::Array<uint8_t>* GetPersonalisation();
		IL2CPP::Array<uint8_t>* GetPublicKey();
		IL2CPP::Array<uint8_t>* GetKeyIdentifier();
		IL2CPP::Array<uint8_t>* GetNonce();
	};
}

