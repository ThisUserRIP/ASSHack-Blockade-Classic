#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_Pickup.h"
namespace Assembly_CSharp { struct vp_Timer_Handle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };

namespace Assembly_CSharp
{
	struct vp_ExampleSpeedPickup : Assembly_CSharp::vp_Pickup
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_Timer_Handle* m_Timer;
		void Update();
		bool TryGive(Assembly_CSharp::vp_FPPlayerEventHandler* player);
		void _ctor();
	};
}

