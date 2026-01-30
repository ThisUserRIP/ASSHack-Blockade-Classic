#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerElementType.h"
#include "Rewired_AxisRange.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Pole.h"
#include "Rewired_KeyboardKeyCode.h"
#include "Rewired_ModifierKey.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace mscorlib::System { struct String; };
#include "Rewired_ModifierKeyFlags.h"
namespace mscorlib::System::Text { struct StringBuilder; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_AxisType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "Rewired_ElementAssignment.h"
namespace Rewired_Core::Rewired { struct ElementAssignment; };
#include "Rewired_ControllerElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerElementTarget; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
namespace Rewired_Core::Rewired { struct HardwareControllerMap_Game; };
#include "Rewired_ControllerType.h"
#include "Rewired_ElementAssignmentType.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct SerializedObject; };

namespace Rewired_Core::Rewired
{
	struct ActionElementMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _actionCategoryId;
		int32_t _actionId;
		Rewired_Core::Rewired::ControllerElementType _elementType;
		int32_t _elementIdentifierId;
		Rewired_Core::Rewired::AxisRange _axisRange;
		bool _invert;
		Rewired_Core::Rewired::Pole _axisContribution;
		Rewired_Core::Rewired::KeyboardKeyCode _keyboardKeyCode;
		Rewired_Core::Rewired::ModifierKey _modifierKey1;
		Rewired_Core::Rewired::ModifierKey _modifierKey2;
		Rewired_Core::Rewired::ModifierKey _modifierKey3;
		Rewired_Core::Rewired::ControllerMap* kcZEkeCkwsbDlVpCQYkhfRfbrAbY;
		bool eEGiIPEupbQLDWwJrozxiWefseDw;
		mscorlib::System::String* DOufZQDAvOmuVFWEGiGPmMCDUldy;
		mscorlib::System::String* UyNpoLaHTREvNuMqZMiuwvuOtYx;
		int32_t ZgHDnsdzUDAuNAjKBtjGGRAwNXP;
		int32_t OPPOtDNHGlrPGeLpHmQhFxdvEAr;
		mscorlib::System::String* tLhFfgfdCfvIVjjKxIXmjDnCOQY;
		Rewired_Core::Rewired::ModifierKeyFlags xtjWGJEkgKmoVxxfjdwsOvXdeAl;
		struct StaticFields
		{
			int32_t uidCounter;
			mscorlib::System::Text::StringBuilder* s_toStringSB;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool AiQGhVcdoLaohYZsfAAAtGhAQApX(Rewired_Core::Rewired::ActionElementMap* A_0);
		static void TtBlpbpUqYqfERlZlJCDiKJgbPX(Rewired_Core::Rewired::ActionElementMap* A_0, Rewired_Core::Rewired::ActionElementMap* A_1);
		int32_t get_actionId();
		void set_actionId(int32_t value);
		Rewired_Core::Rewired::ControllerElementType get_elementType();
		void set_elementType(Rewired_Core::Rewired::ControllerElementType value);
		int32_t get_elementIdentifierId();
		void set_elementIdentifierId(int32_t value);
		Rewired_Core::Rewired::AxisRange get_axisRange();
		void set_axisRange(Rewired_Core::Rewired::AxisRange value);
		bool get_invert();
		void set_invert(bool value);
		Rewired_Core::Rewired::Pole get_axisContribution();
		void set_axisContribution(Rewired_Core::Rewired::Pole value);
		Rewired_Core::Rewired::KeyboardKeyCode get_keyboardKeyCode();
		void set_keyboardKeyCode(Rewired_Core::Rewired::KeyboardKeyCode value);
		Rewired_Core::Rewired::ModifierKey get_modifierKey1();
		void set_modifierKey1(Rewired_Core::Rewired::ModifierKey value);
		Rewired_Core::Rewired::ModifierKey get_modifierKey2();
		void set_modifierKey2(Rewired_Core::Rewired::ModifierKey value);
		Rewired_Core::Rewired::ModifierKey get_modifierKey3();
		void set_modifierKey3(Rewired_Core::Rewired::ModifierKey value);
		Rewired_Core::Rewired::AxisType get_axisType();
		Rewired_Core::Rewired::ModifierKeyFlags get_modifierKeyFlags();
		UnityEngine_CoreModule::UnityEngine::KeyCode get_keyCode();
		void set_keyCode(UnityEngine_CoreModule::UnityEngine::KeyCode value);
		bool get_hasModifiers();
		Rewired_Core::Rewired::ControllerMap* get_controllerMap();
		bool get_enabled();
		void set_enabled(bool value);
		mscorlib::System::String* get_elementIdentifierName();
		mscorlib::System::String* get_actionDescriptiveName();
		int32_t get_elementIndex();
		int32_t get_id();
		bool get_isKeyboardMap();
		static int32_t get_nextUid();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ActionElementMap* map);
		void _ctor(int32_t actionId, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId);
		void _ctor(int32_t actionId, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::Pole axisContribution, Rewired_Core::Rewired::AxisRange axisRange);
		void _ctor(int32_t actionId, Rewired_Core::Rewired::ControllerElementType elementType, int32_t elementIdentifierId, Rewired_Core::Rewired::Pole axisContribution, Rewired_Core::Rewired::AxisRange axisRange, bool invert);
		void _ctor(int32_t actionId, Rewired_Core::Rewired::ControllerElementType elementType, Rewired_Core::Rewired::Pole axisContribution, Rewired_Core::Rewired::KeyboardKeyCode keyboardKeyCode, Rewired_Core::Rewired::ModifierKey modifierKey1, Rewired_Core::Rewired::ModifierKey modifierKey2, Rewired_Core::Rewired::ModifierKey modifierKey3);
		bool CheckForAssignmentConflict(Rewired_Core::Rewired::ElementAssignment elementAssignment);
		bool CheckForAssignmentConflict(Rewired_Core::Rewired::ActionElementMap* elementMap);
		bool ShowInField(Rewired_Core::Rewired::AxisRange fieldActionRange);
		bool IsTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget);
		bool IsTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget);
		void pXXhqqTXUodTKLLhyHnaRatyRwg(Rewired_Core::Rewired::ControllerMap* A_1);
		void DKXZFdCMMMuLxogtMRkttNPcwhs(Rewired_Core::Rewired::ControllerMap* A_1, Rewired_Core::Rewired::HardwareControllerMap_Game* A_2);
		void pXXhqqTXUodTKLLhyHnaRatyRwg(bool A_1);
		void pXXhqqTXUodTKLLhyHnaRatyRwg(Rewired_Core::Rewired::ControllerType A_1, Rewired_Core::Rewired::HardwareControllerMap_Game* A_2, bool A_3);
		void OhIYolZWfTkAtiLWohvmAMujLUZ();
		mscorlib::System::String* BsBGpldiQpzBiMKZVvbxWHFrBmcS();
		void YKZBMWjnxRgiKHTlqTUxBHLfkvNW();
		bool hZRhYhZduElwzpoguVLWijagYRK(Rewired_Core::Rewired::KeyboardKeyCode A_1, Rewired_Core::Rewired::ModifierKeyFlags A_2);
		bool FxcBceeGogQGEgRABfaMzxIWONFF(int32_t A_1, Rewired_Core::Rewired::AxisRange A_2);
		bool TMHGUhNfhIGreKJwEKHyhKTxmTG(Rewired_Core::Rewired::ElementAssignmentType A_1);
		void YuHnCvFcRpJMxnxWxTWgWPlqFjX();
		void hBQOulAatbojCkWRsvTUgqKznoY();
		void GsMEhazuAcODWgOakayVlMrTWGf();
		Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* BTjEytEDmfXDlKCGhgjizVfcbDhc();
		void oEKaCGHExUmCjCFSEnlxSTdOydKx(Rewired_Core::Rewired::Utils::Classes::Data::SerializedObject* A_1);
		mscorlib::System::String* ToString();
		static void _cctor();
	};
}

