#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facebook_Unity::Facebook::Unity::Canvas
{
	struct ICanvasFacebookResultHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnPayComplete(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnFacebookAuthResponseChange(Facebook_Unity::Facebook::Unity::ResultContainer* resultContainer);
		void OnUrlResponse(mscorlib::System::String* message);
		void OnHideUnity(bool hide);
	};
}

