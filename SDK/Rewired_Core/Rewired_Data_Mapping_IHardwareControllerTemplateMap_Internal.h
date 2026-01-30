#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired::Interfaces { struct IControllerTemplateElementIdentifier; };
namespace Rewired_Core::Rewired::Data::Mapping { struct IControllerTemplateMapSpecialElement_Internal; };
namespace Rewired_Core { struct TRPKZqgoeeqwqIpWIsatQOCvNSY; };
namespace Rewired_Core::Rewired { struct Controller; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct IHardwareControllerTemplateMap_Internal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_name();
		mscorlib::System::Guid get_typeGuid();
		int32_t GetElementIdentifierCount();
		Rewired_Core::Rewired::Interfaces::IControllerTemplateElementIdentifier* GetTemplateElementIdentifier(int32_t index);
		Rewired_Core::Rewired::Interfaces::IControllerTemplateElementIdentifier* GetTemplateElementIdentifierById(int32_t elementIdentifierId);
		Rewired_Core::Rewired::Data::Mapping::IControllerTemplateMapSpecialElement_Internal* GetSpecialTemplateElementByElementIdentifierId(int32_t id);
		Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY* GetAxisTarget(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId);
		Rewired_Core::TRPKZqgoeeqwqIpWIsatQOCvNSY* GetButtonTarget(Rewired_Core::Rewired::Controller* controller, int32_t elementIdentifierId);
	};
}

