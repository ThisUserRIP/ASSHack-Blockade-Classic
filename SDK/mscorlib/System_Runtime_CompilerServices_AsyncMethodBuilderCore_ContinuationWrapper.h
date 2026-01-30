#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_CompilerServices_AsyncMethodBuilderCore.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncMethodBuilderCore; };
namespace mscorlib::System { struct Action; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct AsyncMethodBuilderCore_ContinuationWrapper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action* m_continuation;
		mscorlib::System::Action* m_invokeAction;
		mscorlib::System::Threading::Tasks::Task* m_innerTask;
		void _ctor(mscorlib::System::Action* continuation, mscorlib::System::Action* invokeAction, mscorlib::System::Threading::Tasks::Task* innerTask);
		void Invoke();
	};
}

