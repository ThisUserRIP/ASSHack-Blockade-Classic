#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_FPWeaponReloader.h"
namespace Assembly_CSharp { struct vp_Timer_Handle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_PistolReloader : Assembly_CSharp::vp_FPWeaponReloader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_Timer_Handle* m_Timer;
		void OnStart_Reload();
		void _ctor();
		void _OnStart_Reload_b__1_0();
		void _OnStart_Reload_b__1_1();
		void _OnStart_Reload_b__1_2();
		void _OnStart_Reload_b__1_3();
	};
}

