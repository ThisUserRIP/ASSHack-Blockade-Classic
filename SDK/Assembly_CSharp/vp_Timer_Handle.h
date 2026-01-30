#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "vp_Timer.h"
namespace Assembly_CSharp { struct vp_Timer; };
namespace Assembly_CSharp { struct vp_Timer_Event; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct vp_Timer_Handle : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_Timer_Event* m_Event;
		int32_t m_Id;
		int32_t m_StartIterations;
		float m_FirstDueTime;
		bool get_Paused();
		void set_Paused(bool value);
		float get_TimeOfInitiation();
		float get_TimeOfFirstIteration();
		float get_TimeOfNextIteration();
		float get_TimeOfLastIteration();
		float get_Delay();
		float get_Interval();
		float get_TimeUntilNextIteration();
		float get_DurationLeft();
		float get_DurationTotal();
		float get_Duration();
		int32_t get_IterationsTotal();
		int32_t get_IterationsLeft();
		int32_t get_Id();
		void set_Id(int32_t value);
		bool get_Active();
		mscorlib::System::String* get_MethodName();
		mscorlib::System::String* get_MethodInfo();
		bool get_CancelOnLoad();
		void set_CancelOnLoad(bool value);
		void Cancel();
		void Execute();
		void _ctor();
	};
}

