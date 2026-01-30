#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_Base_UIAction.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct UIAction; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Assembly_CSharp::Doozy::Engine::Events { struct AnimatorEvent; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Base
{
	struct UIAction___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::Base::UIAction___c* __9;
			mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::GameObject>* __9__23_0;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent, mscorlib::System::Boolean>* __9__25_0;
			mscorlib::System::Func_2<mscorlib::System::String, mscorlib::System::Boolean>* __9__27_0;
			mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::GameObject>* __9__35_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __ctor_b__23_0(UnityEngine_CoreModule::UnityEngine::GameObject* _p0_);
		bool _AddAnimatorEvents_b__25_0(Assembly_CSharp::Doozy::Engine::Events::AnimatorEvent* x);
		bool _AddGameEvents_b__27_0(mscorlib::System::String* s);
		void _Reset_b__35_0(UnityEngine_CoreModule::UnityEngine::GameObject* _p0_);
	};
}

