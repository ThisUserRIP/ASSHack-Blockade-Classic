#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "System_Resources_UltimateResourceFallbackLocation.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Resources
{
	struct NeutralResourcesLanguageAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _culture;
		mscorlib::System::Resources::UltimateResourceFallbackLocation _fallbackLoc;
		void _ctor(mscorlib::System::String* cultureName);
		mscorlib::System::String* get_CultureName();
		mscorlib::System::Resources::UltimateResourceFallbackLocation get_Location();
	};
}

