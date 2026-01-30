#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };

namespace mscorlib::System::Runtime::CompilerServices
{
	struct ICriticalNotifyCompletion
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void UnsafeOnCompleted(mscorlib::System::Action* continuation);
	};
}

