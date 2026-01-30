#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Net_CookieTokenizer.h"
namespace System::System::Net { struct CookieTokenizer; };
namespace mscorlib::System { struct String; };
#include "System_Net_CookieToken.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System::System::Net
{
	struct CookieTokenizer_RecognizedAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_name;
		System::Net::CookieToken m_token;
		void _ctor(mscorlib::System::String* name, System::Net::CookieToken token);
		System::Net::CookieToken get_Token();
		bool IsEqualTo(mscorlib::System::String* value);
	};
}

