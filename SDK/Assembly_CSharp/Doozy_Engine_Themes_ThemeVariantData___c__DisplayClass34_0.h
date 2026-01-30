#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Themes_ThemeVariantData.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeVariantData; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "Doozy_Engine_Themes_SpriteId.h"
namespace Assembly_CSharp::Doozy::Engine::Themes { struct SpriteId; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemeVariantData___c__DisplayClass34_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Guid propertyId;
		mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Themes::SpriteId, mscorlib::System::Boolean>* __9__0;
		void _ctor();
		bool _GetSprite_b__0(Assembly_CSharp::Doozy::Engine::Themes::SpriteId p);
	};
}

