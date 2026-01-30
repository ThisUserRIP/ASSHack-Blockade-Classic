#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Doozy_Engine_Progress_ProgressTarget.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
#include "Doozy_Engine_Progress_TargetVariable.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Progress { struct Progressor; };

namespace Assembly_CSharp::Doozy::Engine::Progress
{
	struct ProgressTargetText : Assembly_CSharp::Doozy::Engine::Progress::ProgressTarget
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UI::UnityEngine::UI::Text* Text;
		Assembly_CSharp::Doozy::Engine::Progress::TargetVariable TargetVariable;
		bool WholeNumbers;
		bool UseMultiplier;
		float Multiplier;
		mscorlib::System::String* Prefix;
		mscorlib::System::String* Suffix;
		bool m_initialized;
		float m_targetValue;
		mscorlib::System::Text::StringBuilder* m_stringBuilder;
		void UpdateTarget(Assembly_CSharp::Doozy::Engine::Progress::Progressor* progressor);
		void Reset();
		void Init();
		void UpdateReference();
		void _ctor();
	};
}

