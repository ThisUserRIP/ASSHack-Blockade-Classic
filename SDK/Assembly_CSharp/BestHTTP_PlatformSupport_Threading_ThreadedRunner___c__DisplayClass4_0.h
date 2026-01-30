#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_PlatformSupport_Threading_ThreadedRunner.h"
namespace Assembly_CSharp::BestHTTP::PlatformSupport::Threading { struct ThreadedRunner; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::PlatformSupport::Threading
{
	struct ThreadedRunner___c__DisplayClass4_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action* job;
		void _ctor();
		void _RunLongLiving_b__0(mscorlib::System::Object* param);
	};
}

