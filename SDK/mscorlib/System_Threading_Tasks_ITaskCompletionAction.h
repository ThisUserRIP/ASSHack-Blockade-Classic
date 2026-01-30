#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Threading::Tasks { struct Task; };

namespace mscorlib::System::Threading::Tasks
{
	struct ITaskCompletionAction
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Invoke(mscorlib::System::Threading::Tasks::Task* completingTask);
	};
}

