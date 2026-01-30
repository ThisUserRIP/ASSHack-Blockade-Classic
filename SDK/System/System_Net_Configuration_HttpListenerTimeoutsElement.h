#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };

namespace System::System::Net::Configuration
{
	struct HttpListenerTimeoutsElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::TimeSpan get_DrainEntityBody();
		mscorlib::System::TimeSpan get_EntityBody();
		mscorlib::System::TimeSpan get_HeaderWait();
		mscorlib::System::TimeSpan get_IdleConnection();
		int64_t get_MinSendBytesPerSecond();
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		mscorlib::System::TimeSpan get_RequestQueue();
	};
}

