#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_UI_Base_UIContainer.h"
#include "Doozy_Engine_UI_UIDrawerContainerSize.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI
{
	struct UIDrawerContainer : Assembly_CSharp::Doozy::Engine::UI::Base::UIContainer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector2 CalculatedSize;
		UnityEngine_CoreModule::UnityEngine::Vector3 ClosedPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 CurrentPosition;
		bool FadeOut;
		float FixedSize;
		float MinimumSize;
		UnityEngine_CoreModule::UnityEngine::Vector3 OpenedPosition;
		float PercentageOfScreen;
		UnityEngine_CoreModule::UnityEngine::Vector3 PreviousPosition;
		Assembly_CSharp::Doozy::Engine::UI::UIDrawerContainerSize Size;
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::UI::UIDrawerContainerSize DEFAULT_CONTAINER_SIZE;
			bool DEFAULT_FADE_OUT;
			float DEFAULT_FIXED_SIZE;
			float DEFAULT_MINIMUM_SIZE;
			float DEFAULT_PERCENTAGE_OF_SCREEN_SIZE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::Vector2 get_Velocity();
		void _ctor();
		void Reset();
	};
}

