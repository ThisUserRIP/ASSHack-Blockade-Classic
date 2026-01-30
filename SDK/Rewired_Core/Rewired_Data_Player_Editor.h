#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Data { struct Player_Editor_Mapping; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired::Data { struct Player_Editor_CreateControllerInfo; };
namespace Rewired_Core::Rewired::Data { struct Player_Editor_ControllerMapLayoutManagerSettings; };
namespace Rewired_Core::Rewired::Data { struct Player_Editor_ControllerMapEnablerSettings; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core { struct mUbbinbjQOMNIAzUbOrfgDmjOhKR; };

namespace Rewired_Core::Rewired::Data
{
	struct Player_Editor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _id;
		mscorlib::System::String* _name;
		mscorlib::System::String* _descriptiveName;
		bool _startPlaying;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* _defaultJoystickMaps;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* _defaultMouseMaps;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* _defaultKeyboardMaps;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* _defaultCustomControllerMaps;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_CreateControllerInfo>* _startingCustomControllers;
		bool _assignMouseOnStart;
		bool _assignKeyboardOnStart;
		bool _excludeFromControllerAutoAssignment;
		Rewired_Core::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings* _controllerMapLayoutManagerSettings;
		Rewired_Core::Rewired::Data::Player_Editor_ControllerMapEnablerSettings* _controllerMapEnablerSettings;
		int32_t get_id();
		void set_id(int32_t value);
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_descriptiveName();
		void set_descriptiveName(mscorlib::System::String* value);
		bool get_startPlaying();
		void set_startPlaying(bool value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* get_defaultJoystickMaps();
		void set_defaultJoystickMaps(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* get_defaultMouseMaps();
		void set_defaultMouseMaps(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* get_defaultKeyboardMaps();
		void set_defaultKeyboardMaps(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* get_defaultCustomControllerMaps();
		void set_defaultCustomControllerMaps(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_Mapping>* value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_CreateControllerInfo>* get_startingCustomControllers();
		void set_startingCustomControllers(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_CreateControllerInfo>* value);
		bool get_assignMouseOnStart();
		void set_assignMouseOnStart(bool value);
		bool get_assignKeyboardOnStart();
		void set_assignKeyboardOnStart(bool value);
		bool get_excludeFromControllerAutoAssignment();
		void set_excludeFromControllerAutoAssignment(bool value);
		Rewired_Core::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings* get_controllerMapLayoutManagerSettings();
		void set_controllerMapLayoutManagerSettings(Rewired_Core::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings* value);
		Rewired_Core::Rewired::Data::Player_Editor_ControllerMapEnablerSettings* get_controllerMapEnablerSettings();
		void set_controllerMapEnablerSettings(Rewired_Core::Rewired::Data::Player_Editor_ControllerMapEnablerSettings* value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::Player_Editor* source);
		Rewired_Core::Rewired::Data::Player_Editor* Clone();
		Rewired_Core::mUbbinbjQOMNIAzUbOrfgDmjOhKR* lUJIWMfzahZsbHxOLbtEDbzBpTu();
	};
}

