#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System::System::Net { struct NetworkCredential; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };

namespace System::System::Net
{
	struct ICredentials
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::NetworkCredential* GetCredential(System::Uri* uri, mscorlib::System::String* authType);
	};
}

