#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_Gameroom_GameroomFacebookGameObject.h"
namespace Facebook_Unity::Facebook::Unity::Gameroom { struct GameroomFacebookGameObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace Facebook_Unity::Facebook::Unity::Gameroom { struct GameroomFacebook_OnComplete; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facebook_Unity::Facebook::Unity::Gameroom
{
	struct GameroomFacebookGameObject__WaitForPipeResponse_d__4 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebookGameObject* __4__this;
		Facebook_Unity::Facebook::Unity::Gameroom::GameroomFacebook_OnComplete* onCompleteDelegate;
		mscorlib::System::String* callbackId;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

