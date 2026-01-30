#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "Doozy_Engine_Touchy_Swipe.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Touchy
{
	struct CardinalDirection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_CoreModule::UnityEngine::Vector2 None;
			UnityEngine_CoreModule::UnityEngine::Vector2 Up;
			UnityEngine_CoreModule::UnityEngine::Vector2 Down;
			UnityEngine_CoreModule::UnityEngine::Vector2 Right;
			UnityEngine_CoreModule::UnityEngine::Vector2 Left;
			UnityEngine_CoreModule::UnityEngine::Vector2 UpRight;
			UnityEngine_CoreModule::UnityEngine::Vector2 UpLeft;
			UnityEngine_CoreModule::UnityEngine::Vector2 DownRight;
			UnityEngine_CoreModule::UnityEngine::Vector2 DownLeft;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_CoreModule::UnityEngine::Vector2 Get(Assembly_CSharp::Doozy::Engine::Touchy::Swipe swipe);
		static void _cctor();
	};
}

