#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Tayx_Graphy_GraphyDebugger.h"
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyDebugger; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Tayx_Graphy_GraphyDebugger_ConditionEvaluation.h"
#include "Tayx_Graphy_GraphyDebugger_DebugCondition.h"
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyDebugger_DebugCondition; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "Tayx_Graphy_GraphyDebugger_MessageType.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityEvent; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Tayx::Graphy
{
	struct GraphyDebugger_DebugPacket : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		int32_t Id;
		bool ExecuteOnce;
		float InitSleepTime;
		float ExecuteSleepTime;
		Assembly_CSharp::Tayx::Graphy::GraphyDebugger_ConditionEvaluation ConditionEvaluation;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Tayx::Graphy::GraphyDebugger_DebugCondition>* DebugConditions;
		Assembly_CSharp::Tayx::Graphy::GraphyDebugger_MessageType MessageType;
		mscorlib::System::String* Message;
		bool TakeScreenshot;
		mscorlib::System::String* ScreenshotFileName;
		bool DebugBreak;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* UnityEvents;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Action>* Callbacks;
		bool canBeChecked;
		bool executed;
		float timePassed;
		bool get_Check();
		void Update();
		void Executed();
		void _ctor();
	};
}

