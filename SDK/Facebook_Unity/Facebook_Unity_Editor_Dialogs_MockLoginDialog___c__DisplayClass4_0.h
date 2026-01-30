#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_Editor_Dialogs_MockLoginDialog.h"
namespace Facebook_Unity::Facebook::Unity::Editor::Dialogs { struct MockLoginDialog; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };

namespace Facebook_Unity::Facebook::Unity::Editor::Dialogs
{
	struct MockLoginDialog___c__DisplayClass4_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::Editor::Dialogs::MockLoginDialog* __4__this;
		mscorlib::System::String* graphDomain;
		void _ctor();
		void _SendSuccessResult_b__0(Facebook_Unity::Facebook::Unity::IGraphResult* graphResult);
	};
}

