#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };

namespace System::System::Net::Configuration
{
	struct SmtpNetworkElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::String* get_ClientDomain();
		void set_ClientDomain(mscorlib::System::String* value);
		bool get_DefaultCredentials();
		void set_DefaultCredentials(bool value);
		bool get_EnableSsl();
		void set_EnableSsl(bool value);
		mscorlib::System::String* get_Host();
		void set_Host(mscorlib::System::String* value);
		mscorlib::System::String* get_Password();
		void set_Password(mscorlib::System::String* value);
		int32_t get_Port();
		void set_Port(int32_t value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		mscorlib::System::String* get_TargetName();
		void set_TargetName(mscorlib::System::String* value);
		mscorlib::System::String* get_UserName();
		void set_UserName(mscorlib::System::String* value);
		void PostDeserialize();
	};
}

