#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Security { struct SecureString; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct Uri; };

namespace System::System::Net
{
	struct NetworkCredential : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_domain;
		mscorlib::System::String* m_userName;
		mscorlib::System::Security::SecureString* m_password;
		void _ctor(mscorlib::System::String* userName, mscorlib::System::String* password);
		void _ctor(mscorlib::System::String* userName, mscorlib::System::String* password, mscorlib::System::String* domain);
		mscorlib::System::String* get_UserName();
		void set_UserName(mscorlib::System::String* value);
		mscorlib::System::String* get_Password();
		void set_Password(mscorlib::System::String* value);
		mscorlib::System::String* get_Domain();
		void set_Domain(mscorlib::System::String* value);
		mscorlib::System::String* InternalGetUserName();
		mscorlib::System::String* InternalGetPassword();
		mscorlib::System::String* InternalGetDomain();
		System::Net::NetworkCredential* GetCredential(System::Uri* uri, mscorlib::System::String* authType);
	};
}

