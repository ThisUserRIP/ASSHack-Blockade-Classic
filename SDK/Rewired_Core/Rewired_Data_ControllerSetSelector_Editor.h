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
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace Rewired_Core::Rewired { struct ControllerSetSelector; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data
{
	struct ControllerSetSelector_Editor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerSetSelector_Type _type;
		Rewired_Core::Rewired::ControllerType _controllerType;
		mscorlib::System::String* _hardwareTypeGuidString;
		mscorlib::System::String* _hardwareIdentifier;
		mscorlib::System::String* _controllerTemplateTypeGuidString;
		mscorlib::System::String* _deviceInstanceGuidString;
		int32_t _customControllerSourceId;
		int32_t _controllerId;
		void _ctor(Rewired_Core::Rewired::ControllerSetSelector_Type type);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::ControllerSetSelector_Editor* source);
		Rewired_Core::Rewired::ControllerSetSelector_Type get_type();
		void set_type(Rewired_Core::Rewired::ControllerSetSelector_Type value);
		Rewired_Core::Rewired::ControllerType get_controllerType();
		void set_controllerType(Rewired_Core::Rewired::ControllerType value);
		mscorlib::System::Guid get_hardwareTypeGuid();
		void set_hardwareTypeGuid(mscorlib::System::Guid value);
		mscorlib::System::String* get_hardwareTypeGuidString();
		void set_hardwareTypeGuidString(mscorlib::System::String* value);
		mscorlib::System::String* get_hardwareIdentifier();
		void set_hardwareIdentifier(mscorlib::System::String* value);
		mscorlib::System::Guid get_controllerTemplateTypeGuid();
		void set_controllerTemplateTypeGuid(mscorlib::System::Guid value);
		mscorlib::System::String* get_controllerTemplateTypeGuidString();
		void set_controllerTemplateTypeGuidString(mscorlib::System::String* value);
		mscorlib::System::Guid get_deviceInstanceGuid();
		void set_deviceInstanceGuid(mscorlib::System::Guid value);
		mscorlib::System::String* get_deviceInstanceGuidString();
		void set_deviceInstanceGuidString(mscorlib::System::String* value);
		int32_t get_controllerId();
		void set_controllerId(int32_t value);
		int32_t get_customControllerSourceId();
		void set_customControllerSourceId(int32_t value);
		Rewired_Core::Rewired::ControllerSetSelector* MothdKqASnQRIaIlaFBhFAiEqJqj();
		mscorlib::System::Object* Rewired_Utils_Interfaces_IDeepCloneable_DeepClone();
	};
}

