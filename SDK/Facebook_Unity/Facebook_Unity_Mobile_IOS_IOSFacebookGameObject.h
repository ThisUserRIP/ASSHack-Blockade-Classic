#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Mobile_MobileFacebookGameObject.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity::Facebook::Unity::Mobile::IOS
{
	struct IOSFacebookGameObject : Facebook_Unity::Facebook::Unity::Mobile::MobileFacebookGameObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

