#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerWithMap.h"
namespace Rewired_Core::Rewired::Interfaces { struct IUnifiedKeyboardSource; };
#include "Rewired_ModifierKeyFlags.h"
#include "Rewired_KeyboardKeyCode.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
namespace Rewired_Core::Rewired { struct ControllerDataUpdater; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "Rewired_ModifierKey.h"
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
#include "Rewired_ControllerPollingInfo.h"
namespace Rewired_Core::Rewired { struct ControllerPollingInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
namespace Rewired_Core::Rewired { struct Controller_Button; };

namespace Rewired_Core::Rewired
{
	struct Keyboard : Rewired_Core::Rewired::ControllerWithMap
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* _source;
		Rewired_Core::Rewired::ModifierKeyFlags currentModfierKeyFlags;
		Rewired_Core::Rewired::ModifierKeyFlags currentModfierKeyFlagsDouble;
		mscorlib::System::Func_2<Rewired_Core::Rewired::KeyboardKeyCode, mscorlib::System::Int32>* _getKeyIndexDelegate;
		IL2CPP::Array<int32_t>* keyCodeToKeyIndex;
		int32_t maxKeyValue;
		struct StaticFields
		{
			Rewired_Core::Rewired::Keyboard* singleton;
			IL2CPP::Array<Rewired_Core::Rewired::KeyboardKeyCode>* __keyIndexToKeyboardKeyCode;
			mscorlib::System::Guid s_deviceInstanceGuid;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<Rewired_Core::Rewired::KeyboardKeyCode>* get_keyIndexToKeyboardKeyCode();
		void _ctor(mscorlib::System::String* name, Rewired_Core::Rewired::Interfaces::IUnifiedKeyboardSource* source);
		void _ctor(int32_t controllerId, Rewired_Core::Rewired::InputSource inputSource, mscorlib::System::String* name, mscorlib::System::String* hardwareIdentifier, Rewired_Core::Rewired::HardwareControllerMap_Game* hardwareMap, int32_t buttonCount, Rewired_Core::Rewired::Controller_Extension* extension, Rewired_Core::Rewired::ControllerDataUpdater* dataUpdater);
		mscorlib::System::Guid get_deviceInstanceGuid();
		bool GetKey(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		bool GetKeyDown(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		bool GetKeyUp(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		bool GetKeyDoublePressHold(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, float speed);
		bool GetKeyDoublePressHold(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		bool GetKeyDoublePressDown(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode, float speed);
		bool GetKeyDoublePressDown(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		bool GetKeyPrev(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		double GetKeyTimePressed(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		double GetKeyTimeUnpressed(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		bool GetModifierKey(Rewired_Core::Rewired::ModifierKey key);
		bool GetModifierKeyDown(Rewired_Core::Rewired::ModifierKey key);
		bool GetModifierKeyUp(Rewired_Core::Rewired::ModifierKey key);
		bool GetModifierKeyPrev(Rewired_Core::Rewired::ModifierKey key);
		double GetModifierKeyTimePressed(Rewired_Core::Rewired::ModifierKey key);
		double GetModifierKeyTimeUnpressed(Rewired_Core::Rewired::ModifierKey key);
		UnityEngine_CoreModule::UnityEngine::KeyCode GetKeyCodeByButtonIndex(int32_t buttonIndex);
		UnityEngine_CoreModule::UnityEngine::KeyCode GetKeyCodeById(int32_t elementIdentifierId);
		int32_t GetButtonIndexByKeyCode(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		Rewired_Core::Rewired::ControllerElementIdentifier* GetElementIdentifierByKeyCode(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstKey();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllKeys();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllKeysDown();
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstKeyDown();
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstButton();
		Rewired_Core::Rewired::ControllerPollingInfo PollForFirstButtonDown();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllButtons();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerPollingInfo>* PollForAllButtonsDown();
		static bool IsModifierKey(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static bool IsModifierKey(Rewired_Core::Rewired::KeyboardKeyCode key);
		static Rewired_Core::Rewired::ModifierKey KeyCodeToModifierKey(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static Rewired_Core::Rewired::ModifierKeyFlags KeyCodeToModifierKeyFlags(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static bool ModifierKeyFlagsContain(Rewired_Core::Rewired::ModifierKeyFlags flags, Rewired_Core::Rewired::ModifierKey key);
		static bool ModifierKeyFlagsContain(Rewired_Core::Rewired::ModifierKeyFlags flags, UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static Rewired_Core::Rewired::ModifierKey ModifierKeyFlagsToModifierKey(Rewired_Core::Rewired::ModifierKeyFlags flags);
		static UnityEngine_CoreModule::UnityEngine::KeyCode ModifierKeyFlagsToKeyCode(Rewired_Core::Rewired::ModifierKeyFlags flags);
		static Rewired_Core::Rewired::ModifierKeyFlags ModifierKeyToModifierKeyFlags(Rewired_Core::Rewired::ModifierKey key);
		static mscorlib::System::String* GetKeyName(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		static mscorlib::System::String* GetKeyName(UnityEngine_CoreModule::UnityEngine::KeyCode key, Rewired_Core::Rewired::ModifierKeyFlags flags);
		static mscorlib::System::String* ModifierKeyFlagsToString(Rewired_Core::Rewired::ModifierKeyFlags flags, bool abbreviate);
		static mscorlib::System::String* ModifierKeyFlagsToString(Rewired_Core::Rewired::ModifierKeyFlags flags);
		static Rewired_Core::Rewired::KeyboardKeyCode KeyCodeToKeyboardKeyCode(UnityEngine_CoreModule::UnityEngine::KeyCode keyCode);
		static UnityEngine_CoreModule::UnityEngine::KeyCode KeyboardKeyCodeToKeyCode(Rewired_Core::Rewired::KeyboardKeyCode keyCode);
		static Rewired_Core::Rewired::ModifierKeyFlags ConvertModifierKeyFlagsSingleToDouble(Rewired_Core::Rewired::ModifierKeyFlags flags);
		static int32_t GetDoubledModifierKeyCount(Rewired_Core::Rewired::ModifierKeyFlags flags);
		static Rewired_Core::Rewired::KeyboardKeyCode GetKeyboardKeyCodeByButtonIndex(int32_t buttonIndex);
		static int32_t GetElementIdentifierIdByKeyCode(Rewired_Core::Rewired::KeyboardKeyCode keyCode);
		static void FixKeyboardAssignments(int32_t& elementIdentifierId, UnityEngine_CoreModule::UnityEngine::KeyCode& keyCode);
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		void UpdateData_AndroidKeyboardDisabled(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		bool GetKey(Rewired_Core::Rewired::KeyboardKeyCode keyCode);
		bool GetKeyPrev(Rewired_Core::Rewired::KeyboardKeyCode keyCode);
		bool AllRequiredKeysPressed(Rewired_Core::Rewired::KeyboardKeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags doubledFlags);
		bool IsAnyComponentKeyActive(Rewired_Core::Rewired::KeyboardKeyCode keyCode, Rewired_Core::Rewired::ModifierKeyFlags doubledFlags);
		int32_t GetButtonIndex(Rewired_Core::Rewired::KeyboardKeyCode keyCode);
		void BakeMap(Rewired_Core::Rewired::ControllerMap* controllerMap);
		void BakeActionElementMap(Rewired_Core::Rewired::ControllerMap* controllerMap, Rewired_Core::Rewired::ActionElementMap* map);
		void Clear();
		bool GetControlButtons(Rewired_Core::Rewired::Controller_Button& leftButton, Rewired_Core::Rewired::Controller_Button& rightButton, Rewired_Core::Rewired::ModifierKey key);
		void UpdateCurrentModifierKeyFlags();
	};
}

