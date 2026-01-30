#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };

namespace Facebook_Unity::Facebook::Unity
{
	struct IFacebookResultHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnInitComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnLoginComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnLogoutComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnGetAppLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnAppRequestsComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnShareLinkComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
	};
}

