#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Message.h"
namespace Assembly_CSharp::Doozy::Engine { struct Message; };
namespace mscorlib::System { struct Delegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine
{
	struct Message___c__DisplayClass15_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Delegate* callback;
		void _ctor();
		bool _UnregisterListener_b__0(mscorlib::System::Delegate* x);
	};
}

