#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Player_Editor.h"
namespace Rewired_Core::Rewired::Data { struct Player_Editor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Data { struct Player_Editor_RuleSetMapping; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager_StartingSettings; };
namespace Rewired_Core { struct buwlxqKhUllBBlfaFHEuNozwGtg; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data
{
	struct Player_Editor_ControllerMapLayoutManagerSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _enabled;
		bool _loadFromUserDataStore;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_RuleSetMapping>* _ruleSets;
		bool get_enabled();
		void set_enabled(bool value);
		bool get_loadFromUserDataStore();
		void set_loadFromUserDataStore(bool value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_RuleSetMapping>* get_ruleSets();
		void set_ruleSets(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Player_Editor_RuleSetMapping>* value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::Player_Editor_ControllerMapLayoutManagerSettings* source);
		Rewired_Core::Rewired::ControllerMapLayoutManager_StartingSettings* etVfAWnzeRbshngDAEyFacNSFUt();
		IL2CPP::Array<Rewired_Core::buwlxqKhUllBBlfaFHEuNozwGtg*>* bFEJrHzWnkGVEVcbPczGyfRQaMP();
		mscorlib::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone();
	};
}

