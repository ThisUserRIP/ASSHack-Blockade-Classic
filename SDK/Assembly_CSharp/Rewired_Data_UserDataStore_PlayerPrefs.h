#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\Rewired_Core\Rewired_Data_UserDataStore.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\Rewired_Core\Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct ControllerStatusChangedEventArgs; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "..\Rewired_Core\Rewired_ControllerIdentifier.h"
namespace Rewired_Core::Rewired { struct ControllerIdentifier; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct Joystick; };
namespace Rewired_Core::Rewired { struct InputBehavior; };
namespace Assembly_CSharp::Rewired::Data { struct UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\Rewired_Core\Rewired_PlayerSaveData.h"
namespace Rewired_Core::Rewired { struct PlayerSaveData; };
namespace Assembly_CSharp::Rewired::Data { struct UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo_JoystickInfo; };

namespace Assembly_CSharp::Rewired::Data
{
	struct UserDataStore_PlayerPrefs : Rewired_Core::Rewired::Data::UserDataStore
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isEnabled;
		bool loadDataOnStart;
		bool loadJoystickAssignments;
		bool loadKeyboardAssignments;
		bool loadMouseAssignments;
		mscorlib::System::String* playerPrefsKeyPrefix;
		bool allowImpreciseJoystickAssignmentMatching;
		bool deferredJoystickAssignmentLoadPending;
		bool wasJoystickEverDetected;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* __allActionIds;
		mscorlib::System::String* __allActionIdsString;
		struct StaticFields
		{
			mscorlib::System::String* thisScriptName;
			mscorlib::System::String* logPrefix;
			mscorlib::System::String* editorLoadedMessage;
			mscorlib::System::String* playerPrefsKeySuffix_controllerAssignments;
			int32_t controllerMapPPKeyVersion_original;
			int32_t controllerMapPPKeyVersion_includeDuplicateJoystickIndex;
			int32_t controllerMapPPKeyVersion_supportDisconnectedControllers;
			int32_t controllerMapPPKeyVersion_includeFormatVersion;
			int32_t controllerMapPPKeyVersion;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		bool get_IsEnabled();
		void set_IsEnabled(bool value);
		bool get_LoadDataOnStart();
		void set_LoadDataOnStart(bool value);
		bool get_LoadJoystickAssignments();
		void set_LoadJoystickAssignments(bool value);
		bool get_LoadKeyboardAssignments();
		void set_LoadKeyboardAssignments(bool value);
		bool get_LoadMouseAssignments();
		void set_LoadMouseAssignments(bool value);
		mscorlib::System::String* get_PlayerPrefsKeyPrefix();
		void set_PlayerPrefsKeyPrefix(mscorlib::System::String* value);
		mscorlib::System::String* get_playerPrefsKey_controllerAssignments();
		bool get_loadControllerAssignments();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* get_allActionIds();
		mscorlib::System::String* get_allActionIdsString();
		void Save();
		void SaveControllerData(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void SaveControllerData(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void SavePlayerData(int32_t playerId);
		void SaveInputBehavior(int32_t playerId, int32_t behaviorId);
		void Load();
		void LoadControllerData(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void LoadControllerData(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void LoadPlayerData(int32_t playerId);
		void LoadInputBehavior(int32_t playerId, int32_t behaviorId);
		void OnInitialize();
		void OnControllerConnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void OnControllerPreDisconnect(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void OnControllerDisconnected(Rewired_Core::Rewired::ControllerStatusChangedEventArgs* args);
		void SaveControllerMap(int32_t playerId, Rewired_Core::Rewired::ControllerMap* controllerMap);
		Rewired_Core::Rewired::ControllerMap* LoadControllerMap(int32_t playerId, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t categoryId, int32_t layoutId);
		int32_t LoadAll();
		int32_t LoadPlayerDataNow(int32_t playerId);
		int32_t LoadPlayerDataNow(Rewired_Core::Rewired::Player* player);
		int32_t LoadAllJoystickCalibrationData();
		int32_t LoadJoystickCalibrationData(Rewired_Core::Rewired::Joystick* joystick);
		int32_t LoadJoystickCalibrationData(int32_t joystickId);
		int32_t LoadJoystickData(int32_t joystickId);
		int32_t LoadControllerDataNow(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		int32_t LoadControllerDataNow(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		int32_t LoadControllerMaps(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		Rewired_Core::Rewired::ControllerMap* LoadControllerMap(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t categoryId, int32_t layoutId);
		int32_t LoadInputBehaviors(int32_t playerId);
		int32_t LoadInputBehaviorNow(int32_t playerId, int32_t behaviorId);
		int32_t LoadInputBehaviorNow(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::InputBehavior* inputBehavior);
		bool LoadControllerAssignmentsNow();
		bool LoadKeyboardAndMouseAssignmentsNow(Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* data);
		bool LoadJoystickAssignmentsNow(Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* data);
		Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo* LoadControllerAssignmentData();
		mscorlib::System::Collections::IEnumerator* LoadJoystickAssignmentsDeferred();
		void SaveAll();
		void SavePlayerDataNow(int32_t playerId);
		void SavePlayerDataNow(Rewired_Core::Rewired::Player* player);
		void SaveAllJoystickCalibrationData();
		void SaveJoystickCalibrationData(int32_t joystickId);
		void SaveJoystickCalibrationData(Rewired_Core::Rewired::Joystick* joystick);
		void SaveJoystickData(int32_t joystickId);
		void SaveControllerDataNow(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void SaveControllerDataNow(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void SaveControllerMaps(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::PlayerSaveData playerSaveData);
		void SaveControllerMaps(int32_t playerId, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		void SaveControllerMap(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerMap* controllerMap);
		void SaveInputBehaviors(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::PlayerSaveData playerSaveData);
		void SaveInputBehaviorNow(int32_t playerId, int32_t behaviorId);
		void SaveInputBehaviorNow(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::InputBehavior* inputBehavior);
		bool SaveControllerAssignments();
		bool ControllerAssignmentSaveDataExists();
		mscorlib::System::String* GetBasePlayerPrefsKey(Rewired_Core::Rewired::Player* player);
		mscorlib::System::String* GetControllerMapPlayerPrefsKey(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t categoryId, int32_t layoutId, int32_t ppKeyVersion);
		mscorlib::System::String* GetControllerMapKnownActionIdsPlayerPrefsKey(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t categoryId, int32_t layoutId, int32_t ppKeyVersion);
		static mscorlib::System::String* GetControllerMapPlayerPrefsKeyCommonSuffix(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t categoryId, int32_t layoutId, int32_t ppKeyVersion);
		mscorlib::System::String* GetJoystickCalibrationMapPlayerPrefsKey(Rewired_Core::Rewired::Joystick* joystick);
		mscorlib::System::String* GetInputBehaviorPlayerPrefsKey(Rewired_Core::Rewired::Player* player, int32_t inputBehaviorId);
		mscorlib::System::String* GetControllerMapXml(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t categoryId, int32_t layoutId);
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* GetControllerMapKnownActionIds(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, int32_t categoryId, int32_t layoutId);
		mscorlib::System::String* GetJoystickCalibrationMapXml(Rewired_Core::Rewired::Joystick* joystick);
		mscorlib::System::String* GetInputBehaviorXml(Rewired_Core::Rewired::Player* player, int32_t id);
		void AddDefaultMappingsForNewActions(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier, Rewired_Core::Rewired::ControllerMap* controllerMap, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* knownActionIds);
		Rewired_Core::Rewired::Joystick* FindJoystickPrecise(Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo_JoystickInfo* joystickInfo);
		bool TryFindJoysticksImprecise(Assembly_CSharp::Rewired::Data::UserDataStore_PlayerPrefs_ControllerAssignmentSaveInfo_JoystickInfo* joystickInfo, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Joystick>& matches);
		static int32_t GetDuplicateIndex(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier);
		void RefreshLayoutManager(int32_t playerId);
		static mscorlib::System::Type* GetControllerMapType(Rewired_Core::Rewired::ControllerType controllerType);
		void _ctor();
	};
}

