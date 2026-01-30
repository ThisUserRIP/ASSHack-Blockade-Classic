#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security::AccessControl { struct CryptoKeySecurity; };
namespace mscorlib::System::Security { struct SecureString; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Security_Cryptography_CspProviderFlags.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Security::Cryptography
{
	struct CspParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ProviderType;
		mscorlib::System::String* ProviderName;
		mscorlib::System::String* KeyContainerName;
		int32_t KeyNumber;
		int32_t m_flags;
		mscorlib::System::Security::AccessControl::CryptoKeySecurity* m_cryptoKeySecurity;
		mscorlib::System::Security::SecureString* m_keyPassword;
		intptr_t m_parentWindowHandle;
		mscorlib::System::Security::Cryptography::CspProviderFlags get_Flags();
		void set_Flags(mscorlib::System::Security::Cryptography::CspProviderFlags value);
		mscorlib::System::Security::AccessControl::CryptoKeySecurity* get_CryptoKeySecurity();
		void set_CryptoKeySecurity(mscorlib::System::Security::AccessControl::CryptoKeySecurity* value);
		mscorlib::System::Security::SecureString* get_KeyPassword();
		void set_KeyPassword(mscorlib::System::Security::SecureString* value);
		intptr_t get_ParentWindowHandle();
		void set_ParentWindowHandle(intptr_t value);
		void _ctor();
		void _ctor(int32_t dwTypeIn);
		void _ctor(int32_t dwTypeIn, mscorlib::System::String* strProviderNameIn);
		void _ctor(int32_t dwTypeIn, mscorlib::System::String* strProviderNameIn, mscorlib::System::String* strContainerNameIn);
		void _ctor(int32_t providerType, mscorlib::System::String* providerName, mscorlib::System::String* keyContainerName, mscorlib::System::Security::AccessControl::CryptoKeySecurity* cryptoKeySecurity, mscorlib::System::Security::SecureString* keyPassword);
		void _ctor(int32_t providerType, mscorlib::System::String* providerName, mscorlib::System::String* keyContainerName, mscorlib::System::Security::AccessControl::CryptoKeySecurity* cryptoKeySecurity, intptr_t parentWindowHandle);
		void _ctor(int32_t providerType, mscorlib::System::String* providerName, mscorlib::System::String* keyContainerName, mscorlib::System::Security::Cryptography::CspProviderFlags flags);
		void _ctor(mscorlib::System::Security::Cryptography::CspParameters* parameters);
	};
}

