#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_Editor_Dialogs_MockLoginDialog.h"
namespace Facebook_Unity::Facebook::Unity::Editor::Dialogs { struct MockLoginDialog; };
namespace mscorlib::System { struct String; };
namespace Facebook_Unity::Facebook::Unity::Editor::Dialogs { struct MockLoginDialog___c__DisplayClass4_0; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };

namespace Facebook_Unity::Facebook::Unity::Editor::Dialogs
{
	struct MockLoginDialog___c__DisplayClass4_1 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* facebookID;
		Facebook_Unity::Facebook::Unity::Editor::Dialogs::MockLoginDialog___c__DisplayClass4_0* CS___8__locals1;
		void _ctor();
		void _SendSuccessResult_b__1(Facebook_Unity::Facebook::Unity::IGraphResult* permResult);
	};
}

