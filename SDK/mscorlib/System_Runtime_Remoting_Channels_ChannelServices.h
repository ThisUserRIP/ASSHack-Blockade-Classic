#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Runtime::Remoting::Contexts { struct CrossContextChannel; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessageSink; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Runtime::Remoting::Channels { struct IChannelSender; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Channels { struct IChannel; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Runtime::Remoting { struct ChannelData; };
namespace mscorlib::System::Runtime::Remoting { struct ProviderData; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMessage; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct ReturnMessage; };

namespace mscorlib::System::Runtime::Remoting::Channels
{
	struct ChannelServices : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::ArrayList* registeredChannels;
			mscorlib::System::Collections::ArrayList* delayedClientChannels;
			mscorlib::System::Runtime::Remoting::Contexts::CrossContextChannel* _crossContextSink;
			mscorlib::System::String* CrossContextUrl;
			mscorlib::System::Collections::IList* oldStartModeTypes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Runtime::Remoting::Contexts::CrossContextChannel* get_CrossContextChannel();
		static mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(mscorlib::System::String* url, mscorlib::System::Object* remoteChannelData, mscorlib::System::String& objectUri);
		static mscorlib::System::Runtime::Remoting::Messaging::IMessageSink* CreateClientChannelSinkChain(mscorlib::System::Runtime::Remoting::Channels::IChannelSender* sender, mscorlib::System::String* url, IL2CPP::Array<mscorlib::System::Object*>* channelDataArray, mscorlib::System::String& objectUri);
		static void RegisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel* chnl);
		static void RegisterChannel(mscorlib::System::Runtime::Remoting::Channels::IChannel* chnl, bool ensureSecurity);
		static void RegisterChannelConfig(mscorlib::System::Runtime::Remoting::ChannelData* channel);
		static mscorlib::System::Object* CreateProvider(mscorlib::System::Runtime::Remoting::ProviderData* prov);
		static mscorlib::System::Runtime::Remoting::Messaging::IMessage* SyncDispatchMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		static mscorlib::System::Runtime::Remoting::Messaging::ReturnMessage* CheckIncomingMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* msg);
		static mscorlib::System::Runtime::Remoting::Messaging::IMessage* CheckReturnMessage(mscorlib::System::Runtime::Remoting::Messaging::IMessage* callMsg, mscorlib::System::Runtime::Remoting::Messaging::IMessage* retMsg);
		static bool IsLocalCall(mscorlib::System::Runtime::Remoting::Messaging::IMessage* callMsg);
		static IL2CPP::Array<mscorlib::System::Object*>* GetCurrentChannelInfo();
		static void _cctor();
	};
}

