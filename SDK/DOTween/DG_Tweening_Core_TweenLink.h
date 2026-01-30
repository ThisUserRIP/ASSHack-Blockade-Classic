#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "DG_Tweening_LinkBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening::Core
{
	struct TweenLink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* target;
		DOTween::DG::Tweening::LinkBehaviour behaviour;
		bool lastSeenActive;
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* target, DOTween::DG::Tweening::LinkBehaviour behaviour);
	};
}

