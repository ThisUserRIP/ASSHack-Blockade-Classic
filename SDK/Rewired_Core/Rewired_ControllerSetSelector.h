#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ControllerSetSelector_Type.h"
#include "Rewired_ControllerType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired { struct IControllerTemplate; };

namespace Rewired_Core::Rewired
{
	struct ControllerSetSelector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerSetSelector_Type _type;
		Rewired_Core::Rewired::ControllerType _controllerType;
		mscorlib::System::String* _guid;
		mscorlib::System::String* _hardwareIdentifier;
		int32_t _controllerId;
		mscorlib::System::Guid gNcZDnnPmifhmMGvBGvQZlkYBxg;
		void _ctor(Rewired_Core::Rewired::ControllerSetSelector_Type type);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::ControllerSetSelector* source);
		void _ctor(Rewired_Core::Rewired::ControllerSetSelector_Type type, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* guid, mscorlib::System::String* hardwareIdentifier, int32_t controllerId);
		bool get_hasControllerType();
		Rewired_Core::Rewired::ControllerSetSelector_Type get_type();
		void set_type(Rewired_Core::Rewired::ControllerSetSelector_Type value);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		mscorlib::System::Guid get_hardwareTypeGuid();
		void set_hardwareTypeGuid(mscorlib::System::Guid value);
		mscorlib::System::String* get_hardwareIdentifier();
		void set_hardwareIdentifier(mscorlib::System::String* value);
		mscorlib::System::Guid get_controllerTemplateTypeGuid();
		void set_controllerTemplateTypeGuid(mscorlib::System::Guid value);
		mscorlib::System::Guid get_deviceInstanceGuid();
		void set_deviceInstanceGuid(mscorlib::System::Guid value);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		bool Matches(Rewired_Core::Rewired::Controller* controller);
		mscorlib::System::String* ToString();
		void llIFnMClIUWAZdHCbmWeWAWEpbe();
		void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
		void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
		mscorlib::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone();
		static Rewired_Core::Rewired::ControllerSetSelector* SelectAll();
		static Rewired_Core::Rewired::ControllerSetSelector* SelectControllerType(Rewired_Core::Rewired::ControllerType controllerType);
		static Rewired_Core::Rewired::ControllerSetSelector* SelectHardwareType(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::Guid hardwareTypeGuid, mscorlib::System::String* hardwareIdentifier);
		static Rewired_Core::Rewired::ControllerSetSelector* SelectHardwareType(Rewired_Core::Rewired::Controller* controller);
		static Rewired_Core::Rewired::ControllerSetSelector* SelectControllerTemplateType(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::Guid controllerTemplateTypeGuid);
		static Rewired_Core::Rewired::ControllerSetSelector* SelectControllerTemplateType(Rewired_Core::Rewired::IControllerTemplate* controllerTemplate);
		static Rewired_Core::Rewired::ControllerSetSelector* SelectPersistentControllerInstance(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::Guid deviceInstanceGuid);
		static Rewired_Core::Rewired::ControllerSetSelector* SelectPersistentControllerInstance(Rewired_Core::Rewired::Controller* controller);
		static Rewired_Core::Rewired::ControllerSetSelector* SelectSessionControllerInstance(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		static Rewired_Core::Rewired::ControllerSetSelector* SelectSessionControllerInstance(Rewired_Core::Rewired::Controller* controller);
	};
}

