#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "System_Net_CookieVariant.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Net
{
	struct HeaderVariantInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_name;
		System::Net::CookieVariant m_variant;
		void _ctor(mscorlib::System::String* name, System::Net::CookieVariant variant);
		mscorlib::System::String* get_Name();
		System::Net::CookieVariant get_Variant();
	};
}

