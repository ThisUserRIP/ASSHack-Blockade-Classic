#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Text::RegularExpressions { struct Regex; };
namespace mscorlib::System { struct String; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UnityWebRequestModule::UnityEngineInternal
{
	struct WebRequestUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			System::System::Text::RegularExpressions::Regex* domainRegex;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* RedirectTo(mscorlib::System::String* baseUri, mscorlib::System::String* redirectUri);
		static mscorlib::System::String* MakeInitialUrl(mscorlib::System::String* targetUrl, mscorlib::System::String* localUrl);
		static mscorlib::System::String* MakeUriString(System::System::Uri* targetUri, mscorlib::System::String* targetUrl, bool prependProtocol);
		static mscorlib::System::String* URLDecode(mscorlib::System::String* encoded);
		static void _cctor();
	};
}

