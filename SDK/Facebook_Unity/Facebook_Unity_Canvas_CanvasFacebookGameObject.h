#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_FacebookGameObject.h"
namespace Facebook_Unity::Facebook::Unity::Canvas { struct ICanvasFacebookImplementation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facebook_Unity::Facebook::Unity::Canvas
{
	struct CanvasFacebookGameObject : Facebook_Unity::Facebook::Unity::FacebookGameObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::Canvas::ICanvasFacebookImplementation* get_CanvasFacebookImpl();
		void OnPayComplete(mscorlib::System::String* result);
		void OnFacebookAuthResponseChange(mscorlib::System::String* message);
		void OnUrlResponse(mscorlib::System::String* message);
		void OnHideUnity(bool hide);
		void OnAwake();
		void _ctor();
	};
}

