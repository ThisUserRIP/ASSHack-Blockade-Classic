#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading { struct Thread; };
namespace mscorlib::System::Threading { struct AutoResetEvent; };
namespace mscorlib::System { struct Action; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Threading { struct ManualResetEvent; };
#include "..\mscorlib\System_Collections_Generic_KeyValuePair_2.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct KeyValuePair_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningThreadState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Thread* lightningThread;
		mscorlib::System::Threading::AutoResetEvent* lightningThreadEvent;
		System::System::Collections::Generic::Queue_1<mscorlib::System::Action>* actionsForBackgroundThread;
		System::System::Collections::Generic::Queue_1<mscorlib::System::Collections::Generic::KeyValuePair_2<mscorlib::System::Action_1<mscorlib::System::Boolean>, mscorlib::System::Threading::ManualResetEvent>>* actionsForMainThread;
		bool Running;
		bool isTerminating;
		bool UpdateMainThreadActionsOnce(bool inDestroy);
		void BackgroundThreadMethod();
		void _ctor();
		void TerminateAndWaitForEnd(bool inDestroy);
		void UpdateMainThreadActions();
		bool AddActionForMainThread(mscorlib::System::Action_1<mscorlib::System::Boolean>* action, bool waitForAction);
		bool AddActionForBackgroundThread(mscorlib::System::Action* action);
	};
}

