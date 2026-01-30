#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Extensions_RectExtensions.h"
namespace Assembly_CSharp::Doozy::Engine::Extensions { struct RectExtensions; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Extensions
{
	struct RectExtensions___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Extensions::RectExtensions___c* __9;
			mscorlib::System::Func_2<UnityEngine_CoreModule::UnityEngine::Rect, mscorlib::System::Single>* __9__37_0;
			mscorlib::System::Func_2<UnityEngine_CoreModule::UnityEngine::Rect, mscorlib::System::Single>* __9__37_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		float _Cover_b__37_0(UnityEngine_CoreModule::UnityEngine::Rect t);
		float _Cover_b__37_1(UnityEngine_CoreModule::UnityEngine::Rect t);
	};
}

