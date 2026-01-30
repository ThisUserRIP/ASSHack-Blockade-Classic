#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Events_UnityEvent_2.h"
#include "Rewired_Components_PlayerController.h"
namespace Rewired_Core::Rewired::Components { struct PlayerController; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Components
{
	struct PlayerController_ButtonStateChangedHandler : UnityEngine_CoreModule::UnityEngine::Events::UnityEvent_2<mscorlib::System::Int32, mscorlib::System::Boolean>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

