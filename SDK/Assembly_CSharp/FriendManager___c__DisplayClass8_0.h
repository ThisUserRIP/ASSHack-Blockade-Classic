#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "FriendManager.h"
namespace Assembly_CSharp { struct FriendManager; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct VKFriedImage; };

namespace Assembly_CSharp
{
	struct FriendManager___c__DisplayClass8_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t id;
		void _ctor();
		bool _GetImageFromCacheOrDownload_b__0(Assembly_CSharp::VKFriedImage* i);
	};
}

