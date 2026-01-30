#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Themes_ThemeData.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeData; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeVariantData; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemeData___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Themes::ThemeData___c* __9;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData, mscorlib::System::String>* __9__62_0;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData, mscorlib::System::String>* __9__64_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::String* _Sort_b__62_0(Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* variant);
		mscorlib::System::String* _UpdateVariantsNames_b__64_0(Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* variant);
	};
}

