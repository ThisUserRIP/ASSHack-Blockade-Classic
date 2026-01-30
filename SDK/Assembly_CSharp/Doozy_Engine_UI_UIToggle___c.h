#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_UIToggle.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIToggle; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_UI_UIToggleState.h"
#include "Doozy_Engine_UI_UIToggleBehaviorType.h"

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIToggle___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::UIToggle___c* __9;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __cctor_b__75_0(Assembly_CSharp::Doozy::Engine::UI::UIToggle* _p0_, Assembly_CSharp::Doozy::Engine::UI::UIToggleState _p1_, Assembly_CSharp::Doozy::Engine::UI::UIToggleBehaviorType _p2_);
	};
}

