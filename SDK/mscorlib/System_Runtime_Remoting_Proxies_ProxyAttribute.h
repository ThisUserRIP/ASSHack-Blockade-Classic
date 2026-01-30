#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
namespace mscorlib::System { struct MarshalByRefObject; };
namespace mscorlib::System::Runtime::Remoting::Proxies { struct RealProxy; };
namespace mscorlib::System::Runtime::Remoting { struct ObjRef; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct Context; };

namespace mscorlib::System::Runtime::Remoting::Proxies
{
	struct ProxyAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::MarshalByRefObject* CreateInstance(mscorlib::System::Type* serverType);
		mscorlib::System::Runtime::Remoting::Proxies::RealProxy* CreateProxy(mscorlib::System::Runtime::Remoting::ObjRef* objRef, mscorlib::System::Type* serverType, mscorlib::System::Object* serverObject, mscorlib::System::Runtime::Remoting::Contexts::Context* serverContext);
	};
}

