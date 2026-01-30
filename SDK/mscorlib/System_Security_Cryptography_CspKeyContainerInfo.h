#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security::Cryptography { struct CspParameters; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Security::AccessControl { struct CryptoKeySecurity; };
namespace mscorlib::System { struct String; };
#include "System_Security_Cryptography_KeyNumber.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Security::Cryptography
{
	struct CspKeyContainerInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::CspParameters* _params;
		bool _random;
		void _ctor(mscorlib::System::Security::Cryptography::CspParameters* parameters);
		bool get_Accessible();
		mscorlib::System::Security::AccessControl::CryptoKeySecurity* get_CryptoKeySecurity();
		bool get_Exportable();
		bool get_HardwareDevice();
		mscorlib::System::String* get_KeyContainerName();
		mscorlib::System::Security::Cryptography::KeyNumber get_KeyNumber();
		bool get_MachineKeyStore();
		bool get_Protected();
		mscorlib::System::String* get_ProviderName();
		int32_t get_ProviderType();
		bool get_RandomlyGenerated();
		bool get_Removable();
		mscorlib::System::String* get_UniqueKeyContainerName();
	};
}

