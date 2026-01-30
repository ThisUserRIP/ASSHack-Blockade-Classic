#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Activation { struct IConstructionCallMessage; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct Context; };

namespace mscorlib::System::Runtime::Remoting::Contexts
{
	struct IContextAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
		bool IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context* ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
	};
}

