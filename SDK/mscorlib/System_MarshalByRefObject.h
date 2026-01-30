#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting { struct ServerIdentity; };
namespace mscorlib::System::Runtime::Remoting { struct ObjRef; };

namespace mscorlib::System
{
	struct MarshalByRefObject : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* _identity;
		void _ctor();
		mscorlib::System::Runtime::Remoting::ServerIdentity* get_ObjectIdentity();
		void set_ObjectIdentity(mscorlib::System::Runtime::Remoting::ServerIdentity* value);
		mscorlib::System::Runtime::Remoting::ObjRef* CreateObjRef(mscorlib::System::Type* requestedType);
		mscorlib::System::Object* InitializeLifetimeService();
	};
}

