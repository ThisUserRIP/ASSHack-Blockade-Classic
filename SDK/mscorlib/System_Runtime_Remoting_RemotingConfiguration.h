#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct Hashtable; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting { struct ActivatedClientTypeEntry; };
namespace mscorlib::System::Runtime::Remoting { struct WellKnownClientTypeEntry; };
namespace mscorlib::System::Runtime::Remoting { struct ActivatedServiceTypeEntry; };
namespace mscorlib::System::Runtime::Remoting { struct WellKnownServiceTypeEntry; };
namespace mscorlib::System::Runtime::Remoting { struct ChannelData; };
namespace mscorlib::System::Runtime::Remoting { struct ProviderData; };
namespace mscorlib::System::Collections { struct ArrayList; };

namespace mscorlib::System::Runtime::Remoting
{
	struct RemotingConfiguration : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* applicationID;
			mscorlib::System::String* applicationName;
			mscorlib::System::String* processGuid;
			bool defaultConfigRead;
			bool defaultDelayedConfigRead;
			mscorlib::System::String* _errorMode;
			mscorlib::System::Collections::Hashtable* wellKnownClientEntries;
			mscorlib::System::Collections::Hashtable* activatedClientEntries;
			mscorlib::System::Collections::Hashtable* wellKnownServiceEntries;
			mscorlib::System::Collections::Hashtable* activatedServiceEntries;
			mscorlib::System::Collections::Hashtable* channelTemplates;
			mscorlib::System::Collections::Hashtable* clientProviderTemplates;
			mscorlib::System::Collections::Hashtable* serverProviderTemplates;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ApplicationName();
		static void set_ApplicationName(mscorlib::System::String* value);
		static mscorlib::System::String* get_ProcessId();
		static void LoadDefaultDelayedChannels();
		static mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry* IsRemotelyActivatedClientType(mscorlib::System::Type* svrType);
		static mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry* IsWellKnownClientType(mscorlib::System::Type* svrType);
		static void RegisterActivatedClientType(mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry* entry);
		static void RegisterActivatedServiceType(mscorlib::System::Runtime::Remoting::ActivatedServiceTypeEntry* entry);
		static void RegisterWellKnownClientType(mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry* entry);
		static void RegisterWellKnownServiceType(mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry* entry);
		static void RegisterChannelTemplate(mscorlib::System::Runtime::Remoting::ChannelData* channel);
		static void RegisterClientProviderTemplate(mscorlib::System::Runtime::Remoting::ProviderData* prov);
		static void RegisterServerProviderTemplate(mscorlib::System::Runtime::Remoting::ProviderData* prov);
		static void RegisterChannels(mscorlib::System::Collections::ArrayList* channels, bool onlyDelayed);
		static void RegisterTypes(mscorlib::System::Collections::ArrayList* types);
		static bool CustomErrorsEnabled(bool isLocalRequest);
		static void SetCustomErrorsMode(mscorlib::System::String* mode);
		static void _cctor();
	};
}

