#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting::Activation { struct IActivator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IList; };

namespace mscorlib::System::Runtime::Remoting::Activation
{
	struct IConstructionCallMessage
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* get_ActivationType();
		mscorlib::System::String* get_ActivationTypeName();
		mscorlib::System::Runtime::Remoting::Activation::IActivator* get_Activator();
		void set_Activator(mscorlib::System::Runtime::Remoting::Activation::IActivator* value);
		IL2CPP::Array<mscorlib::System::Object*>* get_CallSiteActivationAttributes();
		mscorlib::System::Collections::IList* get_ContextProperties();
	};
}

