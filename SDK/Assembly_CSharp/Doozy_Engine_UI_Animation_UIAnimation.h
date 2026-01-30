#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_UI_Animation_AnimationType.h"
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct Move; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct Rotate; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct Scale; };
namespace Assembly_CSharp::Doozy::Engine::UI::Animation { struct Fade; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::UI::Animation
{
	struct UIAnimation : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType AnimationType;
		Assembly_CSharp::Doozy::Engine::UI::Animation::Move* Move;
		Assembly_CSharp::Doozy::Engine::UI::Animation::Rotate* Rotate;
		Assembly_CSharp::Doozy::Engine::UI::Animation::Scale* Scale;
		Assembly_CSharp::Doozy::Engine::UI::Animation::Fade* Fade;
		bool get_Enabled();
		float get_StartDelay();
		float get_TotalDuration();
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType);
		void _ctor(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType, Assembly_CSharp::Doozy::Engine::UI::Animation::Move* move, Assembly_CSharp::Doozy::Engine::UI::Animation::Rotate* rotate, Assembly_CSharp::Doozy::Engine::UI::Animation::Scale* scale, Assembly_CSharp::Doozy::Engine::UI::Animation::Fade* fade);
		void Reset(Assembly_CSharp::Doozy::Engine::UI::Animation::AnimationType animationType);
		Assembly_CSharp::Doozy::Engine::UI::Animation::UIAnimation* Copy();
	};
}

