#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_IMGUIModule::UnityEngine
{
	struct ScrollViewState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rect position;
		UnityEngine_CoreModule::UnityEngine::Rect visibleRect;
		UnityEngine_CoreModule::UnityEngine::Rect viewRect;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition;
		bool apply;
		bool isDuringTouchScroll;
		UnityEngine_CoreModule::UnityEngine::Vector2 touchScrollStartMousePosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 touchScrollStartPosition;
		UnityEngine_CoreModule::UnityEngine::Vector2 velocity;
		float previousTimeSinceStartup;
		void _ctor();
	};
}

