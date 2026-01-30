#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Themes_ThemesDatabase.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemesDatabase; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeData; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemesDatabase___c__DisplayClass16_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* themeName;
		void _ctor();
		bool _ContainsTheme_b__0(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* theme);
	};
}

