#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct IDynamicMessageSink; };

namespace mscorlib::System::Runtime::Remoting::Contexts
{
	struct IContributeDynamicSink
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Contexts::IDynamicMessageSink* GetDynamicSink();
	};
}

