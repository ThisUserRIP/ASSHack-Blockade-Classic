#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_Mapping_HardwareJoystickMap.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap; };
#include "Rewired_CompoundControllerElementType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap_CompoundElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::CompoundControllerElementType type;
		int32_t elementIdentifier;
		IL2CPP::Array<int32_t>* componentElementIdentifiers;
		int32_t get_elementCount();
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* original);
		int32_t GetComponentElementIdentifierId(int32_t index);
		mscorlib::System::Object* DeepClone();
		void ImportVars(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* source);
		static void SortHatElementsClockwise(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement* element);
	};
}

