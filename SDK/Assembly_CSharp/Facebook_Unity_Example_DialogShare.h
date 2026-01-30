#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Example_MenuBase.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Facebook::Unity::Example
{
	struct DialogShare : Assembly_CSharp::Facebook::Unity::Example::MenuBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* shareLink;
		mscorlib::System::String* shareTitle;
		mscorlib::System::String* shareDescription;
		mscorlib::System::String* shareImage;
		mscorlib::System::String* feedTo;
		mscorlib::System::String* feedLink;
		mscorlib::System::String* feedTitle;
		mscorlib::System::String* feedCaption;
		mscorlib::System::String* feedDescription;
		mscorlib::System::String* feedImage;
		mscorlib::System::String* feedMediaSource;
		bool ShowDialogModeSelector();
		void GetGui();
		void _ctor();
	};
}

