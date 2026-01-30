#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct InputFieldInfo; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "..\Rewired_Core\Rewired_ControllerType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\Rewired_Core\Rewired_ControllerPollingInfo.h"
namespace Rewired_Core::Rewired { struct ControllerPollingInfo; };
#include "..\Rewired_Core\Rewired_ModifierKeyFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
#include "..\Rewired_Core\Rewired_ElementAssignment.h"
namespace Rewired_Core::Rewired { struct ElementAssignment; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_InputMapping : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _actionName_k__BackingField;
		Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo* _fieldInfo_k__BackingField;
		Rewired_Core::Rewired::ControllerMap* _map_k__BackingField;
		Rewired_Core::Rewired::ActionElementMap* _aem_k__BackingField;
		Rewired_Core::Rewired::ControllerType _controllerType_k__BackingField;
		int32_t _controllerId_k__BackingField;
		Rewired_Core::Rewired::ControllerPollingInfo _pollingInfo_k__BackingField;
		Rewired_Core::Rewired::ModifierKeyFlags _modifierKeyFlags_k__BackingField;
		mscorlib::System::String* get_actionName();
		void set_actionName(mscorlib::System::String* value);
		Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo* get_fieldInfo();
		void set_fieldInfo(Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo* value);
		Rewired_Core::Rewired::ControllerMap* get_map();
		void set_map(Rewired_Core::Rewired::ControllerMap* value);
		Rewired_Core::Rewired::ActionElementMap* get_aem();
		void set_aem(Rewired_Core::Rewired::ActionElementMap* value);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		Rewired_Core::Rewired::ControllerPollingInfo get_pollingInfo();
		void set_pollingInfo(Rewired_Core::Rewired::ControllerPollingInfo value);
		Rewired_Core::Rewired::ModifierKeyFlags get_modifierKeyFlags();
		void set_modifierKeyFlags(Rewired_Core::Rewired::ModifierKeyFlags value);
		Rewired_Core::Rewired::AxisRange get_axisRange();
		mscorlib::System::String* get_elementName();
		void _ctor(mscorlib::System::String* actionName, Assembly_CSharp::Rewired::UI::ControlMapper::InputFieldInfo* fieldInfo, Rewired_Core::Rewired::ControllerMap* map, Rewired_Core::Rewired::ActionElementMap* aem, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		Rewired_Core::Rewired::ElementAssignment ToElementAssignment(Rewired_Core::Rewired::ControllerPollingInfo pollingInfo);
		Rewired_Core::Rewired::ElementAssignment ToElementAssignment(Rewired_Core::Rewired::ControllerPollingInfo pollingInfo, Rewired_Core::Rewired::ModifierKeyFlags modifierKeyFlags);
		Rewired_Core::Rewired::ElementAssignment ToElementAssignment();
	};
}

