#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Runtime_Remoting_Channels_CrossAppDomainSink_ProcessMessageRes.h"
namespace mscorlib::System::Runtime::Remoting::Channels { struct CrossAppDomainSink_ProcessMessageRes; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct CADMethodCallMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageCtrl; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Runtime::Remoting::Channels
{
	struct CrossAppDomainSink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _domainID;
		struct StaticFields
		{
			mscorlib::System::Collections::Hashtable* s_sinks;
			mscorlib::System::Reflection::MethodInfo* processMessageMethod;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t domainID);
		static mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink* GetSink(int32_t domainID);
		int32_t get_TargetDomainId();
		static mscorlib::System::Runtime::Remoting::Channels::CrossAppDomainSink_ProcessMessageRes ProcessMessageInDomain(IL2CPP::Array<uint8_t>* arrRequest, mscorlib::System::Runtime::Remoting::Messaging::CADMethodCallMessage* cadMsg);
		mscorlib::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msgRequest);
		mscorlib::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* reqMsg, mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
		void SendAsyncMessage(mscorlib::System::Object* data);
		static void _cctor();
		void _AsyncProcessMessage_b__10_0(mscorlib::System::Object* data);
	};
}

