#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_Identity.h"
namespace mscorlib::System { struct WeakReference; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Runtime::Remoting { struct ObjRef; };
namespace mscorlib::System { struct MarshalByRefObject; };

namespace mscorlib::System::Runtime::Remoting
{
	struct ClientIdentity : mscorlib::System::Runtime::Remoting::Identity
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::WeakReference* _proxyReference;
		void _ctor(mscorlib::System::String* objectUri, mscorlib::System::Runtime::Remoting::ObjRef* objRef);
		mscorlib::System::MarshalByRefObject* get_ClientProxy();
		void set_ClientProxy(mscorlib::System::MarshalByRefObject* value);
		mscorlib::System::Runtime::Remoting::ObjRef* CreateObjRef(mscorlib::System::Type* requestedType);
		mscorlib::System::String* get_TargetUri();
	};
}

