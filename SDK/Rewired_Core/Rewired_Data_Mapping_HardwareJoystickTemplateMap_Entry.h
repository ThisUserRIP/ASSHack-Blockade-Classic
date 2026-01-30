#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_HardwareJoystickTemplateMap.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickTemplateMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickTemplateMap_ElementIdentifierMap; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickTemplateMap_Entry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		mscorlib::System::String* name;
		mscorlib::System::String* joystickGuid;
		mscorlib::System::String* fileGuid;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap>* elementIdentifierMappings;
		mscorlib::System::Guid get_JoystickGuid();
		int32_t GetJoystickElementId(int32_t templateElementId);
		int32_t GetTemplateElementId(int32_t joystickElementId);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap* GetElementIdentifierMap(int32_t templateId);
		void GetElementIdentifierMaps(int32_t templateId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickTemplateMap_ElementIdentifierMap>* results);
		void _ctor();
	};
}

