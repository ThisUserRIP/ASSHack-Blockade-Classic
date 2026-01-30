#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct HttpWebRequest; };
namespace System::Mono::Http { struct NtlmSession; };
namespace mscorlib::System::Runtime::CompilerServices { template <typename TKey, typename TValue> struct ConditionalWeakTable_2; };
namespace System::System::Net { struct Authorization; };
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct WebRequest; };
namespace System::System::Net { struct ICredentials; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::Mono::Http
{
	struct NtlmClient : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest, System::Mono::Http::NtlmSession>* cache;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		System::Net::Authorization* Authenticate(mscorlib::System::String* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
		System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
		mscorlib::System::String* get_AuthenticationType();
		void _ctor();
		static void _cctor();
	};
}

