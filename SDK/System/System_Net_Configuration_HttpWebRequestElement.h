#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Net::Configuration
{
	struct HttpWebRequestElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		int32_t get_MaximumErrorResponseLength();
		void set_MaximumErrorResponseLength(int32_t value);
		int32_t get_MaximumResponseHeadersLength();
		void set_MaximumResponseHeadersLength(int32_t value);
		int32_t get_MaximumUnauthorizedUploadLength();
		void set_MaximumUnauthorizedUploadLength(int32_t value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		bool get_UseUnsafeHeaderParsing();
		void set_UseUnsafeHeaderParsing(bool value);
		void PostDeserialize();
	};
}

