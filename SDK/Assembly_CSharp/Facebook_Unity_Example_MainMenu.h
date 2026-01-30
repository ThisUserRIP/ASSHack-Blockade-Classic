#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Example_MenuBase.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Facebook::Unity::Example
{
	struct MainMenu : Assembly_CSharp::Facebook::Unity::Example::MenuBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool ShowBackButton();
		void GetGui();
		void CallFBLogin();
		void CallFBLoginForPublish();
		void CallFBLogout();
		void OnInitComplete();
		void OnHideUnity(bool isGameShown);
		void _ctor();
	};
}

