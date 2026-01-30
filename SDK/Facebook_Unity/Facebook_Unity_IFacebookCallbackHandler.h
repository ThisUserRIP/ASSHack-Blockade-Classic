#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity
{
	struct IFacebookCallbackHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnInitComplete(mscorlib::System::String* message);
		void OnLoginComplete(mscorlib::System::String* message);
		void OnAppRequestsComplete(mscorlib::System::String* message);
		void OnShareLinkComplete(mscorlib::System::String* message);
	};
}

