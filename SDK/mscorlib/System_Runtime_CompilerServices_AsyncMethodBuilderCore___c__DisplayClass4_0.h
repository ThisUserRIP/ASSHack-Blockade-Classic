#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Runtime_CompilerServices_AsyncMethodBuilderCore.h"
namespace mscorlib::System::Runtime::CompilerServices { struct AsyncMethodBuilderCore; };
namespace mscorlib::System::Threading::Tasks { struct Task; };
namespace mscorlib::System { struct Action; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct AsyncMethodBuilderCore___c__DisplayClass4_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Threading::Tasks::Task* innerTask;
		mscorlib::System::Action* continuation;
		void _ctor();
		void _OutputAsyncCausalityEvents_b__0();
	};
}

