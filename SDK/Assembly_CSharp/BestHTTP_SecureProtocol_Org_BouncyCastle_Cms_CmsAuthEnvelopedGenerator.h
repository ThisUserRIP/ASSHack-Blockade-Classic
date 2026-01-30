#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsAuthEnvelopedGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* Aes128Ccm;
			mscorlib::System::String* Aes192Ccm;
			mscorlib::System::String* Aes256Ccm;
			mscorlib::System::String* Aes128Gcm;
			mscorlib::System::String* Aes192Gcm;
			mscorlib::System::String* Aes256Gcm;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
	};
}

