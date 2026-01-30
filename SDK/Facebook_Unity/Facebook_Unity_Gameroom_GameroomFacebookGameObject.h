#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_FacebookGameObject.h"
namespace Facebook_Unity::Facebook::Unity::Gameroom { struct IGameroomFacebookImplementation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity::Gameroom { struct GameroomFacebook_OnComplete; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Facebook_Unity::Facebook::Unity::Gameroom
{
	struct GameroomFacebookGameObject : Facebook_Unity::Facebook::Unity::FacebookGameObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::Gameroom::IGameroomFacebookImplementation* get_GameroomFacebookImpl();
		void WaitForResponse(Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* onCompleteDelegate, mscorlib::System::String* callbackId);
		void OnAwake();
		mscorlib::System::Collections::IEnumerator* WaitForPipeResponse(Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* onCompleteDelegate, mscorlib::System::String* callbackId);
		void _ctor();
	};
}

