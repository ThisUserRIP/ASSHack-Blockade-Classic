#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_UIPopupDatabase.h"
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopupDatabase; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopupLink; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIPopupDatabase___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::UIPopupDatabase___c* __9;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::UI::UIPopupLink, mscorlib::System::String>* __9__21_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::String* _Sort_b__21_0(Assembly_CSharp::Doozy::Engine::UI::UIPopupLink* reference);
	};
}

