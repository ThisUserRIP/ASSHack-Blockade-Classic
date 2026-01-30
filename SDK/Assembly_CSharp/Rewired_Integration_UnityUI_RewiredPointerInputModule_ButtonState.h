#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Integration_UnityUI_RewiredPointerInputModule.h"
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredPointerInputModule; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::Integration::UnityUI { struct RewiredPointerInputModule_MouseButtonEventData; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::Integration::UnityUI
{
	struct RewiredPointerInputModule_ButtonState : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Button;
		Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* m_EventData;
		Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* get_eventData();
		void set_eventData(Assembly_CSharp::Rewired::Integration::UnityUI::RewiredPointerInputModule_MouseButtonEventData* value);
		int32_t get_button();
		void set_button(int32_t value);
		void _ctor();
	};
}

