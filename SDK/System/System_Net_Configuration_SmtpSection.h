#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationSection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Net_Mail_SmtpDeliveryFormat.h"
#include "System_Net_Mail_SmtpDeliveryMethod.h"
namespace mscorlib::System { struct String; };
namespace System::System::Net::Configuration { struct SmtpNetworkElement; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
namespace System::System::Net::Configuration { struct SmtpSpecifiedPickupDirectoryElement; };

namespace System::System::Net::Configuration
{
	struct SmtpSection : System_Configuration::System::Configuration::ConfigurationSection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Net::Mail::SmtpDeliveryFormat get_DeliveryFormat();
		void set_DeliveryFormat(System::Net::Mail::SmtpDeliveryFormat value);
		System::Net::Mail::SmtpDeliveryMethod get_DeliveryMethod();
		void set_DeliveryMethod(System::Net::Mail::SmtpDeliveryMethod value);
		mscorlib::System::String* get_From();
		void set_From(mscorlib::System::String* value);
		System::Net::Configuration::SmtpNetworkElement* get_Network();
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* get_SpecifiedPickupDirectory();
	};
}

