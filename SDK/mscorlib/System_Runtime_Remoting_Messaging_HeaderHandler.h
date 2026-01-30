#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_MulticastDelegate.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct Header; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct HeaderHandler : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		mscorlib::System::Object* Invoke(IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* headers);
		mscorlib::System::IAsyncResult* BeginInvoke(IL2CPP::Array<mscorlib::System::Runtime::Remoting::Messaging::Header*>* headers, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		mscorlib::System::Object* EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

