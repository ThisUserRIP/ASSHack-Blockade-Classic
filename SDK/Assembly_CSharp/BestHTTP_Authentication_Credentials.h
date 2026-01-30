#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_Authentication_AuthenticationTypes.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::Authentication
{
	struct Credentials : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::Authentication::AuthenticationTypes _Type_k__BackingField;
		mscorlib::System::String* _UserName_k__BackingField;
		mscorlib::System::String* _Password_k__BackingField;
		Assembly_CSharp::BestHTTP::Authentication::AuthenticationTypes get_Type();
		void set_Type(Assembly_CSharp::BestHTTP::Authentication::AuthenticationTypes value);
		mscorlib::System::String* get_UserName();
		void set_UserName(mscorlib::System::String* value);
		mscorlib::System::String* get_Password();
		void set_Password(mscorlib::System::String* value);
		void _ctor(mscorlib::System::String* userName, mscorlib::System::String* password);
		void _ctor(Assembly_CSharp::BestHTTP::Authentication::AuthenticationTypes type, mscorlib::System::String* userName, mscorlib::System::String* password);
	};
}

