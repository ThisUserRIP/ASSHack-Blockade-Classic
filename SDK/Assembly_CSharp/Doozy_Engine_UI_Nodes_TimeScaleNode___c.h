#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_Nodes_TimeScaleNode.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Nodes { struct TimeScaleNode; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOGetter_1; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOSetter_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Nodes
{
	struct TimeScaleNode___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::Nodes::TimeScaleNode___c* __9;
			DOTween::DG::Tweening::Core::DOGetter_1<mscorlib::System::Single>* __9__28_0;
			DOTween::DG::Tweening::Core::DOSetter_1<mscorlib::System::Single>* __9__28_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		float _GetAnimationTween_b__28_0();
		void _GetAnimationTween_b__28_1(float x);
	};
}

