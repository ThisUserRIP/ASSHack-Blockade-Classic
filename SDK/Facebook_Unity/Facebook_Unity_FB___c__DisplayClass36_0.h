#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_FB.h"
namespace Facebook_Unity::Facebook::Unity { struct FB; };
namespace Facebook_Unity::Facebook::Unity { struct InitDelegate; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facebook_Unity::Facebook::Unity { struct HideUnityDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FB___c__DisplayClass36_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete;
		mscorlib::System::String* appId;
		bool cookie;
		bool logging;
		bool status;
		bool xfbml;
		mscorlib::System::String* authResponse;
		bool frictionlessRequests;
		mscorlib::System::String* javascriptSDKLocale;
		Facebook_Unity::Facebook::Unity::HideUnityDelegate* onHideUnity;
		void _ctor();
		void _Init_b__0();
		void _Init_b__1();
		void _Init_b__2();
		void _Init_b__3();
		void _Init_b__4();
	};
}

