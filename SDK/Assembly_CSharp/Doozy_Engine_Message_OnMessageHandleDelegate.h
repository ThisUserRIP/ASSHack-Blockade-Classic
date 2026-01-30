#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "Doozy_Engine_Message.h"
namespace Assembly_CSharp::Doozy::Engine { struct Message; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Assembly_CSharp::Doozy::Engine
{
	struct Message_OnMessageHandleDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(mscorlib::System::Type* callerType, mscorlib::System::Type* handlerType, mscorlib::System::Type* messageType, mscorlib::System::String* messageName, mscorlib::System::String* handlerMethodName);
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::System::Type* callerType, mscorlib::System::Type* handlerType, mscorlib::System::Type* messageType, mscorlib::System::String* messageName, mscorlib::System::String* handlerMethodName, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

