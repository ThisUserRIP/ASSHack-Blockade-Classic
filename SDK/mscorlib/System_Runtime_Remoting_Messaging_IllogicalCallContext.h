#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System { struct Object; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct IllogicalCallContext : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Hashtable* m_Datastore;
		mscorlib::System::Object* m_HostContext;
		mscorlib::System::Collections::Hashtable* get_Datastore();
		mscorlib::System::Object* get_HostContext();
		void set_HostContext(mscorlib::System::Object* value);
		bool get_HasUserData();
		mscorlib::System::Runtime::Remoting::Messaging::IllogicalCallContext* CreateCopy();
		void _ctor();
	};
}

