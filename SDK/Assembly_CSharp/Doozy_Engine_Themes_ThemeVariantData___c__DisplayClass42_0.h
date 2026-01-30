#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Themes_ThemeVariantData.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeVariantData; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "Doozy_Engine_Themes_FontId.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct FontId; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemeVariantData___c__DisplayClass42_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Guid propertyId;
		mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Themes::FontId, mscorlib::System::Boolean>* __9__0;
		void _ctor();
		bool _GetFont_b__0(Assembly_CSharp::Doozy::Engine::Themes::FontId fontProperty);
	};
}

