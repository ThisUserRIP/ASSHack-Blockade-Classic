#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Net_FtpStatusCode.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct FtpStatus : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::FtpStatusCode statusCode;
		mscorlib::System::String* statusDescription;
		void _ctor(System::Net::FtpStatusCode statusCode, mscorlib::System::String* statusDescription);
		System::Net::FtpStatusCode get_StatusCode();
		mscorlib::System::String* get_StatusDescription();
	};
}

