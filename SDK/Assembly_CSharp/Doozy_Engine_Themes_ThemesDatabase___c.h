#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Themes_ThemesDatabase.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemesDatabase; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeData; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemesDatabase___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Themes::ThemesDatabase___c* __9;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Themes::ThemeData, mscorlib::System::String>* __9__25_0;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Themes::ThemeData, mscorlib::System::Boolean>* __9__27_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::String* _Sort_b__25_0(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* data);
		bool _UpdateThemesNames_b__27_0(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* themeData);
	};
}

