#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Threading_Tasks_AwaitTaskContinuation.h"
namespace mscorlib::System::Threading::Tasks { struct AwaitTaskContinuation; };
namespace mscorlib::System::Threading { struct WaitCallback; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Threading::Tasks
{
	struct AwaitTaskContinuation___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Threading::Tasks::AwaitTaskContinuation___c* __9;
			mscorlib::System::Threading::WaitCallback* __9__17_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _ThrowAsyncIfNecessary_b__17_0(mscorlib::System::Object* s);
	};
}

