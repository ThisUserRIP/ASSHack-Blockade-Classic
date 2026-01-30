#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System::Runtime::Remoting::Activation { struct IConstructionReturnMessage; };
namespace mscorlib::System::Runtime::Remoting::Activation { struct IConstructionCallMessage; };

namespace mscorlib::System::Runtime::Remoting::Activation
{
	struct IActivator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
		mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
	};
}

