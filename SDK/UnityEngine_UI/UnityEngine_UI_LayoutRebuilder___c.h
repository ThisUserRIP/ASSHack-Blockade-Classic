#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_UI_LayoutRebuilder.h"
namespace UnityEngine_UI::UnityEngine::UI { struct LayoutRebuilder; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };
namespace mscorlib::System { template <typename T> struct Predicate_1; };
namespace UnityEngine_CoreModule::UnityEngine::Events { template <typename T0> struct UnityAction_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct LayoutRebuilder___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::UI::LayoutRebuilder___c* __9;
			mscorlib::System::Predicate_1<UnityEngine_CoreModule::UnityEngine::Component>* __9__10_0;
			UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Component>* __9__12_0;
			UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Component>* __9__12_1;
			UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Component>* __9__12_2;
			UnityEngine_CoreModule::UnityEngine::Events::UnityAction_1<UnityEngine_CoreModule::UnityEngine::Component>* __9__12_3;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __cctor_b__5_0(UnityEngine_UI::UnityEngine::UI::LayoutRebuilder* x);
		bool _StripDisabledBehavioursFromList_b__10_0(UnityEngine_CoreModule::UnityEngine::Component* e);
		void _Rebuild_b__12_0(UnityEngine_CoreModule::UnityEngine::Component* e);
		void _Rebuild_b__12_1(UnityEngine_CoreModule::UnityEngine::Component* e);
		void _Rebuild_b__12_2(UnityEngine_CoreModule::UnityEngine::Component* e);
		void _Rebuild_b__12_3(UnityEngine_CoreModule::UnityEngine::Component* e);
	};
}

