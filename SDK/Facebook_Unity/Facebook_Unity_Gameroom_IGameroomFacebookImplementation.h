#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };

namespace Facebook_Unity::Facebook::Unity::Gameroom
{
	struct IGameroomFacebookImplementation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool HaveReceivedPipeResponse();
		mscorlib::System::String* GetPipeResponse(mscorlib::System::String* callbackId);
	};
}

