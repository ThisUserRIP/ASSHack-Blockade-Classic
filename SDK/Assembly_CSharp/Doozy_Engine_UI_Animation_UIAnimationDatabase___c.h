#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_Animation_UIAnimationDatabase.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimationDatabase; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct UIAnimationData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	struct UIAnimationDatabase___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationDatabase___c* __9;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData, mscorlib::System::Boolean>* __9__15_0;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData, mscorlib::System::String>* __9__17_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _RemoveNullEntries_b__15_0(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData* data);
		mscorlib::System::String* _Sort_b__17_0(Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimationData* data);
	};
}

