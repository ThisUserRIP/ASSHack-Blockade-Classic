#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_UIButton.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButton; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_UI_UIButtonBehaviorType.h"

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIButton___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::UIButton___c* __9;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __cctor_b__110_0(Assembly_CSharp::Doozy::Engine::UI::UIButton* _p0_, Assembly_CSharp::Doozy::Engine::UI::UIButtonBehaviorType _p1_);
	};
}

