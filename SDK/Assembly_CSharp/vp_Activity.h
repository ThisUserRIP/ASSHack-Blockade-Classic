#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_Event.h"
namespace Assembly_CSharp { struct vp_Activity_Callback; };
namespace Assembly_CSharp { struct vp_Activity_Condition; };
namespace Assembly_CSharp { struct vp_Timer_Handle; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct vp_Activity : Assembly_CSharp::vp_Event
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_Activity_Callback* StartCallbacks;
		Assembly_CSharp::vp_Activity_Callback* StopCallbacks;
		Assembly_CSharp::vp_Activity_Condition* StartConditions;
		Assembly_CSharp::vp_Activity_Condition* StopConditions;
		Assembly_CSharp::vp_Activity_Callback* FailStartCallbacks;
		Assembly_CSharp::vp_Activity_Callback* FailStopCallbacks;
		Assembly_CSharp::vp_Timer_Handle* m_ForceStopTimer;
		mscorlib::System::Object* m_Argument;
		bool m_Active;
		float NextAllowedStartTime;
		float NextAllowedStopTime;
		float m_MinPause;
		float m_MinDuration;
		float m_MaxDuration;
		static void Empty();
		static bool AlwaysOK();
		void _ctor(mscorlib::System::String* name);
		float get_MinPause();
		void set_MinPause(float value);
		float get_MinDuration();
		void set_MinDuration(float value);
		float get_AutoDuration();
		void set_AutoDuration(float value);
		mscorlib::System::Object* get_Argument();
		void set_Argument(mscorlib::System::Object* value);
		void InitFields();
		void Register(mscorlib::System::Object* t, mscorlib::System::String* m, int32_t v);
		void Unregister(mscorlib::System::Object* t);
		bool TryStart(bool startIfAllowed);
		bool TryStop(bool stopIfAllowed);
		void set_Active(bool value);
		bool get_Active();
		void Start(float forcedActiveDuration);
		void Stop(float forcedPauseDuration);
		void Disallow(float duration);
		void _set_Active_b__37_0();
	};
}

