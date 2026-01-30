#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_UI_ToggleGroup.h"
namespace UnityEngine_UI::UnityEngine::UI { struct ToggleGroup; };
namespace UnityEngine_UI::UnityEngine::UI { struct Toggle; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct ToggleGroup___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::ToggleGroup___c* __9;
			mscorlib::System::Predicate_1<UnityEngine_UI::UnityEngine::UI::Toggle>* __9__13_0;
			mscorlib::System::Func_2<UnityEngine_UI::UnityEngine::UI::Toggle, mscorlib::System::Boolean>* __9__14_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _AnyTogglesOn_b__13_0(UnityEngine_UI::UnityEngine::UI::Toggle* x);
		bool _ActiveToggles_b__14_0(UnityEngine_UI::UnityEngine::UI::Toggle* x);
	};
}

