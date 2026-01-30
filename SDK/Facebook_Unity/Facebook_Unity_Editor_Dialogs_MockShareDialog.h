#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_Editor_EditorFacebookMockDialog.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity::Facebook::Unity::Editor::Dialogs
{
	struct MockShareDialog : Facebook_Unity::Facebook::Unity::Editor::EditorFacebookMockDialog
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _SubTitle_k__BackingField;
		mscorlib::System::String* get_SubTitle();
		void set_SubTitle(mscorlib::System::String* value);
		mscorlib::System::String* get_DialogTitle();
		void DoGui();
		void SendSuccessResult();
		void SendCancelResult();
		mscorlib::System::String* GenerateFakePostID();
		void _ctor();
	};
}

