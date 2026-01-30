#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Themes_ThemeData.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeData; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeVariantData; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemeData___c__DisplayClass43_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Guid variantGuid;
		void _ctor();
		bool _ContainsVariant_b__0(Assembly_CSharp::Doozy::Engine::Themes::ThemeVariantData* variant);
	};
}

