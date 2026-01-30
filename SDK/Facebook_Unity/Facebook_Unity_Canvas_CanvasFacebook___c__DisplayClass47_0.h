#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facebook_Unity_Canvas_CanvasFacebook.h"
namespace Facebook_Unity::Facebook::Unity::Canvas { struct CanvasFacebook; };
namespace Facebook_Unity::Facebook::Unity { struct ResultContainer; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct Utilities_Callback_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };

namespace Facebook_Unity::Facebook::Unity::Canvas
{
	struct CanvasFacebook___c__DisplayClass47_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facebook_Unity::Facebook::Unity::ResultContainer* result;
		Facebook_Unity::Facebook::Unity::Utilities_Callback_1<Facebook_Unity::Facebook::Unity::ResultContainer>* callback;
		void _ctor();
		void _FormatAuthResponse_b__0(Facebook_Unity::Facebook::Unity::IGraphResult* r);
	};
}

