#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Handler.h"
namespace Assembly_CSharp { struct Handler; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct Handler_GetUserInfoParams; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Handler_GetUserInfoResult : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* result;
		Assembly_CSharp::Handler_GetUserInfoParams* parameters;
		void _ctor();
	};
}

