#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Progress_ProgressTarget.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
#include "Doozy_Engine_Progress_TargetProgress.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };

namespace Assembly_CSharp::Doozy::Engine::Progress
{
	struct ProgressTargetImage : Assembly_CSharp::Doozy::Engine::Progress::ProgressTarget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Image* Image;
		Assembly_CSharp::Doozy::Engine::Progress::TargetProgress TargetProgress;
		void UpdateTarget(Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor);
		void Reset();
		void UpdateReference();
		void _ctor();
	};
}

