#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "vp_Timer.h"
namespace Assembly_CSharp { struct vp_Timer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct vp_Timer_Callback; };
namespace Assembly_CSharp { struct vp_Timer_ArgCallback; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct vp_Timer_Event : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Id;
		Assembly_CSharp::vp_Timer_Callback* Function;
		Assembly_CSharp::vp_Timer_ArgCallback* ArgFunction;
		mscorlib::System::Object* Arguments;
		int32_t Iterations;
		float Interval;
		float DueTime;
		float StartTime;
		float LifeTime;
		bool Paused;
		bool CancelOnLoad;
		void Execute();
		void Recycle();
		void Destroy();
		void Error(mscorlib::System::String* message);
		mscorlib::System::String* get_MethodName();
		mscorlib::System::String* get_MethodInfo();
		void _ctor();
	};
}

