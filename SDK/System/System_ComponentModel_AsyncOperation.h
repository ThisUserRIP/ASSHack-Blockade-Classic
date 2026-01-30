#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Threading { struct SynchronizationContext; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading { struct SendOrPostCallback; };

namespace System::System::ComponentModel
{
	struct AsyncOperation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::SynchronizationContext* syncContext;
		mscorlib::System::Object* userSuppliedState;
		bool alreadyCompleted;
		void _ctor(mscorlib::System::Object* userSuppliedState, mscorlib::System::Threading::SynchronizationContext* syncContext);
		void Finalize();
		mscorlib::System::Object* get_UserSuppliedState();
		mscorlib::System::Threading::SynchronizationContext* get_SynchronizationContext();
		void Post(mscorlib::System::Threading::SendOrPostCallback* d, mscorlib::System::Object* arg);
		void PostOperationCompleted(mscorlib::System::Threading::SendOrPostCallback* d, mscorlib::System::Object* arg);
		void OperationCompleted();
		void OperationCompletedCore();
		void VerifyNotCompleted();
		void VerifyDelegateNotNull(mscorlib::System::Threading::SendOrPostCallback* d);
		static System::ComponentModel::AsyncOperation* CreateOperation(mscorlib::System::Object* userSuppliedState, mscorlib::System::Threading::SynchronizationContext* syncContext);
		void _ctor();
	};
}

