#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "Facebook_Unity_FB.h"
namespace Facebook_Unity::Facebook::Unity { struct FB; };
namespace Facebook_Unity::Facebook::Unity { struct FacebookGameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FB_CompiledFacebookLoader : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::FacebookGameObject* get_FBGameObject();
		void Start();
		void _ctor();
	};
}

