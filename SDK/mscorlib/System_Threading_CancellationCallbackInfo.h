#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Threading { struct SynchronizationContext; };
namespace mscorlib::System::Threading { struct ExecutionContext; };
namespace mscorlib::System::Threading { struct CancellationTokenSource; };
namespace mscorlib::System::Threading { struct ContextCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Threading
{
	struct CancellationCallbackInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action_1<mscorlib::System::Object>* Callback;
		mscorlib::System::Object* StateForCallback;
		mscorlib::System::Threading::SynchronizationContext* TargetSyncContext;
		mscorlib::System::Threading::ExecutionContext* TargetExecutionContext;
		mscorlib::System::Threading::CancellationTokenSource* CancellationTokenSource;
		struct StaticFields
		{
			mscorlib::System::Threading::ContextCallback* s_executionContextCallback;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Action_1<mscorlib::System::Object>* callback, mscorlib::System::Object* stateForCallback, mscorlib::System::Threading::SynchronizationContext* targetSyncContext, mscorlib::System::Threading::ExecutionContext* targetExecutionContext, mscorlib::System::Threading::CancellationTokenSource* cancellationTokenSource);
		void ExecuteCallback();
		static void ExecutionContextCallback(mscorlib::System::Object* obj);
	};
}

