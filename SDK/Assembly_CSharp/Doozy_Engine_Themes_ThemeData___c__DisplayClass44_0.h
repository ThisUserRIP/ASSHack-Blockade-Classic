#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Themes_ThemeData.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeData; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeVariantData; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemeData___c__DisplayClass44_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* variantName;
		void _ctor();
		bool _ContainsVariant_b__0(Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* variant);
	};
}

