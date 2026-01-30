#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ContextBoundObject.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct CrossContextDelegate; };

namespace mscorlib::System::Runtime::Remoting::Contexts
{
	struct ContextCallbackObject : mscorlib::System::ContextBoundObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void DoCallBack(mscorlib::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg);
		void _ctor();
	};
}

