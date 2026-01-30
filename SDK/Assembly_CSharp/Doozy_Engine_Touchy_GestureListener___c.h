#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Touchy_GestureListener.h"
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct GestureListener; };
#include "Doozy_Engine_Touchy_TouchInfo.h"
namespace Assembly_CSharp::Doozy::Engine::Touchy { struct TouchInfo; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	struct GestureListener___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Touchy::GestureListener___c* __9;
			mscorlib::System::Action_1<Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo>* __9__13_0;
			mscorlib::System::Action_1<Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo>* __9__14_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _Reset_b__13_0(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo _p0_);
		void _Awake_b__14_0(Assembly_CSharp::Doozy::Engine::Touchy::TouchInfo _p0_);
	};
}

