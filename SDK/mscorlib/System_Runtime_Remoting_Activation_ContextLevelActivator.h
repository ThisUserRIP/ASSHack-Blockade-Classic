#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Remoting::Activation { struct IActivator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Activation { struct IConstructionReturnMessage; };
namespace mscorlib::System::Runtime::Remoting::Activation { struct IConstructionCallMessage; };

namespace mscorlib::System::Runtime::Remoting::Activation
{
	struct ContextLevelActivator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Activation::IActivator* m_NextActivator;
		void _ctor(mscorlib::System::Runtime::Remoting::Activation::IActivator* next);
		mscorlib::System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
		mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
	};
}

