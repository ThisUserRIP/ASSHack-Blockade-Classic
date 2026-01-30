#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct Utilities_Callback_1; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity::Editor
{
	struct IEditorWrapper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Init();
		void ShowLoginMockDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* callbackId, mscorlib::System::String* permissions);
		void ShowAppRequestMockDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* callbackId);
		void ShowPayMockDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* callbackId);
		void ShowMockShareDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* subTitle, mscorlib::System::String* callbackId);
		void ShowMockFriendFinderDialog(Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback, mscorlib::System::String* subTitle, mscorlib::System::String* callbackId);
	};
}

