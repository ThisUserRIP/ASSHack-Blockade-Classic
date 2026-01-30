#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Soundy_SoundyController.h"
namespace Assembly_CSharp::Doozy::Engine::Soundy { struct SoundyController; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Soundy
{
	struct SoundyController___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Soundy::SoundyController___c* __9;
			mscorlib::System::Func_2<Assembly_CSharp::Doozy::Engine::Soundy::SoundyController, mscorlib::System::Boolean>* __9__66_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _RemoveNullControllersFromDatabase_b__66_0(Assembly_CSharp::Doozy::Engine::Soundy::SoundyController* sc);
	};
}

