#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_Nodes_UINode.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Nodes { struct UINode; };
namespace Assembly_CSharp::Doozy::Engine::UI::Internal { struct UIViewCategoryName; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	struct UINode___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::Nodes::UINode___c* __9;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName, mscorlib::System::String>* __9__26_0;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName, mscorlib::System::String>* __9__26_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::String* _SortViewsList_b__26_0(Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName* x);
		mscorlib::System::String* _SortViewsList_b__26_1(Assembly_CSharp::Doozy::Engine::UI::Internal::UIViewCategoryName* x);
	};
}

