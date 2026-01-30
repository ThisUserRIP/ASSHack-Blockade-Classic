#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_UIView.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIView; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButton; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Doozy_Engine_UI_UIViewBehaviorType.h"

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIView___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::UIView___c* __9;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::UI::UIButton, mscorlib::System::Boolean>* __9__103_0;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::UI::UIButton, mscorlib::System::Boolean>* __9__103_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _RemoveNullChildUIButtons_b__103_0(Assembly_CSharp::Doozy::Engine::UI::UIButton* uiButton);
		bool _RemoveNullChildUIButtons_b__103_1(Assembly_CSharp::Doozy::Engine::UI::UIButton* t);
		void __cctor_b__126_0(Assembly_CSharp::Doozy::Engine::UI::UIView* _p0_, Assembly_CSharp::Doozy::Engine::UI::UIViewBehaviorType _p1_);
	};
}

