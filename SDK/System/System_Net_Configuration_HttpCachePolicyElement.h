#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "System_Net_Cache_HttpRequestCacheLevel.h"
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
namespace System_Xml::System::Xml { struct XmlReader; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Configuration::System::Configuration { struct ConfigurationElement; };

namespace System::System::Net::Configuration
{
	struct HttpCachePolicyElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::TimeSpan get_MaximumAge();
		void set_MaximumAge(mscorlib::System::TimeSpan value);
		mscorlib::System::TimeSpan get_MaximumStale();
		void set_MaximumStale(mscorlib::System::TimeSpan value);
		mscorlib::System::TimeSpan get_MinimumFresh();
		void set_MinimumFresh(mscorlib::System::TimeSpan value);
		System::Net::Cache::HttpRequestCacheLevel get_PolicyLevel();
		void set_PolicyLevel(System::Net::Cache::HttpRequestCacheLevel value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		void DeserializeElement(System_Xml::System::Xml::XmlReader* reader, bool serializeCollectionKey);
		void Reset(System_Configuration::System::Configuration::ConfigurationElement* parentElement);
	};
}

