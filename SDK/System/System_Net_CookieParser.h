#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net { struct CookieTokenizer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System::System::Net { struct Cookie; };

namespace System::System::Net
{
	struct CookieParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::CookieTokenizer* m_tokenizer;
		void _ctor(mscorlib::System::String* cookieString);
		System::Net::Cookie* Get();
		static mscorlib::System::String* CheckQuoted(mscorlib::System::String* value);
	};
}

