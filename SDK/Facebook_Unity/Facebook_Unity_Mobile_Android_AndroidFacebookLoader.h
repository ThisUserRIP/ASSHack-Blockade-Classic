#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_FB_CompiledFacebookLoader.h"
namespace Facebook_Unity::Facebook::Unity { struct FacebookGameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity::Facebook::Unity::Mobile::Android
{
	struct AndroidFacebookLoader : Facebook_Unity::Facebook::Unity::FB_CompiledFacebookLoader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::FacebookGameObject* get_FBGameObject();
		void _ctor();
	};
}

