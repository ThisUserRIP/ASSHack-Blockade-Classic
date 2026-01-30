#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Playables_Playable.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct Playable; };
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct INotification; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Playables
{
	struct INotificationReceiver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnNotify(UnityEngine_CoreModule::UnityEngine::Playables::Playable origin, UnityEngine_CoreModule::UnityEngine::Playables::INotification* notification, mscorlib::System::Object* context);
	};
}

