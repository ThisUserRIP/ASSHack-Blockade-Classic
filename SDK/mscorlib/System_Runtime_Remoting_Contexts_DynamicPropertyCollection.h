#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct IDynamicProperty; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Runtime::Remoting::Contexts
{
	struct DynamicPropertyCollection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* _properties;
		bool get_HasProperties();
		bool RegisterDynamicProperty(mscorlib::System::Runtime::Remoting::Contexts::IDynamicProperty* prop);
		bool UnregisterDynamicProperty(mscorlib::System::String* name);
		void NotifyMessage(bool start, mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, bool client_site, bool async);
		int32_t FindProperty(mscorlib::System::String* name);
		void _ctor();
	};
}

