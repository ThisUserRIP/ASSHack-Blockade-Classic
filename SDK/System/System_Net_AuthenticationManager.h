#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System { struct Object; };
namespace System::System::Net { struct ICredentialPolicy; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net { struct Authorization; };
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct WebRequest; };
namespace System::System::Net { struct ICredentials; };

namespace System::System::Net
{
	struct AuthenticationManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::ArrayList* modules;
			mscorlib::System::Object* locker;
			System::Net::ICredentialPolicy* credential_policy;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void EnsureModules();
		static System::Net::Authorization* Authenticate(mscorlib::System::String* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials);
		static System::Net::Authorization* DoAuthenticate(mscorlib::System::String* challenge, System::Net::WebRequest* request, System::Net::ICredentials* credentials);
		static System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* request, System::Net::ICredentials* credentials);
		static void _cctor();
	};
}

