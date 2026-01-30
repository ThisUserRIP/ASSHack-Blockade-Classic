#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Runtime::Remoting::Proxies { struct RealProxy; };
#include "Mono_RuntimeRemoteClassHandle.h"
namespace mscorlib::Mono { struct RuntimeRemoteClassHandle; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct Context; };
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Remoting::Proxies
{
	struct TransparentProxy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Runtime::Remoting::Proxies::RealProxy* _rp;
		mscorlib::Mono::RuntimeRemoteClassHandle _class;
		bool _custom_type_info;
		mscorlib::System::RuntimeType* GetProxyType();
		bool get_IsContextBoundObject();
		mscorlib::System::Runtime::Remoting::Contexts::Context* get_TargetContext();
		bool InCurrentContext();
		mscorlib::System::Object* LoadRemoteFieldNew(intptr_t classPtr, intptr_t fieldPtr);
		void StoreRemoteField(intptr_t classPtr, intptr_t fieldPtr, mscorlib::System::Object* arg);
		void _ctor();
	};
}

