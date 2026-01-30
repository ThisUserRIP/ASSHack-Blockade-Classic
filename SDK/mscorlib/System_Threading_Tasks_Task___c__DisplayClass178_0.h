#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Tasks_Task.h"
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "System_Threading_Tasks_TaskCreationOptions.h"
#include "System_Threading_Tasks_InternalTaskOptions.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading::Tasks
{
	struct Task___c__DisplayClass178_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::Task* root;
		bool replicasAreQuitting;
		mscorlib::System::Action_1<mscorlib::System::Object>* taskReplicaDelegate;
		mscorlib::System::Threading::Tasks::TaskCreationOptions creationOptionsForReplicas;
		mscorlib::System::Threading::Tasks::InternalTaskOptions internalOptionsForReplicas;
		void _ctor();
		void _ExecuteSelfReplicating_b__0(mscorlib::System::Object* _p0_);
	};
}

