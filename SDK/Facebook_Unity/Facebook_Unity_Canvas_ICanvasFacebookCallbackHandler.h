#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facebook_Unity::Facebook::Unity::Canvas
{
	struct ICanvasFacebookCallbackHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnPayComplete(mscorlib::System::String* message);
		void OnFacebookAuthResponseChange(mscorlib::System::String* message);
		void OnUrlResponse(mscorlib::System::String* message);
		void OnHideUnity(bool hide);
	};
}

