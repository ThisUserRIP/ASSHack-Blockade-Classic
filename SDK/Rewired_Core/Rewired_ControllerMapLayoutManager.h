#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager_StartingSettings; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager_RuleSet; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };

namespace Rewired_Core::Rewired
{
	struct ControllerMapLayoutManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _enabled;
		bool _loadFromUserDataStore;
		Rewired_Core::Rewired::Player* _player;
		Rewired_Core::Rewired::ControllerMapLayoutManager_StartingSettings* _startingSettings;
		int32_t _reInputId;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet>* _ruleSets;
		mscorlib::System::Action* _ApplyCalledEvent;
		void add_ApplyCalledEvent(mscorlib::System::Action* value);
		void remove_ApplyCalledEvent(mscorlib::System::Action* value);
		void _ctor(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerMapLayoutManager_StartingSettings* startingSettings);
		bool get_enabled();
		void set_enabled(bool value);
		bool get_loadFromUserDataStore();
		void set_loadFromUserDataStore(bool value);
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet>* get_ruleSets();
		void set_ruleSets(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMapLayoutManager_RuleSet>* value);
		void Apply();
		void LoadDefaults();
		mscorlib::System::String* ToXmlString();
		mscorlib::System::String* ToJsonString();
		bool ImportXml(mscorlib::System::String* xmlString);
		bool ImportJson(mscorlib::System::String* jsonString);
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* Export();
		void ExportDataToSerializedObject(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject);
		bool Import(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* serializedObject);
	};
}

