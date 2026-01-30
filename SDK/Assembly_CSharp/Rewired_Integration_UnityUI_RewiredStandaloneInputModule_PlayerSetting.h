#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Integration_UnityUI_RewiredStandaloneInputModule.h"
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredStandaloneInputModule; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Components { struct PlayerMouse; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Integration::UnityUI
{
	struct RewiredStandaloneInputModule_PlayerSetting : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t playerId;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Components::PlayerMouse>* playerMice;
		void _ctor();
		void _ctor(Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* other);
		Assembly_CSharp::Rewired::Integration::UnityUI::RewiredStandaloneInputModule_PlayerSetting* Clone();
	};
}

