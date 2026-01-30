#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct MarshalByRefObject; };
namespace mscorlib::System::Runtime::Remoting::Proxies { struct RealProxy; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageCtrl; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct StackBuilderSink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::MarshalByRefObject* _target;
		mscorlib::System::Runtime::Remoting::Proxies::RealProxy* _rp;
		void _ctor(mscorlib::System::MarshalByRefObject* obj, bool forceInternalExecute);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
		void ExecuteAsyncMessage(mscorlib::System::Object* ob);
		void CheckParameters(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		void _AsyncProcessMessage_b__4_0(mscorlib::System::Object* data);
	};
}

