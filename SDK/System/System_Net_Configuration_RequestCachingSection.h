#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationSection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net::Configuration { struct FtpCachePolicyElement; };
namespace System::System::Net::Configuration { struct HttpCachePolicyElement; };
#include "System_Net_Cache_RequestCacheLevel.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace System_Xml::System::Xml { struct XmlReader; };

namespace System::System::Net::Configuration
{
	struct RequestCachingSection : System_Configuration::System::Configuration::ConfigurationSection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Net::Configuration::FtpCachePolicyElement* get_DefaultFtpCachePolicy();
		System::Net::Configuration::HttpCachePolicyElement* get_DefaultHttpCachePolicy();
		System::Net::Cache::RequestCacheLevel get_DefaultPolicyLevel();
		void set_DefaultPolicyLevel(System::Net::Cache::RequestCacheLevel value);
		bool get_DisableAllCaching();
		void set_DisableAllCaching(bool value);
		bool get_IsPrivateCache();
		void set_IsPrivateCache(bool value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		mscorlib::System::TimeSpan get_UnspecifiedMaximumAge();
		void set_UnspecifiedMaximumAge(mscorlib::System::TimeSpan value);
		void DeserializeElement(System_Xml::System::Xml::XmlReader* reader, bool serializeCollectionKey);
		void PostDeserialize();
	};
}

