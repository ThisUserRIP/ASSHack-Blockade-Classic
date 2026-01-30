#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_ResultBase.h"
namespace Facebook_Unity::Facebook::Unity { struct AccessToken; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity
{
	struct AccessTokenRefreshResult : Facebook_Unity::Facebook::Unity::ResultBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::AccessToken* _AccessToken_k__BackingField;
		void _ctor(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		Facebook_Unity::Facebook::Unity::AccessToken* get_AccessToken();
		void set_AccessToken(Facebook_Unity::Facebook::Unity::AccessToken* value);
		mscorlib::System::String* ToString();
	};
}

